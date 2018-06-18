/****************************************************************************
** Meta object code from reading C++ file 'parameditint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/parameditint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameditint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParamEditInt_t {
    QByteArrayData data[13];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParamEditInt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParamEditInt_t qt_meta_stringdata_ParamEditInt = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ParamEditInt"
QT_MOC_LITERAL(1, 13, 15), // "paramChangedInt"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "src"
QT_MOC_LITERAL(4, 34, 4), // "name"
QT_MOC_LITERAL(5, 39, 8), // "newParam"
QT_MOC_LITERAL(6, 48, 17), // "percentageChanged"
QT_MOC_LITERAL(7, 66, 1), // "p"
QT_MOC_LITERAL(8, 68, 10), // "intChanged"
QT_MOC_LITERAL(9, 79, 1), // "i"
QT_MOC_LITERAL(10, 81, 21), // "on_readButton_clicked"
QT_MOC_LITERAL(11, 103, 28), // "on_readDefaultButton_clicked"
QT_MOC_LITERAL(12, 132, 21) // "on_helpButton_clicked"

    },
    "ParamEditInt\0paramChangedInt\0\0src\0"
    "name\0newParam\0percentageChanged\0p\0"
    "intChanged\0i\0on_readButton_clicked\0"
    "on_readDefaultButton_clicked\0"
    "on_helpButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParamEditInt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,
      11,    0,   58,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParamEditInt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamEditInt *_t = static_cast<ParamEditInt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChangedInt((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->percentageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->intChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_readButton_clicked(); break;
        case 4: _t->on_readDefaultButton_clicked(); break;
        case 5: _t->on_helpButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParamEditInt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParamEditInt.data,
      qt_meta_data_ParamEditInt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ParamEditInt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParamEditInt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParamEditInt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ParamEditInt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
