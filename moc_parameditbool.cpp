/****************************************************************************
** Meta object code from reading C++ file 'parameditbool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/parameditbool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameditbool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParamEditBool_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParamEditBool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParamEditBool_t qt_meta_stringdata_ParamEditBool = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ParamEditBool"
QT_MOC_LITERAL(1, 14, 16), // "paramChangedBool"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "src"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 8), // "newParam"
QT_MOC_LITERAL(6, 50, 21), // "on_readButton_clicked"
QT_MOC_LITERAL(7, 72, 28), // "on_readDefaultButton_clicked"
QT_MOC_LITERAL(8, 101, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(9, 123, 31), // "on_valueBox_currentIndexChanged"
QT_MOC_LITERAL(10, 155, 5) // "index"

    },
    "ParamEditBool\0paramChangedBool\0\0src\0"
    "name\0newParam\0on_readButton_clicked\0"
    "on_readDefaultButton_clicked\0"
    "on_helpButton_clicked\0"
    "on_valueBox_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParamEditBool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void ParamEditBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamEditBool *_t = static_cast<ParamEditBool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChangedBool((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->on_readButton_clicked(); break;
        case 2: _t->on_readDefaultButton_clicked(); break;
        case 3: _t->on_helpButton_clicked(); break;
        case 4: _t->on_valueBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParamEditBool::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParamEditBool.data,
      qt_meta_data_ParamEditBool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ParamEditBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParamEditBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParamEditBool.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ParamEditBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
