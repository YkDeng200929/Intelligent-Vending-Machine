/****************************************************************************
** Meta object code from reading C++ file 'NetManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UserInterface/NetManager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetManager_t {
    QByteArrayData data[9];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetManager_t qt_meta_stringdata_NetManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NetManager"
QT_MOC_LITERAL(1, 11, 30), // "sig_get_all_goods_info_success"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "sig_get_all_goods_info_fail"
QT_MOC_LITERAL(4, 71, 17), // "slot_on_connected"
QT_MOC_LITERAL(5, 89, 20), // "slot_on_disconnected"
QT_MOC_LITERAL(6, 110, 13), // "slot_on_error"
QT_MOC_LITERAL(7, 124, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(8, 153, 21) // "slot_on_data_received"

    },
    "NetManager\0sig_get_all_goods_info_success\0"
    "\0sig_get_all_goods_info_fail\0"
    "slot_on_connected\0slot_on_disconnected\0"
    "slot_on_error\0QAbstractSocket::SocketError\0"
    "slot_on_data_received"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

       0        // eod
};

void NetManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_get_all_goods_info_success(); break;
        case 1: _t->sig_get_all_goods_info_fail(); break;
        case 2: _t->slot_on_connected(); break;
        case 3: _t->slot_on_disconnected(); break;
        case 4: _t->slot_on_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->slot_on_data_received(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_all_goods_info_success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_all_goods_info_fail)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetManager.data,
    qt_meta_data_NetManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NetManager::sig_get_all_goods_info_success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetManager::sig_get_all_goods_info_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
