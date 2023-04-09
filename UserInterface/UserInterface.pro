QT       += core gui network widgets serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 resources_big

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS HAVE_CONFIG_H

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminCode.cpp \
    AdminInterface.cpp \
    Cart_Goods.cpp \
    Goods_Admin.cpp \
    My_Thread.cpp \
    Serial_Assist.cpp \
    main.cpp \
    UserInterface.cpp \
    NetManager.cpp \
    Goods_Test.cpp \
    qrencode/bitstream.c \
    qrencode/mask.c \
    qrencode/mmask.c \
    qrencode/mqrspec.c \
    qrencode/qrencode.c \
    qrencode/qrinput.c \
    qrencode/qrspec.c \
    qrencode/rsecc.c \
    qrencode/split.c

HEADERS += \
    AdminCode.hpp \
    AdminInterface.hpp \
    Cart_Goods.hpp \
    Goods_Admin.hpp \
    My_Thread.hpp \
    Serial_Assist.hpp \
    UserInterface.hpp \
    NetManager.hpp \
    Goods_Test.hpp \
    qrencode/bitstream.h \
    qrencode/config.h \
    qrencode/mask.h \
    qrencode/mmask.h \
    qrencode/mqrspec.h \
    qrencode/qrencode.h \
    qrencode/qrencode_inner.h \
    qrencode/qrinput.h \
    qrencode/qrspec.h \
    qrencode/rsecc.h \
    qrencode/split.h

FORMS += \
    AdminCode.ui \
    AdminInterface.ui \
    Cart_Goods.ui \
    Goods_Admin.ui \
    UserInterface.ui \
    Goods_Test.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

