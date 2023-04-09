#include "My_Thread.hpp"
#include <QDebug>

My_Thread::My_Thread(QObject *parent) : QThread(parent)
{
    isRun = false;
}

void My_Thread::run()
{
    isRun = true;
    while(1){
        if (!isRun){
            break;
        }
        sleep(1);
        qDebug() << "线程正在执行";
    }
}

void My_Thread::kill()
{
    isRun = false;
}
