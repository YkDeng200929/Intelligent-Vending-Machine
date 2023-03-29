/****************************************************************************
** Meta object code from reading C++ file 'UserInterface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UserInterface/UserInterface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserInterface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserInterface_t {
    QByteArrayData data[21];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserInterface_t qt_meta_stringdata_UserInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UserInterface"
QT_MOC_LITERAL(1, 14, 20), // "sig_Init_Admin_Goods"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "QList<Goods_Frame*>*"
QT_MOC_LITERAL(4, 57, 10), // "goods_list"
QT_MOC_LITERAL(5, 68, 18), // "sig_Transfer_QList"
QT_MOC_LITERAL(6, 87, 32), // "on_pushButton_checkChart_clicked"
QT_MOC_LITERAL(7, 120, 27), // "on_pushButton_admin_clicked"
QT_MOC_LITERAL(8, 148, 16), // "slot_Add_To_Cart"
QT_MOC_LITERAL(9, 165, 3), // "num"
QT_MOC_LITERAL(10, 169, 11), // "total_price"
QT_MOC_LITERAL(11, 181, 13), // "slot_Get_Time"
QT_MOC_LITERAL(12, 195, 24), // "slot_Back_User_Interface"
QT_MOC_LITERAL(13, 220, 23), // "slot_Admin_Code_Correct"
QT_MOC_LITERAL(14, 244, 13), // "slot_Play_Ads"
QT_MOC_LITERAL(15, 258, 10), // "test_print"
QT_MOC_LITERAL(16, 269, 27), // "on_pushButton_drink_clicked"
QT_MOC_LITERAL(17, 297, 27), // "on_pushButton_fruit_clicked"
QT_MOC_LITERAL(18, 325, 21), // "slot_test_add_to_cart"
QT_MOC_LITERAL(19, 347, 10), // "goods_name"
QT_MOC_LITERAL(20, 358, 2) // "id"

    },
    "UserInterface\0sig_Init_Admin_Goods\0\0"
    "QList<Goods_Frame*>*\0goods_list\0"
    "sig_Transfer_QList\0on_pushButton_checkChart_clicked\0"
    "on_pushButton_admin_clicked\0"
    "slot_Add_To_Cart\0num\0total_price\0"
    "slot_Get_Time\0slot_Back_User_Interface\0"
    "slot_Admin_Code_Correct\0slot_Play_Ads\0"
    "test_print\0on_pushButton_drink_clicked\0"
    "on_pushButton_fruit_clicked\0"
    "slot_test_add_to_cart\0goods_name\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    2,   87,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    4,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   19,   20,    9,   10,

       0        // eod
};

void UserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserInterface *_t = static_cast<UserInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_Init_Admin_Goods((*reinterpret_cast< QList<Goods_Frame*>*(*)>(_a[1]))); break;
        case 1: _t->sig_Transfer_QList((*reinterpret_cast< QList<Goods_Frame*>*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_checkChart_clicked(); break;
        case 3: _t->on_pushButton_admin_clicked(); break;
        case 4: _t->slot_Add_To_Cart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slot_Get_Time(); break;
        case 6: _t->slot_Back_User_Interface(); break;
        case 7: _t->slot_Admin_Code_Correct(); break;
        case 8: _t->slot_Play_Ads(); break;
        case 9: _t->test_print(); break;
        case 10: _t->on_pushButton_drink_clicked(); break;
        case 11: _t->on_pushButton_fruit_clicked(); break;
        case 12: _t->slot_test_add_to_cart((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UserInterface::*_t)(QList<Goods_Frame*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInterface::sig_Init_Admin_Goods)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserInterface::*_t)(QList<Goods_Frame*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInterface::sig_Transfer_QList)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UserInterface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UserInterface.data,
      qt_meta_data_UserInterface,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UserInterface::sig_Init_Admin_Goods(QList<Goods_Frame*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserInterface::sig_Transfer_QList(QList<Goods_Frame*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
