/****************************************************************************
** Meta object code from reading C++ file 'AdminCode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UserInterface/AdminCode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdminCode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminCode_t {
    QByteArrayData data[16];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminCode_t qt_meta_stringdata_AdminCode = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AdminCode"
QT_MOC_LITERAL(1, 10, 22), // "sig_admin_code_correct"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 30), // "sig_admin_code_interface_close"
QT_MOC_LITERAL(4, 65, 26), // "on_pushButton_quit_clicked"
QT_MOC_LITERAL(5, 92, 23), // "on_pushButton_1_clicked"
QT_MOC_LITERAL(6, 116, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 140, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 164, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 188, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(10, 212, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 236, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(12, 260, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(13, 284, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(14, 308, 23), // "on_pushButton_0_clicked"
QT_MOC_LITERAL(15, 332, 25) // "on_pushButton_ack_clicked"

    },
    "AdminCode\0sig_admin_code_correct\0\0"
    "sig_admin_code_interface_close\0"
    "on_pushButton_quit_clicked\0"
    "on_pushButton_1_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_0_clicked\0"
    "on_pushButton_ack_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminCode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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

       0        // eod
};

void AdminCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminCode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_admin_code_correct(); break;
        case 1: _t->sig_admin_code_interface_close(); break;
        case 2: _t->on_pushButton_quit_clicked(); break;
        case 3: _t->on_pushButton_1_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_7_clicked(); break;
        case 10: _t->on_pushButton_9_clicked(); break;
        case 11: _t->on_pushButton_8_clicked(); break;
        case 12: _t->on_pushButton_0_clicked(); break;
        case 13: _t->on_pushButton_ack_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminCode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminCode::sig_admin_code_correct)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdminCode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminCode::sig_admin_code_interface_close)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminCode::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AdminCode.data,
    qt_meta_data_AdminCode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminCode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminCode.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AdminCode::sig_admin_code_correct()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AdminCode::sig_admin_code_interface_close()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
