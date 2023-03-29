#include "NetManager.hpp"
#include <QDebug>
#include <string.h>

NetManager::NetManager(QObject *parent) : QObject(parent)
{
    tcp_messager = new QTcpSocket;

    // 连接状态处理
    connect(tcp_messager, SIGNAL(connected()), this, SLOT(slot_on_connected));
    connect(tcp_messager, SIGNAL(disconnected()), this, SLOT(slot_on_disconnected()));
    connect(tcp_messager, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(slot_on_error(QAbstractSocket::SocketError)));

    // 数据接收处理
    connect(tcp_messager, SIGNAL(readyRead()), this, SLOT(slot_on_data_received()));
}

// 给服务器发送普通消息
void NetManager::Send_Message(QByteArray contents)
{
    tcp_messager->write(contents);
}

// 获取服务器回包信息, 依据功能码来发出不同信号
bool NetManager::Get_Message()
{
    // 接收到数据根据功能码来实现不同的功能
    QJsonValue sig_code, key_ret, key_data;
    QJsonArray data_array;
    QJsonParseError error;
    QByteArray recv_data = tcp_messager->readAll();
    QJsonDocument recv_doc = QJsonDocument::fromJson(recv_data, &error);
    if (error.error != QJsonParseError::NoError){
        qDebug() << "解析Json数据失败！错误原因: " << error.errorString();
        return 0;
    }
    QJsonObject recv_obj = recv_doc.object();
    key_data  = recv_obj.value("key_data");
    sig_code  = recv_obj.value("key_sig");
    key_ret   = recv_obj.value("key_ret");
    // 确认是服务器通信
    if (sig_code.toInt() == MACRO_CHAT_SERVER){
        QJsonValue func_code = recv_obj.value("key_func");
        switch(func_code.toInt()){
        case MACRO_REGISTER:{
            if (key_ret.toInt() == MACRO_REG_SUCCESS){
                emit sig_reg_success();
            }else{
                emit sig_reg_fail();
            }
            break;
        };// BOSS端注册
        case MACRO_LOGIN:{
            if (key_ret.toInt() == MACRO_LOGIN_SUCCESS){
                emit sig_login_success();
            }else{
                emit sig_login_fail();
            }break;
        };// BOSS端登录
        case MACRO_DOOR_OPEN:{
            break;
        };// 柜门开关
        case MACRO_BUILD_CONNECT:{
            if (key_ret.toInt() == MACRO_BUILD_CONNECT_SUCCESS){
                emit sig_build_connect_success();
            }else{
                emit sig_build_connect_fail();
            }break;
        };// 客户端与服务器建立连接
        case MACRO_STM_UPDATE:{
            break;
        };// 更新
        case MACRO_GET_GOODS_INFO:{
            break;
        };// 获取所有商品信息
        case MACRO_REG_MACHINE:{
            if (key_ret.toInt() == MACRO_REG_MACHINE_SUCCESS){
                qDebug() << "reg_machine success";
                emit sig_reg_machine_success();
            }else{
                emit sig_reg_machine_fail();
            }break;
        };// 老板端柜机注册
        case MACRO_GET_MACHINE_LIST:{
            if (key_ret.toInt() == MACRO_GET_MACHINE_ID_SUCCESS){
                emit sig_get_machine_info_success(key_data);
            }else{
                emit sig_get_machine_info_fail();
            }break;
        };// 用户获取当前所有柜机id
        case MACRO_GET_SALE_INFO:{
            if (key_ret.toInt() == MACRO_GET_SALE_INFO_SUCCESS){
                emit sig_get_sale_info_success(key_data);
            }else{
                emit sig_get_sale_info_fail();
            }break;
        };// 获取销售额信息
        case MACRO_LOGOFF_MACHINE:{
            if (key_ret.toInt() == MACRO_LOGOFF_MACHINE_SUCCESS){
                emit sig_remove_machine_ok();
                qDebug() << "注销成功";
            }else{
                emit sig_remove_machine_fail();
            }break;
        };// 注销柜机
        }
    }
    return false;
}

// 设置ip信息
void NetManager::Set_Ip_Info(QString ip)
{
    this->ip = ip;
}

// 设置端口信息
void NetManager::Set_Port_Info(qint16 port)
{
    this->port = port;
}

// 获取ip信息
QString NetManager::Get_Ip_Info()
{
    return ip;
}

// 获取端口信息
qint16 NetManager::Get_Port_Info()
{
    return port;
}

