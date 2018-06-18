/****************************************************************************
** Meta object code from reading C++ file 'setupwizardapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setupwizardapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setupwizardapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetupWizardApp_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetupWizardApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetupWizardApp_t qt_meta_stringdata_SetupWizardApp = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SetupWizardApp"
QT_MOC_LITERAL(1, 15, 9), // "idChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 2) // "id"

    },
    "SetupWizardApp\0idChanged\0\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetupWizardApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SetupWizardApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetupWizardApp *_t = static_cast<SetupWizardApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SetupWizardApp::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_SetupWizardApp.data,
      qt_meta_data_SetupWizardApp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SetupWizardApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetupWizardApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetupWizardApp.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int SetupWizardApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AppIntroPage_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppIntroPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppIntroPage_t qt_meta_stringdata_AppIntroPage = {
    {
QT_MOC_LITERAL(0, 0, 12) // "AppIntroPage"

    },
    "AppIntroPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppIntroPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppIntroPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppIntroPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppIntroPage.data,
      qt_meta_data_AppIntroPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppIntroPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppIntroPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppIntroPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppIntroPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppConnectionPage_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppConnectionPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppConnectionPage_t qt_meta_stringdata_AppConnectionPage = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AppConnectionPage"

    },
    "AppConnectionPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppConnectionPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppConnectionPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppConnectionPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppConnectionPage.data,
      qt_meta_data_AppConnectionPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppConnectionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppConnectionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppConnectionPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppConnectionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppFirmwarePage_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppFirmwarePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppFirmwarePage_t qt_meta_stringdata_AppFirmwarePage = {
    {
QT_MOC_LITERAL(0, 0, 15) // "AppFirmwarePage"

    },
    "AppFirmwarePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppFirmwarePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppFirmwarePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppFirmwarePage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppFirmwarePage.data,
      qt_meta_data_AppFirmwarePage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppFirmwarePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppFirmwarePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppFirmwarePage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppFirmwarePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppMultiPage_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppMultiPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppMultiPage_t qt_meta_stringdata_AppMultiPage = {
    {
QT_MOC_LITERAL(0, 0, 12) // "AppMultiPage"

    },
    "AppMultiPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppMultiPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppMultiPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppMultiPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppMultiPage.data,
      qt_meta_data_AppMultiPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppMultiPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMultiPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppMultiPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppMultiPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppMultiIdPage_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppMultiIdPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppMultiIdPage_t qt_meta_stringdata_AppMultiIdPage = {
    {
QT_MOC_LITERAL(0, 0, 14) // "AppMultiIdPage"

    },
    "AppMultiIdPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppMultiIdPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppMultiIdPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppMultiIdPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppMultiIdPage.data,
      qt_meta_data_AppMultiIdPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppMultiIdPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMultiIdPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppMultiIdPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppMultiIdPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppGeneralPage_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppGeneralPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppGeneralPage_t qt_meta_stringdata_AppGeneralPage = {
    {
QT_MOC_LITERAL(0, 0, 14) // "AppGeneralPage"

    },
    "AppGeneralPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppGeneralPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppGeneralPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppGeneralPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppGeneralPage.data,
      qt_meta_data_AppGeneralPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppGeneralPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppGeneralPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppGeneralPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppGeneralPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppNunchukPage_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppNunchukPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppNunchukPage_t qt_meta_stringdata_AppNunchukPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AppNunchukPage"
QT_MOC_LITERAL(1, 15, 19), // "decodedChukReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 9) // "timerSlot"

    },
    "AppNunchukPage\0decodedChukReceived\0\0"
    "value\0timerSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppNunchukPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void AppNunchukPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppNunchukPage *_t = static_cast<AppNunchukPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->decodedChukReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->timerSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppNunchukPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppNunchukPage.data,
      qt_meta_data_AppNunchukPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppNunchukPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppNunchukPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppNunchukPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppNunchukPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AppPpmMapPage_t {
    QByteArrayData data[7];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppPpmMapPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppPpmMapPage_t qt_meta_stringdata_AppPpmMapPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AppPpmMapPage"
QT_MOC_LITERAL(1, 14, 18), // "paramChangedDouble"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "src"
QT_MOC_LITERAL(4, 38, 4), // "name"
QT_MOC_LITERAL(5, 43, 8), // "newParam"
QT_MOC_LITERAL(6, 52, 9) // "timerSlot"

    },
    "AppPpmMapPage\0paramChangedDouble\0\0src\0"
    "name\0newParam\0timerSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppPpmMapPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       6,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Double,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void AppPpmMapPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppPpmMapPage *_t = static_cast<AppPpmMapPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChangedDouble((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->timerSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppPpmMapPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppPpmMapPage.data,
      qt_meta_data_AppPpmMapPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppPpmMapPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppPpmMapPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppPpmMapPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppPpmMapPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AppPpmPage_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppPpmPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppPpmPage_t qt_meta_stringdata_AppPpmPage = {
    {
QT_MOC_LITERAL(0, 0, 10) // "AppPpmPage"

    },
    "AppPpmPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppPpmPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppPpmPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppPpmPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppPpmPage.data,
      qt_meta_data_AppPpmPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppPpmPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppPpmPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppPpmPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppPpmPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppAdcMapPage_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppAdcMapPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppAdcMapPage_t qt_meta_stringdata_AppAdcMapPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AppAdcMapPage"
QT_MOC_LITERAL(1, 14, 18), // "paramChangedDouble"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "src"
QT_MOC_LITERAL(4, 38, 4), // "name"
QT_MOC_LITERAL(5, 43, 8), // "newParam"
QT_MOC_LITERAL(6, 52, 16), // "paramChangedBool"
QT_MOC_LITERAL(7, 69, 9) // "timerSlot"

    },
    "AppAdcMapPage\0paramChangedDouble\0\0src\0"
    "name\0newParam\0paramChangedBool\0timerSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppAdcMapPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x08 /* Private */,
       6,    3,   36,    2, 0x08 /* Private */,
       7,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void AppAdcMapPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppAdcMapPage *_t = static_cast<AppAdcMapPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChangedDouble((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->paramChangedBool((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->timerSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppAdcMapPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppAdcMapPage.data,
      qt_meta_data_AppAdcMapPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppAdcMapPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppAdcMapPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppAdcMapPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppAdcMapPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_AppAdcPage_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppAdcPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppAdcPage_t qt_meta_stringdata_AppAdcPage = {
    {
QT_MOC_LITERAL(0, 0, 10) // "AppAdcPage"

    },
    "AppAdcPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppAdcPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppAdcPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppAdcPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppAdcPage.data,
      qt_meta_data_AppAdcPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppAdcPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppAdcPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppAdcPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppAdcPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AppConclusionPage_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppConclusionPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppConclusionPage_t qt_meta_stringdata_AppConclusionPage = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AppConclusionPage"

    },
    "AppConclusionPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppConclusionPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AppConclusionPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppConclusionPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_AppConclusionPage.data,
      qt_meta_data_AppConclusionPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppConclusionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppConclusionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppConclusionPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AppConclusionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
