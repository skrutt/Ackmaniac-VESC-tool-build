/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[65];
    char stringdata0[1627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "timerSlot"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "showStatusInfo"
QT_MOC_LITERAL(4, 37, 4), // "info"
QT_MOC_LITERAL(5, 42, 6), // "isGood"
QT_MOC_LITERAL(6, 49, 17), // "showMessageDialog"
QT_MOC_LITERAL(7, 67, 5), // "title"
QT_MOC_LITERAL(8, 73, 3), // "msg"
QT_MOC_LITERAL(9, 77, 21), // "serialPortNotWritable"
QT_MOC_LITERAL(10, 99, 4), // "port"
QT_MOC_LITERAL(11, 104, 14), // "valuesReceived"
QT_MOC_LITERAL(12, 119, 9), // "MC_VALUES"
QT_MOC_LITERAL(13, 129, 6), // "values"
QT_MOC_LITERAL(14, 136, 18), // "paramChangedDouble"
QT_MOC_LITERAL(15, 155, 3), // "src"
QT_MOC_LITERAL(16, 159, 4), // "name"
QT_MOC_LITERAL(17, 164, 8), // "newParam"
QT_MOC_LITERAL(18, 173, 13), // "mcconfUpdated"
QT_MOC_LITERAL(19, 187, 14), // "appconfUpdated"
QT_MOC_LITERAL(20, 202, 19), // "mcConfigCheckResult"
QT_MOC_LITERAL(21, 222, 12), // "paramsNotSet"
QT_MOC_LITERAL(22, 235, 28), // "on_actionReconnect_triggered"
QT_MOC_LITERAL(23, 264, 29), // "on_actionDisconnect_triggered"
QT_MOC_LITERAL(24, 294, 25), // "on_actionReboot_triggered"
QT_MOC_LITERAL(25, 320, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(26, 342, 26), // "on_fullBrakeButton_clicked"
QT_MOC_LITERAL(27, 369, 29), // "on_actionReadMcconf_triggered"
QT_MOC_LITERAL(28, 399, 36), // "on_actionReadMcconfDefault_tr..."
QT_MOC_LITERAL(29, 436, 30), // "on_actionWriteMcconf_triggered"
QT_MOC_LITERAL(30, 467, 30), // "on_actionReadAppconf_triggered"
QT_MOC_LITERAL(31, 498, 37), // "on_actionReadAppconfDefault_t..."
QT_MOC_LITERAL(32, 536, 31), // "on_actionWriteAppconf_triggered"
QT_MOC_LITERAL(33, 568, 35), // "on_actionSaveMotorConfXml_tri..."
QT_MOC_LITERAL(34, 604, 35), // "on_actionLoadMotorConfXml_tri..."
QT_MOC_LITERAL(35, 640, 33), // "on_actionSaveAppconfXml_trigg..."
QT_MOC_LITERAL(36, 674, 33), // "on_actionLoadAppconfXml_trigg..."
QT_MOC_LITERAL(37, 708, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(38, 732, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(39, 757, 32), // "on_actionLibrariesUsed_triggered"
QT_MOC_LITERAL(40, 790, 21), // "on_dutyButton_clicked"
QT_MOC_LITERAL(41, 812, 24), // "on_currentButton_clicked"
QT_MOC_LITERAL(42, 837, 22), // "on_speedButton_clicked"
QT_MOC_LITERAL(43, 860, 20), // "on_posButton_clicked"
QT_MOC_LITERAL(44, 881, 29), // "on_brakeCurrentButton_clicked"
QT_MOC_LITERAL(45, 911, 26), // "on_handbrakeButton_clicked"
QT_MOC_LITERAL(46, 938, 29), // "on_pageList_currentRowChanged"
QT_MOC_LITERAL(47, 968, 10), // "currentRow"
QT_MOC_LITERAL(48, 979, 40), // "on_actionParameterEditorMccon..."
QT_MOC_LITERAL(49, 1020, 41), // "on_actionParameterEditorAppco..."
QT_MOC_LITERAL(50, 1062, 38), // "on_actionParameterEditorInfo_..."
QT_MOC_LITERAL(51, 1101, 47), // "on_actionSaveMotorConfigurati..."
QT_MOC_LITERAL(52, 1149, 45), // "on_actionSaveAppConfiguration..."
QT_MOC_LITERAL(53, 1195, 51), // "on_actionSaveMotorConfigurati..."
QT_MOC_LITERAL(54, 1247, 49), // "on_actionSaveAppConfiguration..."
QT_MOC_LITERAL(55, 1297, 38), // "on_actionTerminalPrintFaults_..."
QT_MOC_LITERAL(56, 1336, 35), // "on_actionTerminalShowHelp_tri..."
QT_MOC_LITERAL(57, 1372, 32), // "on_actionTerminalClear_triggered"
QT_MOC_LITERAL(58, 1405, 39), // "on_actionTerminalPrintThreads..."
QT_MOC_LITERAL(59, 1445, 52), // "on_actionTerminalDRV8301Reset..."
QT_MOC_LITERAL(60, 1498, 23), // "on_actionCanFwd_toggled"
QT_MOC_LITERAL(61, 1522, 4), // "arg1"
QT_MOC_LITERAL(62, 1527, 35), // "on_actionESCToolChangelog_tri..."
QT_MOC_LITERAL(63, 1563, 36), // "on_actionFirmwareChangelog_tr..."
QT_MOC_LITERAL(64, 1600, 26) // "on_actionLicense_triggered"

    },
    "MainWindow\0timerSlot\0\0showStatusInfo\0"
    "info\0isGood\0showMessageDialog\0title\0"
    "msg\0serialPortNotWritable\0port\0"
    "valuesReceived\0MC_VALUES\0values\0"
    "paramChangedDouble\0src\0name\0newParam\0"
    "mcconfUpdated\0appconfUpdated\0"
    "mcConfigCheckResult\0paramsNotSet\0"
    "on_actionReconnect_triggered\0"
    "on_actionDisconnect_triggered\0"
    "on_actionReboot_triggered\0"
    "on_stopButton_clicked\0on_fullBrakeButton_clicked\0"
    "on_actionReadMcconf_triggered\0"
    "on_actionReadMcconfDefault_triggered\0"
    "on_actionWriteMcconf_triggered\0"
    "on_actionReadAppconf_triggered\0"
    "on_actionReadAppconfDefault_triggered\0"
    "on_actionWriteAppconf_triggered\0"
    "on_actionSaveMotorConfXml_triggered\0"
    "on_actionLoadMotorConfXml_triggered\0"
    "on_actionSaveAppconfXml_triggered\0"
    "on_actionLoadAppconfXml_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionLibrariesUsed_triggered\0"
    "on_dutyButton_clicked\0on_currentButton_clicked\0"
    "on_speedButton_clicked\0on_posButton_clicked\0"
    "on_brakeCurrentButton_clicked\0"
    "on_handbrakeButton_clicked\0"
    "on_pageList_currentRowChanged\0currentRow\0"
    "on_actionParameterEditorMcconf_triggered\0"
    "on_actionParameterEditorAppconf_triggered\0"
    "on_actionParameterEditorInfo_triggered\0"
    "on_actionSaveMotorConfigurationHeader_triggered\0"
    "on_actionSaveAppConfigurationHeader_triggered\0"
    "on_actionSaveMotorConfigurationHeaderWrap_triggered\0"
    "on_actionSaveAppConfigurationHeaderWrap_triggered\0"
    "on_actionTerminalPrintFaults_triggered\0"
    "on_actionTerminalShowHelp_triggered\0"
    "on_actionTerminalClear_triggered\0"
    "on_actionTerminalPrintThreads_triggered\0"
    "on_actionTerminalDRV8301ResetLatchedFaults_triggered\0"
    "on_actionCanFwd_toggled\0arg1\0"
    "on_actionESCToolChangelog_triggered\0"
    "on_actionFirmwareChangelog_triggered\0"
    "on_actionLicense_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x08 /* Private */,
       3,    2,  265,    2, 0x08 /* Private */,
       6,    3,  270,    2, 0x08 /* Private */,
       9,    1,  277,    2, 0x08 /* Private */,
      11,    1,  280,    2, 0x08 /* Private */,
      14,    3,  283,    2, 0x08 /* Private */,
      18,    0,  290,    2, 0x08 /* Private */,
      19,    0,  291,    2, 0x08 /* Private */,
      20,    1,  292,    2, 0x08 /* Private */,
      22,    0,  295,    2, 0x08 /* Private */,
      23,    0,  296,    2, 0x08 /* Private */,
      24,    0,  297,    2, 0x08 /* Private */,
      25,    0,  298,    2, 0x08 /* Private */,
      26,    0,  299,    2, 0x08 /* Private */,
      27,    0,  300,    2, 0x08 /* Private */,
      28,    0,  301,    2, 0x08 /* Private */,
      29,    0,  302,    2, 0x08 /* Private */,
      30,    0,  303,    2, 0x08 /* Private */,
      31,    0,  304,    2, 0x08 /* Private */,
      32,    0,  305,    2, 0x08 /* Private */,
      33,    0,  306,    2, 0x08 /* Private */,
      34,    0,  307,    2, 0x08 /* Private */,
      35,    0,  308,    2, 0x08 /* Private */,
      36,    0,  309,    2, 0x08 /* Private */,
      37,    0,  310,    2, 0x08 /* Private */,
      38,    0,  311,    2, 0x08 /* Private */,
      39,    0,  312,    2, 0x08 /* Private */,
      40,    0,  313,    2, 0x08 /* Private */,
      41,    0,  314,    2, 0x08 /* Private */,
      42,    0,  315,    2, 0x08 /* Private */,
      43,    0,  316,    2, 0x08 /* Private */,
      44,    0,  317,    2, 0x08 /* Private */,
      45,    0,  318,    2, 0x08 /* Private */,
      46,    1,  319,    2, 0x08 /* Private */,
      48,    0,  322,    2, 0x08 /* Private */,
      49,    0,  323,    2, 0x08 /* Private */,
      50,    0,  324,    2, 0x08 /* Private */,
      51,    0,  325,    2, 0x08 /* Private */,
      52,    0,  326,    2, 0x08 /* Private */,
      53,    0,  327,    2, 0x08 /* Private */,
      54,    0,  328,    2, 0x08 /* Private */,
      55,    0,  329,    2, 0x08 /* Private */,
      56,    0,  330,    2, 0x08 /* Private */,
      57,    0,  331,    2, 0x08 /* Private */,
      58,    0,  332,    2, 0x08 /* Private */,
      59,    0,  333,    2, 0x08 /* Private */,
      60,    1,  334,    2, 0x08 /* Private */,
      62,    0,  337,    2, 0x08 /* Private */,
      63,    0,  338,    2, 0x08 /* Private */,
      64,    0,  339,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,    8,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::Double,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerSlot(); break;
        case 1: _t->showStatusInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->showMessageDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->serialPortNotWritable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->valuesReceived((*reinterpret_cast< MC_VALUES(*)>(_a[1]))); break;
        case 5: _t->paramChangedDouble((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->mcconfUpdated(); break;
        case 7: _t->appconfUpdated(); break;
        case 8: _t->mcConfigCheckResult((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 9: _t->on_actionReconnect_triggered(); break;
        case 10: _t->on_actionDisconnect_triggered(); break;
        case 11: _t->on_actionReboot_triggered(); break;
        case 12: _t->on_stopButton_clicked(); break;
        case 13: _t->on_fullBrakeButton_clicked(); break;
        case 14: _t->on_actionReadMcconf_triggered(); break;
        case 15: _t->on_actionReadMcconfDefault_triggered(); break;
        case 16: _t->on_actionWriteMcconf_triggered(); break;
        case 17: _t->on_actionReadAppconf_triggered(); break;
        case 18: _t->on_actionReadAppconfDefault_triggered(); break;
        case 19: _t->on_actionWriteAppconf_triggered(); break;
        case 20: _t->on_actionSaveMotorConfXml_triggered(); break;
        case 21: _t->on_actionLoadMotorConfXml_triggered(); break;
        case 22: _t->on_actionSaveAppconfXml_triggered(); break;
        case 23: _t->on_actionLoadAppconfXml_triggered(); break;
        case 24: _t->on_actionExit_triggered(); break;
        case 25: _t->on_actionAbout_triggered(); break;
        case 26: _t->on_actionLibrariesUsed_triggered(); break;
        case 27: _t->on_dutyButton_clicked(); break;
        case 28: _t->on_currentButton_clicked(); break;
        case 29: _t->on_speedButton_clicked(); break;
        case 30: _t->on_posButton_clicked(); break;
        case 31: _t->on_brakeCurrentButton_clicked(); break;
        case 32: _t->on_handbrakeButton_clicked(); break;
        case 33: _t->on_pageList_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_actionParameterEditorMcconf_triggered(); break;
        case 35: _t->on_actionParameterEditorAppconf_triggered(); break;
        case 36: _t->on_actionParameterEditorInfo_triggered(); break;
        case 37: _t->on_actionSaveMotorConfigurationHeader_triggered(); break;
        case 38: _t->on_actionSaveAppConfigurationHeader_triggered(); break;
        case 39: _t->on_actionSaveMotorConfigurationHeaderWrap_triggered(); break;
        case 40: _t->on_actionSaveAppConfigurationHeaderWrap_triggered(); break;
        case 41: _t->on_actionTerminalPrintFaults_triggered(); break;
        case 42: _t->on_actionTerminalShowHelp_triggered(); break;
        case 43: _t->on_actionTerminalClear_triggered(); break;
        case 44: _t->on_actionTerminalPrintThreads_triggered(); break;
        case 45: _t->on_actionTerminalDRV8301ResetLatchedFaults_triggered(); break;
        case 46: _t->on_actionCanFwd_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_actionESCToolChangelog_triggered(); break;
        case 48: _t->on_actionFirmwareChangelog_triggered(); break;
        case 49: _t->on_actionLicense_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
