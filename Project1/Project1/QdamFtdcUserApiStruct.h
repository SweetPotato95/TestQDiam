/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company 上海量投网络科技有限公司
///@file QdamFtdcUserApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(Qdam_FTDCSTRUCT_H)
#define Qdam_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "QdamFtdcUserApiDataType.h"

///响应信息
struct CQdamFtdcRspInfoField
{
	///错误代码
	TQdamFtdcErrorIDType	ErrorID;
	///错误信息
	TQdamFtdcErrorMsgType	ErrorMsg;
};

///系统用户登录请求
struct CQdamFtdcReqUserLoginField
{
	///交易日
	TQdamFtdcDateType	TradingDay;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///密码
	TQdamFtdcPasswordType	Password;
	///用户端产品信息
	TQdamFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TQdamFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TQdamFtdcProtocolInfoType	ProtocolInfo;
	///IP地址
	TQdamFtdcIPAddressType	IPAddress;
	///Mac地址
	TQdamFtdcMacAddressType	MacAddress;
	///数据中心代码
	TQdamFtdcDataCenterIDType	DataCenterID;
	///动态密码
	TQdamFtdcPasswordType	OneTimePassword;
	///终端IP地址
	TQdamFtdcIPAddressType	ClientIPAddress;
};

///系统用户登录应答
struct CQdamFtdcRspUserLoginField
{
	///交易日
	TQdamFtdcDateType	TradingDay;
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
	///登录成功时间
	TQdamFtdcTimeType	LoginTime;
	///用户最大本地报单号
	TQdamFtdcUserOrderLocalIDType	MaxOrderLocalID;
	///交易系统名称
	TQdamFtdcTradingSystemNameType	TradingSystemName;
	///数据中心代码
	TQdamFtdcDataCenterIDType	DataCenterID;
	///会员私有流当前长度
	TQdamFtdcSequenceNoType	PrivateFlowSize;
	///交易员私有流当前长度
	TQdamFtdcSequenceNoType	UserFlowSize;
	///登录附加信息
	TQdamFtdcLoginInfoType	LoginInfo;
};

///用户登出请求
struct CQdamFtdcReqUserLogoutField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
};

///用户登出请求
struct CQdamFtdcRspUserLogoutField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
};

///强制用户退出
struct CQdamFtdcForceUserExitField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
};

///用户口令修改
struct CQdamFtdcUserPasswordUpdateField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
	///旧密码
	TQdamFtdcPasswordType	OldPassword;
	///新密码
	TQdamFtdcPasswordType	NewPassword;
};

///输入报单
struct CQdamFtdcInputOrderField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///用户本地报单号
	TQdamFtdcUserOrderLocalIDType	UserOrderLocalID;
	///用户自定义域
	TQdamFtdcCustomType	UserCustom;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///系统报单编号
	TQdamFtdcOrderSysIDType	OrderSysID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///报单类型
	TQdamFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TQdamFtdcDirectionType	Direction;
	///开平标志
	TQdamFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
	///价格
	TQdamFtdcPriceType	LimitPrice;
	///数量
	TQdamFtdcVolumeType	Volume;
	///有效期类型
	TQdamFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TQdamFtdcDateType	GTDDate;
	///成交量类型
	TQdamFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TQdamFtdcVolumeType	MinVolume;
	///止损价
	TQdamFtdcPriceType	StopPrice;
	///强平原因
	TQdamFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TQdamFtdcBoolType	IsAutoSuspend;
	///业务单元
	TQdamFtdcBusinessUnitType	BusinessUnit;
	///营业部代码
	TQdamFtdcBranchIDType	BranchID;
	///记录编号
	TQdamFtdcSequenceNoType	RecNum;
	///业务类别
	TQdamFtdcBusinessTypeType	BusinessType;
};

///报单操作
struct CQdamFtdcOrderActionField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///用户本地报单号
	TQdamFtdcUserOrderLocalIDType	UserOrderLocalID;
	///用户自定义域
	TQdamFtdcCustomType	UserCustom;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///报单编号
	TQdamFtdcOrderSysIDType	OrderSysID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///本次撤单操作的本地编号
	TQdamFtdcUserOrderLocalIDType	UserOrderActionLocalID;
	///报单操作标志
	TQdamFtdcActionFlagType	ActionFlag;
	///价格
	TQdamFtdcPriceType	LimitPrice;
	///数量变化
	TQdamFtdcVolumeType	VolumeChange;
	///记录编号
	TQdamFtdcSequenceNoType	RecNum;
};

