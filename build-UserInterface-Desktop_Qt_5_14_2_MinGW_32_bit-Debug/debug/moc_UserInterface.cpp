/****************************************************************************
** Meta object code from reading C++ file 'UserInterface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UserInterface/UserInterface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserInterface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserInterface_t {
    QByteArrayData data[20];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserInterface_t qt_meta_stringdata_UserInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UserInterface"
QT_MOC_LITERAL(1, 14, 7), // "signalA"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "signalB"
QT_MOC_LITERAL(4, 31, 32), // "on_pushButton_checkChart_clicked"
QT_MOC_LITERAL(5, 64, 27), // "on_pushButton_admin_clicked"
QT_MOC_LITERAL(6, 92, 13), // "slot_Get_Time"
QT_MOC_LITERAL(7, 106, 24), // "slot_Back_User_Interface"
QT_MOC_LITERAL(8, 131, 23), // "slot_Admin_Code_Correct"
QT_MOC_LITERAL(9, 155, 13), // "slot_Play_Ads"
QT_MOC_LITERAL(10, 169, 27), // "on_pushButton_drink_clicked"
QT_MOC_LITERAL(11, 197, 27), // "on_pushButton_fruit_clicked"
QT_MOC_LITERAL(12, 225, 16), // "slot_Add_To_Cart"
QT_MOC_LITERAL(13, 242, 10), // "goods_name"
QT_MOC_LITERAL(14, 253, 2), // "id"
QT_MOC_LITERAL(15, 256, 7), // "add_num"
QT_MOC_LITERAL(16, 264, 11), // "total_price"
QT_MOC_LITERAL(17, 276, 20), // "slot_Get_Temperature"
QT_MOC_LITERAL(18, 297, 29), // "on_pushButton_payment_clicked"
QT_MOC_LITERAL(19, 327, 31) // "on_pushButton_code_back_clicked"

    },
    "UserInterface\0signalA\0\0signalB\0"
    "on_pushButton_checkChart_clicked\0"
    "on_pushButton_admin_clicked\0slot_Get_Time\0"
    "slot_Back_User_Interface\0"
    "slot_Admin_Code_Correct\0slot_Play_Ads\0"
    "on_pushButton_drink_clicked\0"
    "on_pushButton_fruit_clicked\0"
    "slot_Add_To_Cart\0goods_name\0id\0add_num\0"
    "total_price\0slot_Get_Temperature\0"
    "on_pushButton_payment_clicked\0"
    "on_pushButton_code_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserInterface[] = {

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
      12,    4,   94,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Double,   13,   14,   15,   16,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalA(); break;
        case 1: _t->signalB(); break;
        case 2: _t->on_pushButton_checkChart_clicked(); break;
        case 3: _t->on_pushButton_admin_clicked(); break;
        case 4: _t->slot_Get_Time(); break;
        case 5: _t->slot_Back_User_Interface(); break;
        case 6: _t->slot_Admin_Code_Correct(); break;
        case 7: _t->slot_Play_Ads(); break;
        case 8: _t->on_pushButton_drink_clicked(); break;
        case 9: _t->on_pushButton_fruit_clicked(); break;
        case 10: _t->slot_Add_To_Cart((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 11: { double _r = _t->slot_Get_Temperature();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->on_pushButton_payment_clicked(); break;
        case 13: _t->on_pushButton_code_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInterface::signalA)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInterface::signalB)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UserInterface.data,
    qt_meta_data_UserInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserInterface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void UserInterface::signalA()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserInterface::signalB()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
