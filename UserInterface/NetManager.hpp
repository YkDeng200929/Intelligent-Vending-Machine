#ifndef NETMANAGER_HPP
#define NETMANAGER_HPP

#include <QObject>
#include <QNetworkAccessManager>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

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
#define MACRO_ADS            1115  // 拉取广告
#define MACRO_GET_EVM_INFO   1116  // 获取温湿度信息
#define MACRO_DOOR_OPEN      1117  // 柜门开关
#define MACRO_BUILD_CONNECT  1118  // 客户端与服务器建立连接
#define MACRO_GOODS_OUT      1119  // 控制出货
#define MACRO_STM_UPDATE     1120  // 更新
#define MACRO_GET_GOODS_INFO 1121  // 获取所有商品信息

// 应答码
#define MACRO_PAY_SUCCESS       100  // 用户支付成功
#define MACRO_PAY_FAIL          104  // 用户支付失败
#define MACRO_ADD_GOOD_SUCCESS  200  // 管理员补货成功
#define MACRO_ADD_GOOD_FAIL     204  // 管理员补货失败
#define MACRO_ADS_SUCCESS       500  // 拉取广告成功
#define MACRO_ADS_FAIL          504  // 拉取广告失败
#define MACRO_BUILD_CONNECT_SUCCESS 600  // 与服务器建立连接成功
#define MACRO_BUILD_CONNECT_FAIL    604  // 与服务器建立连接失败
#define MACRO_GET_GOODS_INFO_SUCCESS 910 // 成功获取所有商品信息
#define MACRO_GET_GOODS_INFO_FAIL	 914 // 获取所有商品信息失败

class NetManager : public QObject
{
    Q_OBJECT
public:
    explicit NetManager(QObject *parent = nullptr);

    // 获取ip信息
    QString Get_Ip_Info(void);
    // 获取端口信息
    qint16 Get_Port_Info(void);
    // 设置通信ip
    void Set_Ip_Info(QString ip);
    // 设置端口信息
    void Set_Port_Info(qint16 port);
    // 接收消息
    bool Get_Message();
    // 与服务器建立连接
    void Build_Connection(void);
    // 发送用户支付信息
    void Send_Pay_Message(QJsonDocument pay_data);
    // 发送管理员补货信息
    void Send_Manage_Goods_Info(QMap<QString, int> manage_info);
    // 获取所有商品信息

signals:
    // 成功获取所有商品信息
    void sig_get_all_goods_info_success();
    // 获取所有商品信息失败
    void sig_get_all_goods_info_fail();


public slots:
    // 连接成功
    void slot_on_connected(void);
    // 连接失败
    void slot_on_disconnected(void);
    // 连接错误
    void slot_on_error(QAbstractSocket::SocketError);
    // 数据接收处理
    void slot_on_data_received(void);

private:
    QNetworkAccessManager *net_manager;
    // 套接字对象
    QTcpSocket *tcp_messager;
    QString ip = "127.0.0.1";
    qint16 port= 8888;
};

#endif // NETMANAGER_HPP