///内存表导出
struct CQdamFtdcMemDBField
{
	///内存表名
	TQdamFtdcMemTableNameType	MemTableName;
};

///投资者资金帐户出入金请求
struct CQdamFtdcReqAccountDepositField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///资金流水号
	TQdamFtdcAccountSeqNoType	AccountSeqNo;
	///资金帐号
	TQdamFtdcAccountIDType	AccountID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///金额
	TQdamFtdcMoneyType	Amount;
	///出入金方向
	TQdamFtdcAccountDirectionType	AmountDirection;
	///用户代码
	TQdamFtdcUserIDType	UserID;
};

///投资者资金帐户出入金应答
struct CQdamFtdcRspAccountDepositField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///资金帐号
	TQdamFtdcAccountIDType	AccountID;
	///资金流水号
	TQdamFtdcAccountSeqNoType	AccountSeqNo;
	///金额
	TQdamFtdcMoneyType	Amount;
	///出入金方向
	TQdamFtdcAccountDirectionType	AmountDirection;
	///可用资金
	TQdamFtdcMoneyType	Available;
	///结算准备金
	TQdamFtdcMoneyType	Balance;
	///用户代码
	TQdamFtdcUserIDType	UserID;
};

///实时上场
struct CQdamFtdcTBCommandField
{
	///DB命令序号
	TQdamFtdcCommandNoType	CommandNo;
	///操作日期
	TQdamFtdcDateType	CommandDate;
	///操作时间
	TQdamFtdcTimeType	CommandTime;
	///DB命令类型
	TQdamFtdcCommandTypeType	CommandType;
	///字段名
	TQdamFtdcFieldNameType	FieldName;
	///字段内容
	TQdamFtdcFieldContentType	FieldContent;
};

///出入金结果
struct CQdamFtdcInvestorAccountDepositResField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///资金帐号
	TQdamFtdcAccountIDType	AccountID;
	///资金流水号
	TQdamFtdcAccountSeqNoType	AccountSeqNo;
	///金额
	TQdamFtdcMoneyType	Amount;
	///出入金方向
	TQdamFtdcAccountDirectionType	AmountDirection;
	///可用资金
	TQdamFtdcMoneyType	Available;
	///结算准备金
	TQdamFtdcMoneyType	Balance;
	///用户代码
	TQdamFtdcUserIDType	UserID;
};

///行情基础属性
struct CQdamFtdcMarketDataBaseField
{
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///昨结算
	TQdamFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TQdamFtdcPriceType	PreClosePrice;
	///昨持仓量
	TQdamFtdcLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TQdamFtdcRatioType	PreDelta;
};

///行情静态属性
struct CQdamFtdcMarketDataStaticField
{
	///今开盘
	TQdamFtdcPriceType	OpenPrice;
	///最高价
	TQdamFtdcPriceType	HighestPrice;
	///最低价
	TQdamFtdcPriceType	LowestPrice;
	///今收盘
	TQdamFtdcPriceType	ClosePrice;
	///涨停板价
	TQdamFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TQdamFtdcPriceType	LowerLimitPrice;
	///今结算
	TQdamFtdcPriceType	SettlementPrice;
	///今虚实度
	TQdamFtdcRatioType	CurrDelta;
};

///行情最新成交属性
struct CQdamFtdcMarketDataLastMatchField
{
	///最新价
	TQdamFtdcPriceType	LastPrice;
	///数量
	TQdamFtdcVolumeType	Volume;
	///成交金额
	TQdamFtdcMoneyType	Turnover;
	///持仓量
	TQdamFtdcLargeVolumeType	OpenInterest;
};

///行情最优价属性
struct CQdamFtdcMarketDataBestPriceField
{
	///申买价一
	TQdamFtdcPriceType	BidPrice1;
	///申买量一
	TQdamFtdcVolumeType	BidVolume1;
	///申卖价一
	TQdamFtdcPriceType	AskPrice1;
	///申卖量一
	TQdamFtdcVolumeType	AskVolume1;
};

///行情申买二、三属性
struct CQdamFtdcMarketDataBid23Field
{
	///申买价二
	TQdamFtdcPriceType	BidPrice2;
	///申买量二
	TQdamFtdcVolumeType	BidVolume2;
	///申买价三
	TQdamFtdcPriceType	BidPrice3;
	///申买量三
	TQdamFtdcVolumeType	BidVolume3;
};

