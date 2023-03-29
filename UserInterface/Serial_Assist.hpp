#ifndef SERIAL_ASSIST_HPP
#define SERIAL_ASSIST_HPP

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QList>

class Serial_Assist : public QObject
{
    Q_OBJECT
public:
    explicit Serial_Assist(QObject *parent = nullptr);

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

signals:

private:
    QSerialPort *serial_assist;

};

#endif // SERIAL_ASSIST_HPP
