/****************************************************************************
** Meta object code from reading C++ file 'AdminInterface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UserInterface/AdminInterface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdminInterface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminInterface_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminInterface_t qt_meta_stringdata_AdminInterface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AdminInterface"
QT_MOC_LITERAL(1, 15, 25), // "sig_admin_interface_close"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "on_pushButton_quit_clicked"
QT_MOC_LITERAL(4, 69, 23), // "slot_admin_manage_goods"
QT_MOC_LITERAL(5, 93, 10), // "goods_type"
QT_MOC_LITERAL(6, 104, 8), // "goods_id"
QT_MOC_LITERAL(7, 113, 10), // "goods_name"
QT_MOC_LITERAL(8, 124, 13), // "current_store"
QT_MOC_LITERAL(9, 138, 25) // "on_pushButton_ack_clicked"

    },
    "AdminInterface\0sig_admin_interface_close\0"
    "\0on_pushButton_quit_clicked\0"
    "slot_admin_manage_goods\0goods_type\0"
    "goods_id\0goods_name\0current_store\0"
    "on_pushButton_ack_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    4,   36,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void AdminInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_admin_interface_close(); break;
        case 1: _t->on_pushButton_quit_clicked(); break;
        case 2: _t->slot_admin_manage_goods((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->on_pushButton_ack_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminInterface::sig_admin_interface_close)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AdminInterface.data,
    qt_meta_data_AdminInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AdminInterface::sig_admin_interface_close()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