///行情申卖二、三属性
struct CQdamFtdcMarketDataAsk23Field
{
	///申卖价二
	TQdamFtdcPriceType	AskPrice2;
	///申卖量二
	TQdamFtdcVolumeType	AskVolume2;
	///申卖价三
	TQdamFtdcPriceType	AskPrice3;
	///申卖量三
	TQdamFtdcVolumeType	AskVolume3;
};

///行情申买四、五属性
struct CQdamFtdcMarketDataBid45Field
{
	///申买价四
	TQdamFtdcPriceType	BidPrice4;
	///申买量四
	TQdamFtdcVolumeType	BidVolume4;
	///申买价五
	TQdamFtdcPriceType	BidPrice5;
	///申买量五
	TQdamFtdcVolumeType	BidVolume5;
};

///行情申卖四、五属性
struct CQdamFtdcMarketDataAsk45Field
{
	///申卖价四
	TQdamFtdcPriceType	AskPrice4;
	///申卖量四
	TQdamFtdcVolumeType	AskVolume4;
	///申卖价五
	TQdamFtdcPriceType	AskPrice5;
	///申卖量五
	TQdamFtdcVolumeType	AskVolume5;
};

///行情更新时间属性
struct CQdamFtdcMarketDataUpdateTimeField
{
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TQdamFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TQdamFtdcMillisecType	UpdateMillisec;
};

///深度行情
struct CQdamFtdcDepthMarketDataField
{
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///昨结算
	TQdamFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TQdamFtdcPriceType	PreClosePrice;
	///昨持仓量
	TQdamFtdcLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TQdamFtdcRatioType	PreDelta;
	///今开盘
	TQdamFtdcPriceType	OpenPrice;
	///最高价
	TQdamFtdcPriceType	HighestPrice;
	///最低价
	TQdamFtdcPriceType	LowestPrice;
	///今收盘
	TQdamFtdcPriceType	ClosePrice;
	///涨停板价
	TQdamFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TQdamFtdcPriceType	LowerLimitPrice;
	///今结算
	TQdamFtdcPriceType	SettlementPrice;
	///今虚实度
	TQdamFtdcRatioType	CurrDelta;
	///最新价
	TQdamFtdcPriceType	LastPrice;
	///数量
	TQdamFtdcVolumeType	Volume;
	///成交金额
	TQdamFtdcMoneyType	Turnover;
	///持仓量
	TQdamFtdcLargeVolumeType	OpenInterest;
	///申买价一
	TQdamFtdcPriceType	BidPrice1;
	///申买量一
	TQdamFtdcVolumeType	BidVolume1;
	///申卖价一
	TQdamFtdcPriceType	AskPrice1;
	///申卖量一
	TQdamFtdcVolumeType	AskVolume1;
	///申买价二
	TQdamFtdcPriceType	BidPrice2;
	///申买量二
	TQdamFtdcVolumeType	BidVolume2;
	///申买价三
	TQdamFtdcPriceType	BidPrice3;
	///申买量三
	TQdamFtdcVolumeType	BidVolume3;
	///申卖价二
	TQdamFtdcPriceType	AskPrice2;
	///申卖量二
	TQdamFtdcVolumeType	AskVolume2;
	///申卖价三
	TQdamFtdcPriceType	AskPrice3;
	///申卖量三
	TQdamFtdcVolumeType	AskVolume3;
	///申买价四
	TQdamFtdcPriceType	BidPrice4;
	///申买量四
	TQdamFtdcVolumeType	BidVolume4;
	///申买价五
	TQdamFtdcPriceType	BidPrice5;
	///申买量五
	TQdamFtdcVolumeType	BidVolume5;
	///申卖价四
	TQdamFtdcPriceType	AskPrice4;
	///申卖量四
	TQdamFtdcVolumeType	AskVolume4;
	///申卖价五
	TQdamFtdcPriceType	AskPrice5;
	///申卖量五
	TQdamFtdcVolumeType	AskVolume5;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TQdamFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TQdamFtdcMillisecType	UpdateMillisec;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
};

///订阅合约的相关信息
struct CQdamFtdcSpecificInstrumentField
{
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///投资者权限
struct CQdamFtdcInvestorRightField
{
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///是否使用净持仓报单,子父投资者一致
	TQdamFtdcPositionTypeType	PositionType;
	///自成交处理方式,父投资者有效
	TQdamFtdcSelfTradeAvoidTypeType	SelfTradeAvoidType;
	///交易权限
	TQdamFtdcTradingRightType	TradingRight;
	///是否检查资金
	TQdamFtdcBoolType	CheckAccount;
	///是否检查持仓
	TQdamFtdcBoolType	CheckPosition;
	///报单是否报警
	TQdamFtdcBoolType	OrderWarning;
	///资金持仓是否上查
	TQdamFtdcBoolType	QryUpAccPosi;
};

///交易所代码
struct CQdamFtdcMarketDataExchangeIDField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
};

