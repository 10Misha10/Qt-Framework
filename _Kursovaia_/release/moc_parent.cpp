/****************************************************************************
** Meta object code from reading C++ file 'parent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../parent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Parent_t {
    const uint offsetsAndSize[14];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Parent_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Parent_t qt_meta_stringdata_Parent = {
    {
QT_MOC_LITERAL(0, 6), // "Parent"
QT_MOC_LITERAL(7, 20), // "signal_to_MainWindow"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 2), // "n2"
QT_MOC_LITERAL(32, 21), // "slot_from_Main_Window"
QT_MOC_LITERAL(54, 1), // "n"
QT_MOC_LITERAL(56, 2) // "n1"

    },
    "Parent\0signal_to_MainWindow\0\0n2\0"
    "slot_from_Main_Window\0n\0n1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Parent[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,

       0        // eod
};

void Parent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Parent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_to_MainWindow((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->slot_from_Main_Window((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Parent::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Parent::signal_to_MainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Parent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Parent.offsetsAndSize,
    qt_meta_data_Parent,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Parent_t
, QtPrivate::TypeAndForceComplete<Parent, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Parent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Parent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Parent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Parent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Parent::signal_to_MainWindow(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
