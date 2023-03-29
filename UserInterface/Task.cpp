#include "Task.hpp"
#include <QDebug>
#include <QThread>

Task::Task(QObject *parent) : QObject(parent)
{

}

void Task::slotA()
{
    for (int i = 0; i < 5; i++){
        QThread::sleep(1);
        qDebug() << "任务A正在执行";
    }
}

void Task::slotB()
{
    for (int i = 0; i < 5; i++){
        QThread::sleep(1);
        qDebug() << "任务B正在执行";
    }
}
