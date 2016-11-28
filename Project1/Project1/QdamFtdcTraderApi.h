/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company �Ϻ���Ͷ����Ƽ����޹�˾
///@file QdamFtdcTraderApi.h
///@brief �����˿ͻ��˽ӿ�
///@history
///20150520	���һ�	�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(QDAM_FTDCTRADERAPI_H)
#define QDAM_FTDCTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "QdamFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT 
#endif

class CQdamFtdcTraderSpi
{
public:
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected(){};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	virtual void OnFrontDisconnected(int nReason){};
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///���Ļص���ʼ֪ͨ����API�յ�һ�����ĺ����ȵ��ñ�������Ȼ���Ǹ�������Ļص�������Ǳ��Ļص�����֪ͨ��
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
	virtual void OnPackageStart(int nTopicID, int nSequenceNo){};
	
	///���Ļص�����֪ͨ����API�յ�һ�����ĺ����ȵ��ñ��Ļص���ʼ֪ͨ��Ȼ���Ǹ�������Ļص��������ñ�������
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
	virtual void OnPackageEnd(int nTopicID, int nSequenceNo){};


	///����Ӧ��
	virtual void OnRspError(CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�û���¼Ӧ��
	virtual void OnRspUserLogin(CQdamFtdcRspUserLoginField *pRspUserLogin, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�û��˳�Ӧ��
	virtual void OnRspUserLogout(CQdamFtdcRspUserLogoutField *pRspUserLogout, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�û������޸�Ӧ��
	virtual void OnRspUserPasswordUpdate(CQdamFtdcUserPasswordUpdateField *pUserPasswordUpdate, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����¼��Ӧ��
	virtual void OnRspOrderInsert(CQdamFtdcInputOrderField *pInputOrder, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������Ӧ��
	virtual void OnRspOrderAction(CQdamFtdcOrderActionField *pOrderAction, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����������֪ͨ
	virtual void OnRtnFlowMessageCancel(CQdamFtdcFlowMessageCancelField *pFlowMessageCancel) {};

	///�ɽ��ر�
	virtual void OnRtnTrade(CQdamFtdcTradeField *pTrade) {};

	///�����ر�
	virtual void OnRtnOrder(CQdamFtdcOrderField *pOrder) {};

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(CQdamFtdcInputOrderField *pInputOrder, CQdamFtdcRspInfoField *pRspInfo) {};

	///������������ر�
	virtual void OnErrRtnOrderAction(CQdamFtdcOrderActionField *pOrderAction, CQdamFtdcRspInfoField *pRspInfo) {};

	///��Լ����״̬֪ͨ
	virtual void OnRtnInstrumentStatus(CQdamFtdcInstrumentStatusField *pInstrumentStatus) {};

	///�˻������ر�
	virtual void OnRtnInvestorAccountDeposit(CQdamFtdcInvestorAccountDepositResField *pInvestorAccountDepositRes) {};

	///������Ϣ֪ͨ
	virtual void OnRtnMessageNotify(CQdamFtdcMessageNotifyField *pMessageNotify) {};

	///������ѯӦ��
	virtual void OnRspQryOrder(CQdamFtdcOrderField *pOrder, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ɽ�����ѯӦ��
	virtual void OnRspQryTrade(CQdamFtdcTradeField *pTrade, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����Ͷ�����˻���ѯӦ��
	virtual void OnRspQryUserInvestor(CQdamFtdcRspUserInvestorField *pRspUserInvestor, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ�����ʽ��˻���ѯӦ��
	virtual void OnRspQryInvestorAccount(CQdamFtdcRspInvestorAccountField *pRspInvestorAccount, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Լ��ѯӦ��
	virtual void OnRspQryInstrument(CQdamFtdcRspInstrumentField *pRspInstrument, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������ѯӦ��
	virtual void OnRspQryExchange(CQdamFtdcRspExchangeField *pRspExchange, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ���ֲֲ߳�ѯӦ��
	virtual void OnRspQryInvestorPosition(CQdamFtdcRspInvestorPositionField *pRspInvestorPosition, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������Ӧ��
	virtual void OnRspSubscribeTopic(CQdamFtdcDisseminationField *pDissemination, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯӦ��
	virtual void OnRspQryTopic(CQdamFtdcDisseminationField *pDissemination, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ�����������ʲ�ѯӦ��
	virtual void OnRspQryInvestorFee(CQdamFtdcInvestorFeeField *pInvestorFee, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ���߱�֤���ʲ�ѯӦ��
	virtual void OnRspQryInvestorMargin(CQdamFtdcInvestorMarginField *pInvestorMargin, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Լ����Ӧ��
	virtual void OnRspQryMarketData(CQdamFtdcRspMarketDataField *pRspMarketData, CQdamFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

class TRADER_API_EXPORT CQdamFtdcTraderApi
{
public:
	///����TraderApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@return ��������UserApi
	static CQdamFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "");
	
	///��ȡϵͳ�汾��
	///@param nMajorVersion ���汾��
	///@param nMinorVersion �Ӱ汾��
	///@return ϵͳ��ʶ�ַ���
	static const char *GetVersion();
	
	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void Release() = 0;
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual void Init() = 0;
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int Join() = 0;
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	virtual const char *GetTradingDay() = 0;
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	///ע�����ַ����������ַ
	///@param pszNsAddress�����ַ����������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
	///@remark RegisterFront������RegisterNameServer
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	
	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CQdamFtdcTraderSpi *pSpi) = 0;
	
	///����֤��
	///@param pszCertFileName �û�֤���ļ���
	///@param pszKeyFileName �û�˽Կ�ļ���
	///@param pszCaFileName ������CA֤���ļ���
	///@param pszKeyFilePassword �û�˽Կ�ļ�����
	///@return 0 �����ɹ�
	///@return -1 ������CA֤������ʧ��
	///@return -2 �û�֤������ʧ��
	///@return -3 �û�˽Կ����ʧ��	
	///@return -4 �û�֤��У��ʧ��
	virtual int RegisterCertificateFile(const char *pszCertFileName, const char *pszKeyFileName, 
		const char *pszCaFileName, const char *pszKeyFilePassword) = 0;

	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        QDAM_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        QDAM_TERT_RESUME:���ϴ��յ�������
	///        QDAM_TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	virtual void SubscribePrivateTopic(QDAM_TE_RESUME_TYPE nResumeType) = 0;
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        QDAM_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        QDAM_TERT_RESUME:���ϴ��յ�������
	///        QDAM_TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	virtual void SubscribePublicTopic(QDAM_TE_RESUME_TYPE nResumeType) = 0;

	///���Ľ���Ա����
	///@param nResumeType ����Ա���ش���ʽ  
	///        QDAM_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        QDAM_TERT_RESUME:���ϴ��յ�������
	///        QDAM_TERT_QUICK:ֻ���͵�¼����Ա��������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�����Ա�������ݡ�
	virtual void SubscribeUserTopic(QDAM_TE_RESUME_TYPE nResumeType) = 0;
	
	///����������ʱʱ�䡣
	///@param timeout ������ʱʱ��(��)  
	virtual void SetHeartbeatTimeout(unsigned int timeout) = 0;
	
	///��������־�ļ�
	///@param pszReqLogFileName ������־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	virtual int OpenRequestLog(const char *pszReqLogFileName) = 0;

	///��Ӧ����־�ļ�
	///@param pszRspLogFileName Ӧ����־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	virtual int OpenResponseLog(const char *pszRspLogFileName) = 0;


	///�û���¼����
	virtual int ReqUserLogin(CQdamFtdcReqUserLoginField *pReqUserLogin, int nRequestID) = 0;

	///�û��˳�����
	virtual int ReqUserLogout(CQdamFtdcReqUserLogoutField *pReqUserLogout, int nRequestID) = 0;

	///�û������޸�����
	virtual int ReqUserPasswordUpdate(CQdamFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) = 0;

	///����¼������
	virtual int ReqOrderInsert(CQdamFtdcInputOrderField *pInputOrder, int nRequestID) = 0;

	///������������
	virtual int ReqOrderAction(CQdamFtdcOrderActionField *pOrderAction, int nRequestID) = 0;

	///������ѯ����
	virtual int ReqQryOrder(CQdamFtdcQryOrderField *pQryOrder, int nRequestID) = 0;

	///�ɽ�����ѯ����
	virtual int ReqQryTrade(CQdamFtdcQryTradeField *pQryTrade, int nRequestID) = 0;

	///����Ͷ�����˻���ѯ����
	virtual int ReqQryUserInvestor(CQdamFtdcQryUserInvestorField *pQryUserInvestor, int nRequestID) = 0;

	///Ͷ�����ʽ��˻���ѯ����
	virtual int ReqQryInvestorAccount(CQdamFtdcQryInvestorAccountField *pQryInvestorAccount, int nRequestID) = 0;

	///��Լ��ѯ����
	virtual int ReqQryInstrument(CQdamFtdcQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///��������ѯ����
	virtual int ReqQryExchange(CQdamFtdcQryExchangeField *pQryExchange, int nRequestID) = 0;

	///Ͷ���ֲֲ߳�ѯ����
	virtual int ReqQryInvestorPosition(CQdamFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID) = 0;

	///������������
	virtual int ReqSubscribeTopic(CQdamFtdcDisseminationField *pDissemination, int nRequestID) = 0;

	///�����ѯ����
	virtual int ReqQryTopic(CQdamFtdcDisseminationField *pDissemination, int nRequestID) = 0;

	///Ͷ�����������ʲ�ѯ����
	virtual int ReqQryInvestorFee(CQdamFtdcQryInvestorFeeField *pQryInvestorFee, int nRequestID) = 0;

	///Ͷ���߱�֤���ʲ�ѯ����
	virtual int ReqQryInvestorMargin(CQdamFtdcQryInvestorMarginField *pQryInvestorMargin, int nRequestID) = 0;

	///��Լ�����ѯ
	virtual int ReqQryMarketData(CQdamFtdcQryMarketDataField *pQryMarketData, int nRequestID) = 0;
protected:
	~CQdamFtdcTraderApi(){};
};

#endif
