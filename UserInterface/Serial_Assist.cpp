#include "Serial_Assist.hpp"
#include <QDebug>

Serial_Assist::Serial_Assist(QObject *parent) : QObject(parent)
{
    serial_assist = new QSerialPort(this);

    //连接信号槽 当下位机发送数据QSerialPortInfo 会发送个 readyRead 信号,我们定义个槽void receiveInfo()解析数据
    connect(serial_assist,SIGNAL(readyRead()),this,SLOT());
}

// 给设备发送消息
bool Serial_Assist::Send_Data(QByteArray send_data)
{
    //qDebug() << send_data;
    serial_assist->write(send_data);
    return true;
}

// 接收串口信息
QByteArray Serial_Assist::Recv_Data()
{
    QByteArray recv_data = serial_assist->readAll();
    qDebug() << recv_data;
    return 0;
}

// 与设备建立连接
void Serial_Assist::Build_Connection()
{
    // 获取串口信息 COM3通信
    QStringList m_serialPortName;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts()){
        m_serialPortName << info.portName();
        qDebug()<<"serialPortName:"<<info.portName();
    }

    if(serial_assist->isOpen()){ //如果串口已经打开了 先给他关闭了
        serial_assist->clear();
        serial_assist->close();
    }

    //设置串口名字 假设我们上面已经成功获取到了 并且使用第一个
    serial_assist->setPortName(m_serialPortName[1]);
    qDebug() << m_serialPortName[1];

    if(!serial_assist->open(QIODevice::ReadWrite)){//用ReadWrite 的模式尝试打开串口

        qDebug()<<m_serialPortName[0]<<"打开失败!";
        return;
    }
    qDebug() << "连接成功" ;
    //打开成功
    serial_assist->setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);//设置波特率和读写方向
    serial_assist->setDataBits(QSerialPort::Data8);		//数据位为8位
    serial_assist->setFlowControl(QSerialPort::NoFlowControl);//无流控制
    serial_assist->setParity(QSerialPort::NoParity);	//无校验位
    serial_assist->setStopBits(QSerialPort::OneStop); //一位停止位
}

char Serial_Assist::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return (-1);
}

QByteArray Serial_Assist::QString2Hex(QString str)
{
    QByteArray senddata;
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;
    for(int i=0; i<len; ){
        hstr=str[i].toLatin1();
        if(hstr == ' '){
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);
    return senddata;
}
