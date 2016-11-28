// mddemo.cpp : 
//һ���򵥵����ӣ�����QdamFtdcMduserApi��QdamFtdcMduserSpi�ӿڵ�ʹ�á�

#include <stdio.h>
#include <string.h>
#include <float.h>
#include "QdamFtdcMdApi.h"

class CSimpleHandler : public CQdamFtdcMduserSpi
{
public:
	// ���캯������Ҫһ����Ч��ָ��CQdamFtdcMduserApiʵ����ָ��
	CSimpleHandler(CQdamFtdcMduserApi *pUserApi) : m_pUserApi(pUserApi) {
	
		printf("%s", "return create\n");
	}

	~CSimpleHandler() {}

	// ���ͻ��������鷢��������������ͨ�����ӣ��ͻ�����Ҫ���е�¼
	void OnFrontConnected()
	{
		printf("%s\n", "connected");
		printf("%s\n", m_pUserApi->GetVersion());
		CQdamFtdcReqUserLoginField reqUserLogin;
		strcpy_s(reqUserLogin.TradingDay, m_pUserApi->GetTradingDay());
		//strcpy_s(reqUserLogin.TradingDay, "20161128");

		strcpy_s(reqUserLogin.BrokerID, "4200");
		strcpy_s(reqUserLogin.UserID, "99000700");
		strcpy_s(reqUserLogin.Password, "170775");
		
		m_pUserApi->ReqUserLogin(&reqUserLogin, 0);
		
	}

	// ���ͻ��������鷢��������ͨ�����ӶϿ�ʱ���÷���������
	void OnFrontDisconnected()
	{
		// ��������������API���Զ��������ӣ��ͻ��˿ɲ�������
		printf("OnFrontDisconnected.\n");
	}

	// ���ͻ��˷�����¼����֮�󣬸÷����ᱻ���ã�֪ͨ�ͻ��˵�¼�Ƿ�ɹ�
	void OnRspUserLogin(CQdamFtdcRspUserLoginField *pRspUserLogin, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspUserLogin:\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);

		if (pRspInfo->ErrorID != 0)
		{
			// �˵�ʧ�ܣ��ͻ�������д�����
			printf("Failed to login, errorcode=%d errormsg=%s requestid=%d chain=%d", pRspInfo->ErrorID, pRspInfo->ErrorMsg, nRequestID, bIsLast);
			return;
		}
		char * contracts[3] = { "","","" };
		contracts[0] = "IF1503";
		contracts[1] = "IF1504";
		contracts[2] = "IF1506";
		m_pUserApi->SubMarketData(contracts, 3);

		char * uncontracts[2] = { "","" };
		uncontracts[0] = "IF1509";
		uncontracts[1] = "IH1503";
		m_pUserApi->UnSubMarketData(uncontracts, 2);
	}

	// �������֪ͨ�����������������֪ͨ�ͻ���
	void OnRtnDepthMarketData(CQdamFtdcDepthMarketDataField *pMarketData)
	{
		// �ͻ��˰��账���ص�����
		printf("%s,%s,%d,", pMarketData->InstrumentID, pMarketData->UpdateTime, pMarketData->UpdateMillisec);
		if (pMarketData->AskPrice1 == DBL_MAX)
			printf("%s,", "");
		else
			printf("%f,", pMarketData->AskPrice1);

		if (pMarketData->BidPrice1 == DBL_MAX)
			printf("%s \n", "");
		else
			printf("%f \n", pMarketData->BidPrice1);
	}

	// ����û�����ĳ���֪ͨ
	void OnRspError(CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("OnRspError:\n");
		printf("ErrorCode=[%d], ErrorMsg=[%s]\n", pRspInfo->ErrorID, pRspInfo->ErrorMsg);
		printf("RequestID=[%d], Chain=[%d]\n", nRequestID, bIsLast);
		// �ͻ�������д�����
	}

	///���ĺ�Լ�������Ϣ
	void OnRspSubMarketData(CQdamFtdcSpecificInstrumentField *pSpecificInstrument, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("Sub ���ض��ĺ�Լ��%s \n", pSpecificInstrument->InstrumentID);
	}

	///���ĺ�Լ�������Ϣ
	void OnRspUnSubMarketData(CQdamFtdcSpecificInstrumentField *pSpecificInstrument, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
	{
		printf("UnSub ���ض��ĺ�Լ��%s \n", pSpecificInstrument->InstrumentID);
	}

private:
	// ָ��CQdamFtdcMduserApiʵ����ָ��
	CQdamFtdcMduserApi *m_pUserApi;
};

int main()
{
	// ����һ��CQdamFtdcMduserApiʵ��
	CQdamFtdcMduserApi *pUserApi = CQdamFtdcMduserApi::CreateFtdcMduserApi();
	// ����һ���¼������ʵ��
	CSimpleHandler sh(pUserApi);

	// ע��һ�¼������ʵ��
	pUserApi->RegisterSpi(&sh);

	// ע����Ҫ�������������
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������	//pUserApi-> SubscribeMarketDataTopic (101, TERT_RESUME);
	//pUserApi-> SubscribeMarketDataTopic (110, QDAM_TERT_RESTART);
	// �������鷢���������ĵ�ַ
	pUserApi->RegisterFront("tcp://58.247.2.86:21213");
	// ʹ�ͻ��˿�ʼ�����鷢����������������
	pUserApi->Init();
	// �ͷ�useapiʵ��
	pUserApi->Release();
	return 0;
}