///共享内存行情查询
struct CQdamFtdcShmDepthMarketDataField
{
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///IP地址
	TQdamFtdcIPAddressType	IPAddress;
	///订阅号
	TQdamFtdcTopicIDType	TopicID;
};

///TOPIC查询
struct CQdamFtdcTopicSearchField
{
	///订阅号
	TQdamFtdcTopicIDType	TopicID;
};

///成交
struct CQdamFtdcTradeField
{
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///用户本地报单号
	TQdamFtdcUserOrderLocalIDType	UserOrderLocalID;
	///用户自定义域
	TQdamFtdcCustomType	UserCustom;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///成交编号
	TQdamFtdcTradeIDType	TradeID;
	///报单编号
	TQdamFtdcOrderSysIDType	OrderSysID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TQdamFtdcDirectionType	Direction;
	///开平标志
	TQdamFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
	///成交价格
	TQdamFtdcPriceType	TradePrice;
	///成交数量
	TQdamFtdcVolumeType	TradeVolume;
	///成交时间
	TQdamFtdcTimeType	TradeTime;
	///清算会员编号
	TQdamFtdcParticipantIDType	ClearingPartID;
	///成交金额
	TQdamFtdcMoneyType	TradeAmnt;
	///记录编号
	TQdamFtdcSequenceNoType	RecNum;
};

///报单
struct CQdamFtdcOrderField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///用户本地报单号
	TQdamFtdcUserOrderLocalIDType	UserOrderLocalID;
	///用户自定义域
	TQdamFtdcCustomType	UserCustom;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///系统报单编号
	TQdamFtdcOrderSysIDType	OrderSysID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///报单类型
	TQdamFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TQdamFtdcDirectionType	Direction;
	///开平标志
	TQdamFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
	///价格
	TQdamFtdcPriceType	LimitPrice;
	///数量
	TQdamFtdcVolumeType	Volume;
	///有效期类型
	TQdamFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TQdamFtdcDateType	GTDDate;
	///成交量类型
	TQdamFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TQdamFtdcVolumeType	MinVolume;
	///止损价
	TQdamFtdcPriceType	StopPrice;
	///强平原因
	TQdamFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TQdamFtdcBoolType	IsAutoSuspend;
	///业务单元
	TQdamFtdcBusinessUnitType	BusinessUnit;
	///营业部代码
	TQdamFtdcBranchIDType	BranchID;
	///记录编号
	TQdamFtdcSequenceNoType	RecNum;
	///业务类别
	TQdamFtdcBusinessTypeType	BusinessType;
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///插入时间
	TQdamFtdcTimeType	InsertTime;
	///报单来源
	TQdamFtdcOrderSourceType	OrderSource;
	///报单状态
	TQdamFtdcOrderStatusType	OrderStatus;
	///撤销时间
	TQdamFtdcTimeType	CancelTime;
	///撤单用户编号
	TQdamFtdcUserIDType	CancelUserID;
	///已经成交数量
	TQdamFtdcVolumeType	VolumeTraded;
	///队列剩余数量
	TQdamFtdcVolumeType	VolumeRemain;
	///已经撤单数量
	TQdamFtdcVolumeType	VolumeCancled;
	///错误代码
	TQdamFtdcErrorIDType	ErrorID;
	///错误信息
	TQdamFtdcErrorMsgType	ErrorMsg;
	///比上次增加的撤单数量
	TQdamFtdcVolumeType	VolumeIncCancled;
	///比上次增加的成交数量
	TQdamFtdcVolumeType	VolumeIncTraded;
};

///数据流回退
struct CQdamFtdcFlowMessageCancelField
{
	///序列系列号
	TQdamFtdcSequenceSeriesType	SequenceSeries;
	///交易日
	TQdamFtdcDateType	TradingDay;
	///数据中心代码
	TQdamFtdcDataCenterIDType	DataCenterID;
	///回退起始序列号
	TQdamFtdcSequenceNoType	StartSequenceNo;
	///回退结束序列号
	TQdamFtdcSequenceNoType	EndSequenceNo;
};

