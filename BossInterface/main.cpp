#include "BossLogin.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BossLogin w;
    w.show();

    return a.exec();
}
