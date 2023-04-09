#-------------------------------------------------
#
# Project created by QtCreator 2023-03-19T19:09:33
#
#-------------------------------------------------

QT       += core gui network charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG   += c++11 resources_big
TARGET = BossInterface
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    Goods_Widget.cpp \
        main.cpp \
        BossLogin.cpp \
    NetManager.cpp \
    qcustomplot.cpp

HEADERS += \
        BossLogin.hpp \
    Goods_Widget.hpp \
    NetManager.hpp \
    qcustomplot.h

FORMS += \
        BossLogin.ui \
    Goods_Widget.ui

RESOURCES += \
    res.qrc