///信息分发
struct CQdamFtdcDisseminationField
{
	///序列系列号
	TQdamFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TQdamFtdcSequenceNoType	SequenceNo;
};

///警告消息通知
struct CQdamFtdcMessageNotifyField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///修改用户编号
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///累加次数
	TQdamFtdcTotalNumsType	Nums;
	///警告级别
	TQdamFtdcErrorLevelType	WarnLevel;
	///警告编号
	TQdamFtdcErrorIDType	WarnID;
	///警告信息
	TQdamFtdcLargeErrorMsgType	WarnMsg;
	///警告时间
	TQdamFtdcTimeType	WarnTime;
};

///合约状态
struct CQdamFtdcInstrumentStatusField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///品种代码
	TQdamFtdcProductIDType	ProductID;
	///品种名称
	TQdamFtdcProductNameType	ProductName;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///合约名称
	TQdamFtdcInstrumentNameType	InstrumentName;
	///交割年份
	TQdamFtdcYearType	DeliveryYear;
	///交割月
	TQdamFtdcMonthType	DeliveryMonth;
	///限价单最大下单量
	TQdamFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TQdamFtdcVolumeType	MinLimitOrderVolume;
	///市价单最大下单量
	TQdamFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TQdamFtdcVolumeType	MinMarketOrderVolume;
	///数量乘数
	TQdamFtdcVolumeMultipleType	VolumeMultiple;
	///报价单位
	TQdamFtdcPriceTickType	PriceTick;
	///币种
	TQdamFtdcCurrencyType	Currency;
	///多头限仓
	TQdamFtdcVolumeType	LongPosLimit;
	///空头限仓
	TQdamFtdcVolumeType	ShortPosLimit;
	///跌停板价
	TQdamFtdcPriceType	LowerLimitPrice;
	///涨停板价
	TQdamFtdcPriceType	UpperLimitPrice;
	///昨结算
	TQdamFtdcPriceType	PreSettlementPrice;
	///合约交易状态
	TQdamFtdcInstrumentStatusType	InstrumentStatus;
	///创建日
	TQdamFtdcDateType	CreateDate;
	///上市日
	TQdamFtdcDateType	OpenDate;
	///到期日
	TQdamFtdcDateType	ExpireDate;
	///开始交割日
	TQdamFtdcDateType	StartDelivDate;
	///最后交割日
	TQdamFtdcDateType	EndDelivDate;
	///挂牌基准价
	TQdamFtdcPriceType	BasisPrice;
	///当前是否交易
	TQdamFtdcBoolType	IsTrading;
	///基础商品代码
	TQdamFtdcInstrumentIDType	UnderlyingInstrID;
	///基础商品乘数
	TQdamFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///持仓类型
	TQdamFtdcPositionTypeType	PositionType;
	///执行价
	TQdamFtdcPriceType	StrikePrice;
	///期权类型
	TQdamFtdcOptionsTypeType	OptionsType;
	///汇率
	TQdamFtdcRatioType	ExchangeRate;
	///产品类型
	TQdamFtdcProductClassType	ProductClass;
};

///报单查询
struct CQdamFtdcQryOrderField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///报单编号
	TQdamFtdcOrderSysIDType	OrderSysID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///成交查询
struct CQdamFtdcQryTradeField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///成交编号
	TQdamFtdcTradeIDType	TradeID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///合约查询
struct CQdamFtdcQryInstrumentField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///产品代码
	TQdamFtdcProductIDType	ProductID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///合约查询应答
