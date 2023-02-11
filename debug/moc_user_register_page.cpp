/****************************************************************************
** Meta object code from reading C++ file 'user_register_page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Police_Management/user_register_page.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_register_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_User_register_page_t {
    uint offsetsAndSizes[8];
    char stringdata0[19];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_User_register_page_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_User_register_page_t qt_meta_stringdata_User_register_page = {
    {
        QT_MOC_LITERAL(0, 18),  // "User_register_page"
        QT_MOC_LITERAL(19, 31),  // "on_user_register_button_clicked"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 22)   // "on_back_button_clicked"
    },
    "User_register_page",
    "on_user_register_button_clicked",
    "",
    "on_back_button_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_User_register_page[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject User_register_page::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_User_register_page.offsetsAndSizes,
    qt_meta_data_User_register_page,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_User_register_page_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<User_register_page, std::true_type>,
        // method 'on_user_register_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void User_register_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<User_register_page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_user_register_button_clicked(); break;
        case 1: _t->on_back_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *User_register_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User_register_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_User_register_page.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int User_register_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
