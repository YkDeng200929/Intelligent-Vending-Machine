#include "NetManager.hpp"
#include <QDebug>
#include <QHostAddress>

NetManager::NetManager(QObject *parent) : QObject(parent)
{
    net_manager = new QNetworkAccessManager(this);
    tcp_messager = new QTcpSocket(this);


    // 成功连接服务器
    connect(tcp_messager, SIGNAL(connected()), this, SLOT(slot_on_connected));
    // 连接服务器失败
    connect(tcp_messager, SIGNAL(disconnected()), this, SLOT(slot_on_disconnected()));
    // 连接服务器错误
    connect(tcp_messager, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slot_on_error(QAbstractSocket::SocketError)));
    // 从服务器接收到数据
    connect(tcp_messager, SIGNAL(readyRead()), this, SLOT(slot_on_data_received()));

}

QString NetManager::Get_Ip_Info()
{
    return ip;
}

qint16 NetManager::Get_Port_Info()
{
    return port;
}

void NetManager::Set_Ip_Info(QString ip)
{
    this->ip = ip;
}

void NetManager::Set_Port_Info(qint16 port)
{
    this->port = port;
}

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
    data_array= key_data.toArray();
    for (int i = 0; i < data_array.size(); i++){
        QJsonObject data_obj = data_array[i].toObject();
        QString machine_id = data_obj["key_machine_id"].toString();
        qDebug() << machine_id;
    }

    sig_code  = recv_obj.value("key_sig");
    key_ret   = recv_obj.value("key_ret");
    // 确认是服务器通信
    if (sig_code.toInt() == MACRO_CHAT_SERVER){
        QJsonValue func_code = recv_obj.value("key_func");
        switch(func_code.toInt()){
            case MACRO_DOOR_OPEN:{
                break;
            };// 柜门开关
            case MACRO_BUILD_CONNECT:{
                break;
            };// 客户端与服务器建立连接
            case MACRO_STM_UPDATE:{
                break;
            };// 更新
            case MACRO_GET_GOODS_INFO:{
                if (key_ret == MACRO_GET_GOODS_INFO_SUCCESS){
                    emit sig_get_all_goods_info_success();
                }else{
                    emit sig_get_all_goods_info_fail();
                }
                break;
            };// 获取所有商品信息
        }
    }
    return false;
}

void NetManager::Build_Connection()
{
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}

void NetManager::Send_Pay_Message(QJsonDocument pay_data)
{
    QByteArray pay_info = pay_data.toJson();
    tcp_messager->write(pay_info);
}

void NetManager::Send_Manage_Goods_Info(QMap<QString, int> manage_info)
{
    QJsonDocument manage_doc;
    QJsonObject main_obj;
    QJsonArray manage_array;

    for(QMap<QString, int>::iterator it = manage_info.begin();\
        it != manage_info.end(); it++){
        //qDebug() << it.key() << it.value();
        QJsonObject manage_data;
        manage_data.insert(it.key(), it.value());
        manage_array << manage_data;
    }
    main_obj.insert("key_data", manage_array);
    main_obj.insert("key_func", MACRO_ADMIN_MANAGE);
    main_obj.insert("key_sig", MACRO_CHAT_SERVER);
    main_obj.insert("key_head", MACRO_ACK_PACK);
    manage_doc.setObject(main_obj);
    tcp_messager->write(manage_doc.toJson());
}

void NetManager::slot_on_connected()
{
    qDebug() << "TCP连接成功";
}

void NetManager::slot_on_disconnected()
{
    qDebug() << "TCP连接失败";
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}

void NetManager::slot_on_error(QAbstractSocket::SocketError)
{
    qDebug() << "TCP连接错误";
    tcp_messager->abort();
    tcp_messager->connectToHost(ip, port);
}

void NetManager::slot_on_data_received()
{
    qDebug() << "TCP接收到数据";
}