struct CQdamFtdcRspInstrumentField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///品种代码
	TQdamFtdcProductIDType	ProductID;
	///品种名称
	TQdamFtdcProductNameType	ProductName;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///合约名称
	TQdamFtdcInstrumentNameType	InstrumentName;
	///交割年份
	TQdamFtdcYearType	DeliveryYear;
	///交割月
	TQdamFtdcMonthType	DeliveryMonth;
	///限价单最大下单量
	TQdamFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TQdamFtdcVolumeType	MinLimitOrderVolume;
	///市价单最大下单量
	TQdamFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TQdamFtdcVolumeType	MinMarketOrderVolume;
	///数量乘数
	TQdamFtdcVolumeMultipleType	VolumeMultiple;
	///报价单位
	TQdamFtdcPriceTickType	PriceTick;
	///币种
	TQdamFtdcCurrencyType	Currency;
	///多头限仓
	TQdamFtdcVolumeType	LongPosLimit;
	///空头限仓
	TQdamFtdcVolumeType	ShortPosLimit;
	///跌停板价
	TQdamFtdcPriceType	LowerLimitPrice;
	///涨停板价
	TQdamFtdcPriceType	UpperLimitPrice;
	///昨结算
	TQdamFtdcPriceType	PreSettlementPrice;
	///合约交易状态
	TQdamFtdcInstrumentStatusType	InstrumentStatus;
	///创建日
	TQdamFtdcDateType	CreateDate;
	///上市日
	TQdamFtdcDateType	OpenDate;
	///到期日
	TQdamFtdcDateType	ExpireDate;
	///开始交割日
	TQdamFtdcDateType	StartDelivDate;
	///最后交割日
	TQdamFtdcDateType	EndDelivDate;
	///挂牌基准价
	TQdamFtdcPriceType	BasisPrice;
	///当前是否交易
	TQdamFtdcBoolType	IsTrading;
	///基础商品代码
	TQdamFtdcInstrumentIDType	UnderlyingInstrID;
	///基础商品乘数
	TQdamFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///持仓类型
	TQdamFtdcPositionTypeType	PositionType;
	///执行价
	TQdamFtdcPriceType	StrikePrice;
	///期权类型
	TQdamFtdcOptionsTypeType	OptionsType;
	///汇率
	TQdamFtdcRatioType	ExchangeRate;
	///产品类型
	TQdamFtdcProductClassType	ProductClass;
};

///投资者资金查询
struct CQdamFtdcQryInvestorAccountField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
};

///投资者资金应答
struct CQdamFtdcRspInvestorAccountField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///资金帐号
	TQdamFtdcAccountIDType	AccountID;
	///上次结算准备金
	TQdamFtdcMoneyType	PreBalance;
	///上日可用资金
	TQdamFtdcMoneyType	PreAvailable;
	///入金金额
	TQdamFtdcMoneyType	Deposit;
	///出金金额
	TQdamFtdcMoneyType	Withdraw;
	///占用保证金
	TQdamFtdcMoneyType	Margin;
	///期权权利金收支
	TQdamFtdcMoneyType	Premium;
	///手续费
	TQdamFtdcMoneyType	Fee;
	///冻结的保证金
	TQdamFtdcMoneyType	FrozenMargin;
	///冻结权利金
	TQdamFtdcMoneyType	FrozenPremium;
	///冻结手续费
	TQdamFtdcMoneyType	FrozenFee;
	///平仓盈亏
	TQdamFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TQdamFtdcMoneyType	PositionProfit;
	///可用资金
	TQdamFtdcMoneyType	Available;
	///结算准备金
	TQdamFtdcMoneyType	Balance;
	///多头占用保证金
	TQdamFtdcMoneyType	LongMargin;
	///空头占用保证金
	TQdamFtdcMoneyType	ShortMargin;
	///多头冻结的保证金
	TQdamFtdcMoneyType	LongFrozenMargin;
	///空头冻结的保证金
	TQdamFtdcMoneyType	ShortFrozenMargin;
	///动态权益
	TQdamFtdcMoneyType	DynamicRights;
	///风险度
	TQdamFtdcRatioType	Risk;
	///其他费用
	TQdamFtdcMoneyType	OtherFee;
	///质押金额
	TQdamFtdcMoneyType	Mortgage;
	///币种
	TQdamFtdcCurrencyType	Currency;
};

///可用投资者查询
struct CQdamFtdcQryUserInvestorField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
};

///可用投资者应答
struct CQdamFtdcRspUserInvestorField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
};

///投资者关系查询
struct CQdamFtdcQryInvestorRelationField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
};

///投资者关系应答
struct CQdamFtdcRspInvestorRelationField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///父投资者编号
	TQdamFtdcInvestorIDType	ParentInvestorID;
};

///交易所查询请求
struct CQdamFtdcQryExchangeField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
};

///交易所查询应答
struct CQdamFtdcRspExchangeField
{
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///交易所名称
	TQdamFtdcExchangeNameType	ExchangeName;
};

