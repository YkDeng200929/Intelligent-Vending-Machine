#ifndef TASK_HPP
#define TASK_HPP

#include <QObject>

class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QObject *parent = nullptr);

signals:

public slots:
    void slotA();
    void slotB();
};

#endif // TASK_HPP
