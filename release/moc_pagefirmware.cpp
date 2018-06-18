/****************************************************************************
** Meta object code from reading C++ file 'pagefirmware.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pages/pagefirmware.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagefirmware.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageFirmware_t {
    QByteArrayData data[19];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageFirmware_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageFirmware_t qt_meta_stringdata_PageFirmware = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PageFirmware"
QT_MOC_LITERAL(1, 13, 14), // "fwUploadStatus"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "status"
QT_MOC_LITERAL(4, 36, 8), // "progress"
QT_MOC_LITERAL(5, 45, 9), // "isOngoing"
QT_MOC_LITERAL(6, 55, 17), // "fwVersionReceived"
QT_MOC_LITERAL(7, 73, 5), // "major"
QT_MOC_LITERAL(8, 79, 5), // "minor"
QT_MOC_LITERAL(9, 85, 2), // "hw"
QT_MOC_LITERAL(10, 88, 4), // "uuid"
QT_MOC_LITERAL(11, 93, 12), // "updateHwList"
QT_MOC_LITERAL(12, 106, 12), // "updateFwList"
QT_MOC_LITERAL(13, 119, 12), // "updateBlList"
QT_MOC_LITERAL(14, 132, 23), // "on_chooseButton_clicked"
QT_MOC_LITERAL(15, 156, 23), // "on_uploadButton_clicked"
QT_MOC_LITERAL(16, 180, 28), // "on_readVersionButton_clicked"
QT_MOC_LITERAL(17, 209, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(18, 233, 26) // "on_changelogButton_clicked"

    },
    "PageFirmware\0fwUploadStatus\0\0status\0"
    "progress\0isOngoing\0fwVersionReceived\0"
    "major\0minor\0hw\0uuid\0updateHwList\0"
    "updateFwList\0updateBlList\0"
    "on_chooseButton_clicked\0on_uploadButton_clicked\0"
    "on_readVersionButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_changelogButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageFirmware[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x08 /* Private */,
       6,    4,   81,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x28 /* Private | MethodCloned */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x28 /* Private | MethodCloned */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PageFirmware::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageFirmware *_t = static_cast<PageFirmware *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fwUploadStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->fwVersionReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 2: _t->updateHwList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->updateHwList(); break;
        case 4: _t->updateFwList(); break;
        case 5: _t->updateBlList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->updateBlList(); break;
        case 7: _t->on_chooseButton_clicked(); break;
        case 8: _t->on_uploadButton_clicked(); break;
        case 9: _t->on_readVersionButton_clicked(); break;
        case 10: _t->on_cancelButton_clicked(); break;
        case 11: _t->on_changelogButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PageFirmware::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageFirmware.data,
      qt_meta_data_PageFirmware,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageFirmware::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageFirmware::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageFirmware.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageFirmware::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
