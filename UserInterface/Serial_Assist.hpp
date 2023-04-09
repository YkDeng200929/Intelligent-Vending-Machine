#ifndef SERIAL_ASSIST_HPP
#define SERIAL_ASSIST_HPP

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QList>
#include <QTimer>
#include <QTime>
#include <QApplication>
#include <QEventLoop>

class Serial_Assist : public QObject
{
    Q_OBJECT
public:
    explicit Serial_Assist(QObject *parent = nullptr);

    // 延时函数
    void Sleep(unsigned int msec);
    // 给串口发送消息
    bool Send_Data(QByteArray send_data);
    // 接收串口回应
    QByteArray Recv_Data(void);
    // 建立串口连接
    void Build_Connection(void);
    // 16进制转字符
    char ConvertHexChar(char ch);
    // 字符串转16进制
    QByteArray QString2Hex(QString str);
    // 用户支付成功
    void Pay_Success();

signals:

private:
    QSerialPort *serial_assist;
    // 出货门开
    QString mesg_open = "ff 01 05 02 00 00 00 aa bb";
    // 出货门关
    QString mesg_close= "ff 01 05 02 01 01 01 aa bb";
};

#endif // SERIAL_ASSIST_HPP
