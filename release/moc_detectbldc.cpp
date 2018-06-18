/****************************************************************************
** Meta object code from reading C++ file 'detectbldc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/detectbldc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detectbldc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DetectBldc_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DetectBldc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DetectBldc_t qt_meta_stringdata_DetectBldc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DetectBldc"
QT_MOC_LITERAL(1, 11, 18), // "bldcDetectReceived"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "bldc_detect"
QT_MOC_LITERAL(4, 43, 5), // "param"
QT_MOC_LITERAL(5, 49, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(6, 70, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(7, 93, 21) // "on_helpButton_clicked"

    },
    "DetectBldc\0bldcDetectReceived\0\0"
    "bldc_detect\0param\0on_runButton_clicked\0"
    "on_applyButton_clicked\0on_helpButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DetectBldc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DetectBldc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DetectBldc *_t = static_cast<DetectBldc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bldcDetectReceived((*reinterpret_cast< bldc_detect(*)>(_a[1]))); break;
        case 1: _t->on_runButton_clicked(); break;
        case 2: _t->on_applyButton_clicked(); break;
        case 3: _t->on_helpButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DetectBldc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DetectBldc.data,
      qt_meta_data_DetectBldc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DetectBldc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DetectBldc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DetectBldc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DetectBldc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
