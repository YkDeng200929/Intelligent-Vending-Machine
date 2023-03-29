/****************************************************************************
** Meta object code from reading C++ file 'NetManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BossInterface/NetManager.hpp"
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
    QByteArrayData data[27];
    char stringdata0[520];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetManager_t qt_meta_stringdata_NetManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NetManager"
QT_MOC_LITERAL(1, 11, 17), // "sig_login_success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "sig_login_fail"
QT_MOC_LITERAL(4, 45, 15), // "sig_reg_success"
QT_MOC_LITERAL(5, 61, 12), // "sig_reg_fail"
QT_MOC_LITERAL(6, 74, 23), // "sig_reg_machine_success"
QT_MOC_LITERAL(7, 98, 20), // "sig_reg_machine_fail"
QT_MOC_LITERAL(8, 119, 22), // "sig_fetch_info_success"
QT_MOC_LITERAL(9, 142, 19), // "sig_fetch_info_fail"
QT_MOC_LITERAL(10, 162, 15), // "sig_door_opened"
QT_MOC_LITERAL(11, 178, 15), // "sig_door_closed"
QT_MOC_LITERAL(12, 194, 25), // "sig_build_connect_success"
QT_MOC_LITERAL(13, 220, 22), // "sig_build_connect_fail"
QT_MOC_LITERAL(14, 243, 28), // "sig_get_machine_info_success"
QT_MOC_LITERAL(15, 272, 12), // "machine_info"
QT_MOC_LITERAL(16, 285, 25), // "sig_get_machine_info_fail"
QT_MOC_LITERAL(17, 311, 25), // "sig_get_sale_info_success"
QT_MOC_LITERAL(18, 337, 9), // "sale_info"
QT_MOC_LITERAL(19, 347, 22), // "sig_get_sale_info_fail"
QT_MOC_LITERAL(20, 370, 21), // "sig_remove_machine_ok"
QT_MOC_LITERAL(21, 392, 23), // "sig_remove_machine_fail"
QT_MOC_LITERAL(22, 416, 17), // "slot_on_connected"
QT_MOC_LITERAL(23, 434, 20), // "slot_on_disconnected"
QT_MOC_LITERAL(24, 455, 13), // "slot_on_error"
QT_MOC_LITERAL(25, 469, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(26, 498, 21) // "slot_on_data_received"

    },
    "NetManager\0sig_login_success\0\0"
    "sig_login_fail\0sig_reg_success\0"
    "sig_reg_fail\0sig_reg_machine_success\0"
    "sig_reg_machine_fail\0sig_fetch_info_success\0"
    "sig_fetch_info_fail\0sig_door_opened\0"
    "sig_door_closed\0sig_build_connect_success\0"
    "sig_build_connect_fail\0"
    "sig_get_machine_info_success\0machine_info\0"
    "sig_get_machine_info_fail\0"
    "sig_get_sale_info_success\0sale_info\0"
    "sig_get_sale_info_fail\0sig_remove_machine_ok\0"
    "sig_remove_machine_fail\0slot_on_connected\0"
    "slot_on_disconnected\0slot_on_error\0"
    "QAbstractSocket::SocketError\0"
    "slot_on_data_received"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    0,  128,    2, 0x06 /* Public */,
       7,    0,  129,    2, 0x06 /* Public */,
       8,    0,  130,    2, 0x06 /* Public */,
       9,    0,  131,    2, 0x06 /* Public */,
      10,    0,  132,    2, 0x06 /* Public */,
      11,    0,  133,    2, 0x06 /* Public */,
      12,    0,  134,    2, 0x06 /* Public */,
      13,    0,  135,    2, 0x06 /* Public */,
      14,    1,  136,    2, 0x06 /* Public */,
      16,    0,  139,    2, 0x06 /* Public */,
      17,    1,  140,    2, 0x06 /* Public */,
      19,    0,  143,    2, 0x06 /* Public */,
      20,    0,  144,    2, 0x06 /* Public */,
      21,    0,  145,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  146,    2, 0x0a /* Public */,
      23,    0,  147,    2, 0x0a /* Public */,
      24,    1,  148,    2, 0x0a /* Public */,
      26,    0,  151,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void,

       0        // eod
};

void NetManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_login_success(); break;
        case 1: _t->sig_login_fail(); break;
        case 2: _t->sig_reg_success(); break;
        case 3: _t->sig_reg_fail(); break;
        case 4: _t->sig_reg_machine_success(); break;
        case 5: _t->sig_reg_machine_fail(); break;
        case 6: _t->sig_fetch_info_success(); break;
        case 7: _t->sig_fetch_info_fail(); break;
        case 8: _t->sig_door_opened(); break;
        case 9: _t->sig_door_closed(); break;
        case 10: _t->sig_build_connect_success(); break;
        case 11: _t->sig_build_connect_fail(); break;
        case 12: _t->sig_get_machine_info_success((*reinterpret_cast< QJsonValue(*)>(_a[1]))); break;
        case 13: _t->sig_get_machine_info_fail(); break;
        case 14: _t->sig_get_sale_info_success((*reinterpret_cast< QJsonValue(*)>(_a[1]))); break;
        case 15: _t->sig_get_sale_info_fail(); break;
        case 16: _t->sig_remove_machine_ok(); break;
        case 17: _t->sig_remove_machine_fail(); break;
        case 18: _t->slot_on_connected(); break;
        case 19: _t->slot_on_disconnected(); break;
        case 20: _t->slot_on_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 21: _t->slot_on_data_received(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_login_success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_login_fail)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_reg_success)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_reg_fail)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_reg_machine_success)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_reg_machine_fail)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_fetch_info_success)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_fetch_info_fail)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_door_opened)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_door_closed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_build_connect_success)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_build_connect_fail)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NetManager::*)(QJsonValue );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_machine_info_success)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_machine_info_fail)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (NetManager::*)(QJsonValue );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_sale_info_success)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_get_sale_info_fail)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_remove_machine_ok)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (NetManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetManager::sig_remove_machine_fail)) {
                *result = 17;
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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void NetManager::sig_login_success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetManager::sig_login_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetManager::sig_reg_success()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetManager::sig_reg_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetManager::sig_reg_machine_success()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NetManager::sig_reg_machine_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NetManager::sig_fetch_info_success()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NetManager::sig_fetch_info_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NetManager::sig_door_opened()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void NetManager::sig_door_closed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void NetManager::sig_build_connect_success()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void NetManager::sig_build_connect_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void NetManager::sig_get_machine_info_success(QJsonValue _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NetManager::sig_get_machine_info_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void NetManager::sig_get_sale_info_success(QJsonValue _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void NetManager::sig_get_sale_info_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void NetManager::sig_remove_machine_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void NetManager::sig_remove_machine_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
