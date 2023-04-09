#ifndef NETMANAGER_HPP
#define NETMANAGER_HPP

#include <QObject>
#include <QNetworkAccessManager>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

// 固定头
#define MACRO_REQ_PACK 88
#define MACRO_ACK_PACK 99

// 包标识
#define MACRO_TEMP_INFO   77  // 获取温湿度信息
#define MACRO_CTL_DOOR    66  // 控制柜机门
#define MACRO_CTL_GOODS   55  // 控制货物门
#define MACRO_CHAT_SERVER 44  // 与服务器通信

// 功能码
#define MACRO_USER_PAY       1111  // 用户支付
#define MACRO_ADMIN_MANAGE   1112  // 管理员管理库存
#define MACRO_REGISTER       1113  // BOSS端注册
#define MACRO_LOGIN          1114  // BOSS端登录
#define MACRO_ADS            1115  // 拉取广告
#define MACRO_GET_EVM_INFO   1116  // 获取温湿度信息
#define MACRO_DOOR_OPEN      1117  // 柜门开关
#define MACRO_BUILD_CONNECT  1118  // 客户端与服务器建立连接
#define MACRO_GOODS_OUT      1119  // 控制出货
#define MACRO_STM_UPDATE     1120  // 更新
#define MACRO_GET_GOODS_INFO 1121  // 获取所有商品信息
#define MACRO_REG_MACHINE    1122  // 老板端柜机注册
#define MACRO_GET_MACHINE_LIST 1123// 获取当前用户柜机信息
#define MACRO_GET_SALE_INFO    1124// 获取销售额信息
#define MACRO_MODIFY_MACHINE_ID 1125 // 修改柜机id
#define MACRO_LOGOFF_MACHINE    1126 // 注销柜机

// 应答码
#define MACRO_PAY_SUCCESS       100  // 用户支付成功
#define MACRO_PAY_FAIL          104  // 用户支付失败
#define MACRO_ADD_GOOD_SUCCESS  200  // 管理员补货成功
#define MACRO_ADD_GOOD_FAIL     204  // 管理员补货失败
#define MACRO_REG_SUCCESS       300  // 用户注册成功
#define MACRO_REG_FAIL          304  // 用户注册失败
#define MACRO_LOGIN_SUCCESS     400  // 用户登录成功
#define MACRO_LOGIN_FAIL        404  // 用户登录失败
#define MACRO_ADS_SUCCESS       500  // 拉取广告成功
#define MACRO_ADS_FAIL          504  // 拉取广告失败
#define MACRO_BUILD_CONNECT_SUCCESS 600  // 与服务器建立连接成功
#define MACRO_BUILD_CONNECT_FAIL    604  // 与服务器建立连接失败
#define MACRO_REG_MACHINE_SUCCESS   700  // 成功注册柜机
#define MACRO_REG_MACHINE_FAIL      704  // 注册柜机失败
#define MACRO_LOGOFF_MACHINE_SUCCESS 710 // 注销柜机成功
#define MACRO_LOGOFF_MACHINE_FAIL    714 // 注销柜机失败
#define MACRO_MODIFY_ID_SUCCESS      720 // 修改柜机id成功
#define MACRO_MODIFY_ID_FAIL         724 // 修改柜机id失败
#define MACRO_GET_MACHINE_ID_SUCCESS 800 // 获取柜机id成功
#define MACRO_GET_MACHINE_ID_FAIL    804 // 获取柜机id失败
#define MACRO_GET_SALE_INFO_SUCCESS  900 // 获取销售额信息成功
#define MACRO_GET_SALE_INFO_FAIL     904 // 获取销售额信息失败
#define MACRO_GET_GOODS_INFO_SUCCESS 910 // 成功获取所有商品信息
#define MACRO_GET_GOODS_INFO_FAIL	 914 // 获取所有商品信息失败

class NetManager : public QObject
{
    Q_OBJECT
public:
    explicit NetManager(QObject *parent = nullptr);

    // 发送信息
    void Send_Message(QByteArray contents);
    // 接收信息
    bool Get_Message();
    // 建立连接
    void Build_Connection(QString ip, quint16 port);
    // 建立连接重载
    void Build_Connection();
    // 设置ip信息
    void Set_Ip_Info(QString ip);
    // 设置端口信息
    void Set_Port_Info(qint16 port);
    // 获取ip信息
    QString Get_Ip_Info(void);
    // 获取端口信息
    qint16 Get_Port_Info(void);

    /**给服务器发送消息*********************************************************************/
    // 用户登录账户
    bool Log_In(QString user_name, QString user_passwd);
    // 用户注册账户
    bool Reg_Account(QString user_name, QString user_passwd);
    // 用户注册柜机
    bool Reg_Machaine(QString user_name, QString machine_id, QString address);
    // 用户注销柜机
    bool Delete_Machine(QString user_name, QString machine_id, QString address);
    // 关闭连接
    bool Disconnect();
    // 获取商品信息
    bool Get_Goods_Info();
    // 发送授权码给服务器
    void Send_Admin_Code(QString admin_code);
    // 请求获取当前用户注册的柜机
    void Req_Machine_List(QString userName);
    // 请求查看销售额
    void Req_Sale_Info(QString name);

signals:
    // 信号: 用户成功登录
    void sig_login_success();
    // 信号: 用户登录失败
    void sig_login_fail();
    // 信号: 用户注册成功
    void sig_reg_success();
    // 信号: 用户注册失败
    void sig_reg_fail();
    // 信号: 用户注册柜机成功
    void sig_reg_machine_success();
    // 信号: 用户注册柜机失败
    void sig_reg_machine_fail();
    // 信号: 拉取商品库存信息成功
    void sig_fetch_info_success(QJsonValue goods_info);
    // 信号: 拉取商品库存信息失败
    void sig_fetch_info_fail();
    // 信号: 柜门已打开
    void sig_door_opened();
    // 信号: 柜门关闭状态
    void sig_door_closed();
    // 信号: 与服务器成功建立连接
    void sig_build_connect_success();
    // 信号: 与服务器建立连接失败
    void sig_build_connect_fail();
    // 信号: 成功获取到柜机信息
    void sig_get_machine_info_success(QJsonValue machine_info);
    // 信号: 获取到柜机信息失败
    void sig_get_machine_info_fail();
    // 信号: 成功获取到销售额
    void sig_get_sale_info_success(QJsonValue sale_info);
    // 信号: 获取销售额失败
    void sig_get_sale_info_fail();
    // 信号: 成功注销柜机
    void sig_remove_machine_ok();
    // 信号: 注销柜机失败
    void sig_remove_machine_fail();


public slots:
    void slot_on_connected(void);
    // 连接失败
    void slot_on_disconnected(void);
    // 连接错误
    void slot_on_error(QAbstractSocket::SocketError);
    // 数据接收处理
    void slot_on_data_received(void);

private:
    // 套接字对象
    QTcpSocket *tcp_messager;
    QString ip  = "127.0.0.1";
    qint16 port = 8888;
};

#endif // NETMANAGER_HPP