// 用户登录请求
bool NetManager::Log_In(QString user_name, QString user_passwd)
{
    QByteArray send_data;
    QJsonDocument send_doc;
    QJsonObject send_obj, usr_name, usr_passwd;
    QJsonArray data_array;

    send_obj.insert("key_head", MACRO_REQ_PACK);
    send_obj.insert("key_sig", MACRO_CHAT_SERVER);
    send_obj.insert("key_func", MACRO_LOGIN);
    usr_name.insert("key_user_name", user_name);
    usr_passwd.insert("key_user_passwd", user_passwd);

    data_array.append(usr_name);
    data_array.append(usr_passwd);
    send_obj.insert("key_data", data_array);
    send_doc.setObject(send_obj);
    send_data = send_doc.toJson();

    qDebug() << send_data;

    tcp_messager->write(send_data);

    return 0;
}

// 用户注册请求
bool NetManager::Reg_Account(QString user_name, QString user_passwd)
{
    QByteArray send_data;
    QJsonDocument send_doc;
    QJsonObject send_obj, usr_name, usr_passwd;
    QJsonArray data_array;

    send_obj.insert("key_head", MACRO_REQ_PACK);
    send_obj.insert("key_sig",  MACRO_CHAT_SERVER);
    send_obj.insert("key_func", MACRO_REGISTER);
    usr_name.insert("key_user_name", user_name);
    usr_passwd.insert("key_user_passwd", user_passwd);

    data_array.append(usr_name);
    data_array.append(usr_passwd);
    send_obj.insert("key_data", data_array);
    send_doc.setObject(send_obj);
    send_data = send_doc.toJson();

    qDebug() << send_data;

    tcp_messager->write(send_data);
    return 0;
}

// 注册柜机
bool NetManager::Reg_Machaine(QString user_name, QString machine_id, QString address)
{
    QByteArray send_data;
    QJsonDocument send_doc;
    QJsonObject send_obj, id_obj, address_obj, name_obj;
    QJsonArray data_array;

    send_obj.insert("key_head", MACRO_REQ_PACK);
    send_obj.insert("key_sig", MACRO_CHAT_SERVER);
    send_obj.insert("key_func", MACRO_REG_MACHINE);

    id_obj.insert("key_machine_id", machine_id);
    address_obj.insert("key_address", address);
    name_obj.insert("key_user_name", user_name);
    data_array << id_obj << address_obj << name_obj;

    send_obj.insert("key_data", data_array);
    send_doc.setObject(send_obj);
    send_data = send_doc.toJson();

    tcp_messager->write(send_data);
    return true;
}

// 用户注销柜机
bool NetManager::Delete_Machine(QString user_name, QString machine_id, QString address)
{
    QByteArray send_data;
    QJsonDocument send_doc;
    QJsonObject send_obj, id_obj, address_obj, name_obj;
    QJsonArray data_array;

    send_obj.insert("key_head", MACRO_REQ_PACK);
    send_obj.insert("key_sig", MACRO_CHAT_SERVER);
    send_obj.insert("key_func", MACRO_LOGOFF_MACHINE);

    id_obj.insert("key_machine_id", machine_id);
    address_obj.insert("key_address", address);
    name_obj.insert("key_user_name", user_name);
    data_array << id_obj << address_obj << name_obj;

    send_obj.insert("key_data", data_array);
    send_doc.setObject(send_obj);
    send_data = send_doc.toJson();

    tcp_messager->write(send_data);
    return true;
}

bool NetManager::Disconnect()
{
    tcp_messager->close();
    return 0;
}

void NetManager::Send_Admin_Code()
{

}

void NetManager::Req_Machine_List(QString userName)
{
    QByteArray send_data;
    QJsonDocument send_doc;
    QJsonObject send_obj;

    send_obj.insert("key_head", MACRO_REQ_PACK);
    send_obj.insert("key_sig",  MACRO_CHAT_SERVER);
    send_obj.insert("key_func", MACRO_GET_MACHINE_LIST);
    send_obj.insert("key_data", userName);
    send_doc.setObject(send_obj);
    send_data = send_doc.toJson();

    qDebug() << send_data;

    tcp_messager->write(send_data);
    return ;
}

void NetManager::slot_on_connected()
{
    qDebug() << "TCP连接成功";
}

void NetManager::slot_on_disconnected()
{
    qDebug() << "TCP连接失败";
    // 尝试重连
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}

void NetManager::slot_on_error(QAbstractSocket::SocketError)
{
    qDebug() << "TCP连接错误";
    // 尝试重连
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}

void NetManager::slot_on_data_received()
{
    qDebug() << "TCP接收到数据";
    Get_Message();
}

void NetManager::Build_Connection(QString ip, quint16 port)
{
    // 防止重连
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}
