#ifndef MY_THREAD_HPP
#define MY_THREAD_HPP

#include <QThread>

class My_Thread : public QThread
{
    Q_OBJECT
public:
    explicit My_Thread(QObject *parent = nullptr);

    void run();  // 创建一个线程
    void kill(); // 将标志位设置为false, 退出线程

signals:

public slots:

private:
    // 设置标志位, 判断线程是否正在执行
    bool isRun;

};

#endif // MY_THREAD_HPP
