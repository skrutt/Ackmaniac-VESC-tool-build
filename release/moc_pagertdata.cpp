/****************************************************************************
** Meta object code from reading C++ file 'pagertdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pages/pagertdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagertdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageRtData_t {
    QByteArrayData data[21];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageRtData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageRtData_t qt_meta_stringdata_PageRtData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PageRtData"
QT_MOC_LITERAL(1, 11, 9), // "timerSlot"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "valuesReceived"
QT_MOC_LITERAL(4, 37, 9), // "MC_VALUES"
QT_MOC_LITERAL(5, 47, 6), // "values"
QT_MOC_LITERAL(6, 54, 16), // "rotorPosReceived"
QT_MOC_LITERAL(7, 71, 3), // "pos"
QT_MOC_LITERAL(8, 75, 22), // "on_zoomHButton_toggled"
QT_MOC_LITERAL(9, 98, 7), // "checked"
QT_MOC_LITERAL(10, 106, 22), // "on_zoomVButton_toggled"
QT_MOC_LITERAL(11, 129, 24), // "on_rescaleButton_clicked"
QT_MOC_LITERAL(12, 154, 30), // "on_posInductanceButton_clicked"
QT_MOC_LITERAL(13, 185, 28), // "on_posObserverButton_clicked"
QT_MOC_LITERAL(14, 214, 27), // "on_posEncoderButton_clicked"
QT_MOC_LITERAL(15, 242, 23), // "on_posPidButton_clicked"
QT_MOC_LITERAL(16, 266, 28), // "on_posPidErrorButton_clicked"
QT_MOC_LITERAL(17, 295, 40), // "on_posEncoderObserverErrorBut..."
QT_MOC_LITERAL(18, 336, 24), // "on_posStopButton_clicked"
QT_MOC_LITERAL(19, 361, 28), // "on_tempShowMosfetBox_toggled"
QT_MOC_LITERAL(20, 390, 27) // "on_tempShowMotorBox_toggled"

    },
    "PageRtData\0timerSlot\0\0valuesReceived\0"
    "MC_VALUES\0values\0rotorPosReceived\0pos\0"
    "on_zoomHButton_toggled\0checked\0"
    "on_zoomVButton_toggled\0on_rescaleButton_clicked\0"
    "on_posInductanceButton_clicked\0"
    "on_posObserverButton_clicked\0"
    "on_posEncoderButton_clicked\0"
    "on_posPidButton_clicked\0"
    "on_posPidErrorButton_clicked\0"
    "on_posEncoderObserverErrorButton_clicked\0"
    "on_posStopButton_clicked\0"
    "on_tempShowMosfetBox_toggled\0"
    "on_tempShowMotorBox_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageRtData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void PageRtData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageRtData *_t = static_cast<PageRtData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerSlot(); break;
        case 1: _t->valuesReceived((*reinterpret_cast< MC_VALUES(*)>(_a[1]))); break;
        case 2: _t->rotorPosReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_zoomHButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_zoomVButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_rescaleButton_clicked(); break;
        case 6: _t->on_posInductanceButton_clicked(); break;
        case 7: _t->on_posObserverButton_clicked(); break;
        case 8: _t->on_posEncoderButton_clicked(); break;
        case 9: _t->on_posPidButton_clicked(); break;
        case 10: _t->on_posPidErrorButton_clicked(); break;
        case 11: _t->on_posEncoderObserverErrorButton_clicked(); break;
        case 12: _t->on_posStopButton_clicked(); break;
        case 13: _t->on_tempShowMosfetBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_tempShowMotorBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageRtData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageRtData.data,
      qt_meta_data_PageRtData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageRtData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageRtData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageRtData.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageRtData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