///投资者持仓查询请求
struct CQdamFtdcQryInvestorPositionField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///投资者持仓查询应答
struct CQdamFtdcRspInvestorPositionField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TQdamFtdcDirectionType	Direction;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
	///占用保证金
	TQdamFtdcMoneyType	UsedMargin;
	///总持仓量
	TQdamFtdcVolumeType	Position;
	///总持仓成本
	TQdamFtdcPriceType	PositionCost;
	///初始昨持仓量(当日不变)
	TQdamFtdcVolumeType	YdPosition;
	///初始昨日持仓成本(当日不变)
	TQdamFtdcMoneyType	YdPositionCost;
	///冻结的保证金
	TQdamFtdcMoneyType	FrozenMargin;
	///开仓冻结持仓
	TQdamFtdcVolumeType	FrozenPosition;
	///平仓冻结持仓
	TQdamFtdcVolumeType	FrozenClosing;
	///持仓盈亏
	TQdamFtdcMoneyType	PositionProfit;
	///冻结的权利金
	TQdamFtdcMoneyType	FrozenPremium;
	///最后一笔成交编号
	TQdamFtdcTradeIDType	LastTradeID;
	///最后一笔本地报单编号
	TQdamFtdcOrderLocalIDType	LastOrderLocalID;
	///总持仓可平仓数量(包括平仓冻结持仓)
	TQdamFtdcVolumeType	PositionClose;
	///昨持仓可平仓数量(包括平仓冻结持仓)
	TQdamFtdcVolumeType	YdPositionClose;
	///昨持仓平仓冻结持仓
	TQdamFtdcVolumeType	YdFrozenClosing;
	///今日开仓数量(不包括冻结)
	TQdamFtdcVolumeType	OpenVolume;
	///今日平仓数量(包括昨持仓的平仓,不包括冻结)
	TQdamFtdcVolumeType	CloseVolume;
	///平仓盈亏
	TQdamFtdcMoneyType	CloseProfit;
};

///用户查询
struct CQdamFtdcQryUserField
{
	///交易用户代码
	TQdamFtdcUserIDType	StartUserID;
	///交易用户代码
	TQdamFtdcUserIDType	EndUserID;
};

///用户
struct CQdamFtdcUserField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///用户登录密码
	TQdamFtdcPasswordType	Password;
	///是否活跃
	TQdamFtdcIsActiveType	IsActive;
	///用户名称
	TQdamFtdcUserNameType	UserName;
	///用户类型
	TQdamFtdcUserTypeType	UserType;
	///营业部
	TQdamFtdcDepartmentType	Department;
	///授权功能集
	TQdamFtdcGrantFuncSetType	GrantFuncSet;
	///最大在线数
	TQdamFtdcNumberType	MaxOnline;
};

///投资者手续费率查询
struct CQdamFtdcQryInvestorFeeField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///投资者手续费率
struct CQdamFtdcInvestorFeeField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编码
	TQdamFtdcInvestorIDType	InvestorID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///开仓手续费按比例
	TQdamFtdcRatioType	OpenFeeRate;
	///开仓手续费按手数
	TQdamFtdcRatioType	OpenFeeAmt;
	///平仓手续费按比例
	TQdamFtdcRatioType	OffsetFeeRate;
	///平仓手续费按手数
	TQdamFtdcRatioType	OffsetFeeAmt;
	///平今仓手续费按比例
	TQdamFtdcRatioType	OTFeeRate;
	///平今仓手续费按手数
	TQdamFtdcRatioType	OTFeeAmt;
};

///投资者保证金率查询
struct CQdamFtdcQryInvestorMarginField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
};

///投资者保证金率
struct CQdamFtdcInvestorMarginField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///投资者编码
	TQdamFtdcInvestorIDType	InvestorID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TQdamFtdcHedgeFlagType	HedgeFlag;
	///多头占用保证金按比例
	TQdamFtdcRatioType	LongMarginRate;
	///多头保证金按手数
	TQdamFtdcRatioType	LongMarginAmt;
	///空头占用保证金按比例
	TQdamFtdcRatioType	ShortMarginRate;
	///空头保证金按手数
	TQdamFtdcRatioType	ShortMarginAmt;
};

///投资者查询
struct CQdamFtdcQryInvestorField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
};

