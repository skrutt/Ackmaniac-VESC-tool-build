/****************************************************************************
** Meta object code from reading C++ file 'adcmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/adcmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adcmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdcMap_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdcMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdcMap_t qt_meta_stringdata_AdcMap = {
    {
QT_MOC_LITERAL(0, 0, 6), // "AdcMap"
QT_MOC_LITERAL(1, 7, 18), // "decodedAdcReceived"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 7), // "voltage"
QT_MOC_LITERAL(5, 41, 6), // "value2"
QT_MOC_LITERAL(6, 48, 8), // "voltage2"
QT_MOC_LITERAL(7, 57, 37), // "on_controlTypeBox_currentInde..."
QT_MOC_LITERAL(8, 95, 5), // "index"
QT_MOC_LITERAL(9, 101, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(10, 123, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(11, 146, 22) // "on_applyButton_clicked"

    },
    "AdcMap\0decodedAdcReceived\0\0value\0"
    "voltage\0value2\0voltage2\0"
    "on_controlTypeBox_currentIndexChanged\0"
    "index\0on_helpButton_clicked\0"
    "on_resetButton_clicked\0on_applyButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdcMap[] = {

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
       1,    4,   39,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,
      10,    0,   52,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdcMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdcMap *_t = static_cast<AdcMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->decodedAdcReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->on_controlTypeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_helpButton_clicked(); break;
        case 3: _t->on_resetButton_clicked(); break;
        case 4: _t->on_applyButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdcMap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdcMap.data,
      qt_meta_data_AdcMap,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdcMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdcMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdcMap.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdcMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