///投资者应答
struct CQdamFtdcRspInvestorField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///投资者名称
	TQdamFtdcInvestorNameType	InvestorName;
	///投资者类型
	TQdamFtdcInvestorTypeType	InvestorType;
	///投资者组编号
	TQdamFtdcInvestorIDType	GroupID;
	///投资者组名
	TQdamFtdcInvestorNameType	GroupName;
	///别名
	TQdamFtdcAliasType	Alias;
	///连接类型
	TQdamFtdcLinkTypeType	LinkType;
	///父投资者编号
	TQdamFtdcInvestorIDType	ParentInvestorID;
	///登录次数
	TQdamFtdcNumberType	LoginStatus;
	///是否使用净持仓报单,子父投资者一致
	TQdamFtdcPositionTypeType	PositionType;
	///自成交处理方式,父投资者有效
	TQdamFtdcSelfTradeAvoidTypeType	SelfTradeAvoidType;
	///交易权限
	TQdamFtdcTradingRightType	TradingRight;
	///是否检查资金
	TQdamFtdcBoolType	CheckAccount;
	///是否检查持仓
	TQdamFtdcBoolType	CheckPosition;
	///报单是否报警
	TQdamFtdcBoolType	OrderWarning;
	///资金持仓是否上查
	TQdamFtdcBoolType	QryUpAccPosi;
};

///账号风险状况查询
struct CQdamFtdcQryAccountRiskField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///用户代码
	TQdamFtdcUserIDType	UserID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
};

///账号风险状况应答
struct CQdamFtdcRspAccountRiskField
{
	///经纪公司编号
	TQdamFtdcBrokerIDType	BrokerID;
	///投资者编号
	TQdamFtdcInvestorIDType	InvestorID;
	///资金帐号
	TQdamFtdcAccountIDType	AccountID;
	///设置准备金
	TQdamFtdcMoneyType	SetBalance;
	///开仓红线
	TQdamFtdcMoneyType	OpenAvailable;
	///平仓红线
	TQdamFtdcMoneyType	OffsetAvailable;
	///账户状态
	TQdamFtdcAccountStatusType	AccountStatus;
	///动态权益
	TQdamFtdcMoneyType	DynamicRights;
	///账户权限
	TQdamFtdcTradingRightType	TradingRight;
};

///交易用户会话查询
struct CQdamFtdcQryUserSessionField
{
	///交易用户代码
	TQdamFtdcUserIDType	StartUserID;
	///交易用户代码
	TQdamFtdcUserIDType	EndUserID;
};

///交易用户会话应答
struct CQdamFtdcRspUserSessionField
{
	///经纪公司代码
	TQdamFtdcBrokerIDType	BrokerID;
	///交易用户代码
	TQdamFtdcUserIDType	UserID;
	///交易用户类型
	TQdamFtdcUserTypeType	UserType;
	///会话编号
	TQdamFtdcSessionIDType	SessionID;
	///前置编号
	TQdamFtdcFrontIDType	FrontID;
	///登录时间
	TQdamFtdcTimeType	LoginTime;
	///IP地址
	TQdamFtdcIPAddressType	IPAddress;
	///Mac地址
	TQdamFtdcMacAddressType	MacAddress;
	///用户端产品信息
	TQdamFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TQdamFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TQdamFtdcProtocolInfoType	ProtocolInfo;
};

///行情查询
struct CQdamFtdcQryMarketDataField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
};

///行情应答
struct CQdamFtdcRspMarketDataField
{
	///交易所代码
	TQdamFtdcExchangeIDType	ExchangeID;
	///交易日
	TQdamFtdcTradingDayType	TradingDay;
	///昨结算
	TQdamFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TQdamFtdcPriceType	PreClosePrice;
	///昨持仓量
	TQdamFtdcLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TQdamFtdcRatioType	PreDelta;
	///今开盘
	TQdamFtdcPriceType	OpenPrice;
	///最高价
	TQdamFtdcPriceType	HighestPrice;
	///最低价
	TQdamFtdcPriceType	LowestPrice;
	///今收盘
	TQdamFtdcPriceType	ClosePrice;
	///涨停板价
	TQdamFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TQdamFtdcPriceType	LowerLimitPrice;
	///今结算
	TQdamFtdcPriceType	SettlementPrice;
	///今虚实度
	TQdamFtdcRatioType	CurrDelta;
	///最新价
	TQdamFtdcPriceType	LastPrice;
	///数量
	TQdamFtdcVolumeType	Volume;
	///成交金额
	TQdamFtdcMoneyType	Turnover;
	///持仓量
	TQdamFtdcLargeVolumeType	OpenInterest;
	///申买价一
	TQdamFtdcPriceType	BidPrice1;
	///申买量一
	TQdamFtdcVolumeType	BidVolume1;
	///申卖价一
	TQdamFtdcPriceType	AskPrice1;
	///申卖量一
	TQdamFtdcVolumeType	AskVolume1;
	///合约代码
	TQdamFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TQdamFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TQdamFtdcMillisecType	UpdateMillisec;
};



#endif
