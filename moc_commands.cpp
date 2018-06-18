/****************************************************************************
** Meta object code from reading C++ file 'commands.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commands.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commands.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Commands_t {
    QByteArrayData data[103];
    char stringdata0[1160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Commands_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Commands_t qt_meta_stringdata_Commands = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Commands"
QT_MOC_LITERAL(1, 9, 10), // "dataToSend"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 33, 4), // "data"
QT_MOC_LITERAL(5, 38, 17), // "fwVersionReceived"
QT_MOC_LITERAL(6, 56, 5), // "major"
QT_MOC_LITERAL(7, 62, 5), // "minor"
QT_MOC_LITERAL(8, 68, 2), // "hw"
QT_MOC_LITERAL(9, 71, 4), // "uuid"
QT_MOC_LITERAL(10, 76, 11), // "ackReceived"
QT_MOC_LITERAL(11, 88, 7), // "ackType"
QT_MOC_LITERAL(12, 96, 14), // "valuesReceived"
QT_MOC_LITERAL(13, 111, 9), // "MC_VALUES"
QT_MOC_LITERAL(14, 121, 6), // "values"
QT_MOC_LITERAL(15, 128, 13), // "printReceived"
QT_MOC_LITERAL(16, 142, 3), // "str"
QT_MOC_LITERAL(17, 146, 15), // "samplesReceived"
QT_MOC_LITERAL(18, 162, 5), // "bytes"
QT_MOC_LITERAL(19, 168, 16), // "rotorPosReceived"
QT_MOC_LITERAL(20, 185, 3), // "pos"
QT_MOC_LITERAL(21, 189, 25), // "experimentSamplesReceived"
QT_MOC_LITERAL(22, 215, 15), // "QVector<double>"
QT_MOC_LITERAL(23, 231, 7), // "samples"
QT_MOC_LITERAL(24, 239, 18), // "bldcDetectReceived"
QT_MOC_LITERAL(25, 258, 11), // "bldc_detect"
QT_MOC_LITERAL(26, 270, 5), // "param"
QT_MOC_LITERAL(27, 276, 18), // "decodedPpmReceived"
QT_MOC_LITERAL(28, 295, 5), // "value"
QT_MOC_LITERAL(29, 301, 8), // "last_len"
QT_MOC_LITERAL(30, 310, 18), // "decodedAdcReceived"
QT_MOC_LITERAL(31, 329, 7), // "voltage"
QT_MOC_LITERAL(32, 337, 6), // "value2"
QT_MOC_LITERAL(33, 344, 8), // "voltage2"
QT_MOC_LITERAL(34, 353, 19), // "decodedChukReceived"
QT_MOC_LITERAL(35, 373, 15), // "motorRLReceived"
QT_MOC_LITERAL(36, 389, 1), // "r"
QT_MOC_LITERAL(37, 391, 1), // "l"
QT_MOC_LITERAL(38, 393, 20), // "motorLinkageReceived"
QT_MOC_LITERAL(39, 414, 12), // "flux_linkage"
QT_MOC_LITERAL(40, 427, 20), // "encoderParamReceived"
QT_MOC_LITERAL(41, 448, 6), // "offset"
QT_MOC_LITERAL(42, 455, 5), // "ratio"
QT_MOC_LITERAL(43, 461, 8), // "inverted"
QT_MOC_LITERAL(44, 470, 21), // "customAppDataReceived"
QT_MOC_LITERAL(45, 492, 20), // "focHallTableReceived"
QT_MOC_LITERAL(46, 513, 12), // "QVector<int>"
QT_MOC_LITERAL(47, 526, 10), // "hall_table"
QT_MOC_LITERAL(48, 537, 3), // "res"
QT_MOC_LITERAL(49, 541, 13), // "nrfPairingRes"
QT_MOC_LITERAL(50, 555, 12), // "NRF_PAIR_RES"
QT_MOC_LITERAL(51, 568, 19), // "mcConfigCheckResult"
QT_MOC_LITERAL(52, 588, 12), // "paramsNotSet"
QT_MOC_LITERAL(53, 601, 13), // "processPacket"
QT_MOC_LITERAL(54, 615, 12), // "getFwVersion"
QT_MOC_LITERAL(55, 628, 9), // "getValues"
QT_MOC_LITERAL(56, 638, 15), // "sendTerminalCmd"
QT_MOC_LITERAL(57, 654, 3), // "cmd"
QT_MOC_LITERAL(58, 658, 12), // "setDutyCycle"
QT_MOC_LITERAL(59, 671, 9), // "dutyCycle"
QT_MOC_LITERAL(60, 681, 10), // "setCurrent"
QT_MOC_LITERAL(61, 692, 7), // "current"
QT_MOC_LITERAL(62, 700, 15), // "setCurrentBrake"
QT_MOC_LITERAL(63, 716, 6), // "setRpm"
QT_MOC_LITERAL(64, 723, 3), // "rpm"
QT_MOC_LITERAL(65, 727, 6), // "setPos"
QT_MOC_LITERAL(66, 734, 12), // "setHandbrake"
QT_MOC_LITERAL(67, 747, 9), // "setDetect"
QT_MOC_LITERAL(68, 757, 13), // "disp_pos_mode"
QT_MOC_LITERAL(69, 771, 4), // "mode"
QT_MOC_LITERAL(70, 776, 11), // "samplePrint"
QT_MOC_LITERAL(71, 788, 19), // "debug_sampling_mode"
QT_MOC_LITERAL(72, 808, 10), // "sample_len"
QT_MOC_LITERAL(73, 819, 3), // "dec"
QT_MOC_LITERAL(74, 823, 9), // "getMcconf"
QT_MOC_LITERAL(75, 833, 16), // "getMcconfDefault"
QT_MOC_LITERAL(76, 850, 9), // "setMcconf"
QT_MOC_LITERAL(77, 860, 5), // "check"
QT_MOC_LITERAL(78, 866, 10), // "getAppConf"
QT_MOC_LITERAL(79, 877, 17), // "getAppConfDefault"
QT_MOC_LITERAL(80, 895, 10), // "setAppConf"
QT_MOC_LITERAL(81, 906, 16), // "detectMotorParam"
QT_MOC_LITERAL(82, 923, 7), // "min_rpm"
QT_MOC_LITERAL(83, 931, 8), // "low_duty"
QT_MOC_LITERAL(84, 940, 6), // "reboot"
QT_MOC_LITERAL(85, 947, 9), // "sendAlive"
QT_MOC_LITERAL(86, 957, 13), // "getDecodedPpm"
QT_MOC_LITERAL(87, 971, 13), // "getDecodedAdc"
QT_MOC_LITERAL(88, 985, 14), // "getDecodedChuk"
QT_MOC_LITERAL(89, 1000, 11), // "setServoPos"
QT_MOC_LITERAL(90, 1012, 9), // "measureRL"
QT_MOC_LITERAL(91, 1022, 14), // "measureLinkage"
QT_MOC_LITERAL(92, 1037, 10), // "resistance"
QT_MOC_LITERAL(93, 1048, 14), // "measureEncoder"
QT_MOC_LITERAL(94, 1063, 14), // "measureHallFoc"
QT_MOC_LITERAL(95, 1078, 17), // "sendCustomAppData"
QT_MOC_LITERAL(96, 1096, 14), // "unsigned char*"
QT_MOC_LITERAL(97, 1111, 3), // "len"
QT_MOC_LITERAL(98, 1115, 11), // "setChukData"
QT_MOC_LITERAL(99, 1127, 11), // "chuck_data&"
QT_MOC_LITERAL(100, 1139, 7), // "pairNrf"
QT_MOC_LITERAL(101, 1147, 2), // "ms"
QT_MOC_LITERAL(102, 1150, 9) // "timerSlot"

    },
    "Commands\0dataToSend\0\0QByteArray&\0data\0"
    "fwVersionReceived\0major\0minor\0hw\0uuid\0"
    "ackReceived\0ackType\0valuesReceived\0"
    "MC_VALUES\0values\0printReceived\0str\0"
    "samplesReceived\0bytes\0rotorPosReceived\0"
    "pos\0experimentSamplesReceived\0"
    "QVector<double>\0samples\0bldcDetectReceived\0"
    "bldc_detect\0param\0decodedPpmReceived\0"
    "value\0last_len\0decodedAdcReceived\0"
    "voltage\0value2\0voltage2\0decodedChukReceived\0"
    "motorRLReceived\0r\0l\0motorLinkageReceived\0"
    "flux_linkage\0encoderParamReceived\0"
    "offset\0ratio\0inverted\0customAppDataReceived\0"
    "focHallTableReceived\0QVector<int>\0"
    "hall_table\0res\0nrfPairingRes\0NRF_PAIR_RES\0"
    "mcConfigCheckResult\0paramsNotSet\0"
    "processPacket\0getFwVersion\0getValues\0"
    "sendTerminalCmd\0cmd\0setDutyCycle\0"
    "dutyCycle\0setCurrent\0current\0"
    "setCurrentBrake\0setRpm\0rpm\0setPos\0"
    "setHandbrake\0setDetect\0disp_pos_mode\0"
    "mode\0samplePrint\0debug_sampling_mode\0"
    "sample_len\0dec\0getMcconf\0getMcconfDefault\0"
    "setMcconf\0check\0getAppConf\0getAppConfDefault\0"
    "setAppConf\0detectMotorParam\0min_rpm\0"
    "low_duty\0reboot\0sendAlive\0getDecodedPpm\0"
    "getDecodedAdc\0getDecodedChuk\0setServoPos\0"
    "measureRL\0measureLinkage\0resistance\0"
    "measureEncoder\0measureHallFoc\0"
    "sendCustomAppData\0unsigned char*\0len\0"
    "setChukData\0chuck_data&\0pairNrf\0ms\0"
    "timerSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Commands[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       5,    4,  287,    2, 0x06 /* Public */,
      10,    1,  296,    2, 0x06 /* Public */,
      12,    1,  299,    2, 0x06 /* Public */,
      15,    1,  302,    2, 0x06 /* Public */,
      17,    1,  305,    2, 0x06 /* Public */,
      19,    1,  308,    2, 0x06 /* Public */,
      21,    1,  311,    2, 0x06 /* Public */,
      24,    1,  314,    2, 0x06 /* Public */,
      27,    2,  317,    2, 0x06 /* Public */,
      30,    4,  322,    2, 0x06 /* Public */,
      34,    1,  331,    2, 0x06 /* Public */,
      35,    2,  334,    2, 0x06 /* Public */,
      38,    1,  339,    2, 0x06 /* Public */,
      40,    3,  342,    2, 0x06 /* Public */,
      44,    1,  349,    2, 0x06 /* Public */,
      45,    2,  352,    2, 0x06 /* Public */,
      49,    1,  357,    2, 0x06 /* Public */,
      51,    1,  360,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      53,    1,  363,    2, 0x0a /* Public */,
      54,    0,  366,    2, 0x0a /* Public */,
      55,    0,  367,    2, 0x0a /* Public */,
      56,    1,  368,    2, 0x0a /* Public */,
      58,    1,  371,    2, 0x0a /* Public */,
      60,    1,  374,    2, 0x0a /* Public */,
      62,    1,  377,    2, 0x0a /* Public */,
      63,    1,  380,    2, 0x0a /* Public */,
      65,    1,  383,    2, 0x0a /* Public */,
      66,    1,  386,    2, 0x0a /* Public */,
      67,    1,  389,    2, 0x0a /* Public */,
      70,    3,  392,    2, 0x0a /* Public */,
      74,    0,  399,    2, 0x0a /* Public */,
      75,    0,  400,    2, 0x0a /* Public */,
      76,    1,  401,    2, 0x0a /* Public */,
      76,    0,  404,    2, 0x2a /* Public | MethodCloned */,
      78,    0,  405,    2, 0x0a /* Public */,
      79,    0,  406,    2, 0x0a /* Public */,
      80,    0,  407,    2, 0x0a /* Public */,
      81,    3,  408,    2, 0x0a /* Public */,
      84,    0,  415,    2, 0x0a /* Public */,
      85,    0,  416,    2, 0x0a /* Public */,
      86,    0,  417,    2, 0x0a /* Public */,
      87,    0,  418,    2, 0x0a /* Public */,
      88,    0,  419,    2, 0x0a /* Public */,
      89,    1,  420,    2, 0x0a /* Public */,
      90,    0,  423,    2, 0x0a /* Public */,
      91,    4,  424,    2, 0x0a /* Public */,
      93,    1,  433,    2, 0x0a /* Public */,
      94,    1,  436,    2, 0x0a /* Public */,
      95,    1,  439,    2, 0x0a /* Public */,
      95,    2,  442,    2, 0x0a /* Public */,
      98,    1,  447,    2, 0x0a /* Public */,
     100,    1,  450,    2, 0x0a /* Public */,
     102,    0,  453,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QByteArray,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   28,   29,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   28,   31,   32,   33,
    QMetaType::Void, QMetaType::Double,   28,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   36,   37,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   41,   42,   43,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, 0x80000000 | 46, QMetaType::Int,   47,   48,
    QMetaType::Void, 0x80000000 | 50,   48,
    QMetaType::Void, QMetaType::QStringList,   52,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::Double,   59,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 71, QMetaType::Int, QMetaType::Int,   69,   72,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   61,   82,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   61,   82,   83,   92,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, 0x80000000 | 96, QMetaType::UInt,    4,   97,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::Int,  101,
    QMetaType::Void,

       0        // eod
};

void Commands::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Commands *_t = static_cast<Commands *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataToSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->fwVersionReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 2: _t->ackReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->valuesReceived((*reinterpret_cast< MC_VALUES(*)>(_a[1]))); break;
        case 4: _t->printReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->samplesReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->rotorPosReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->experimentSamplesReceived((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 8: _t->bldcDetectReceived((*reinterpret_cast< bldc_detect(*)>(_a[1]))); break;
        case 9: _t->decodedPpmReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->decodedAdcReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 11: _t->decodedChukReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->motorRLReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->motorLinkageReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->encoderParamReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->customAppDataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 16: _t->focHallTableReceived((*reinterpret_cast< QVector<int>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->nrfPairingRes((*reinterpret_cast< NRF_PAIR_RES(*)>(_a[1]))); break;
        case 18: _t->mcConfigCheckResult((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 19: _t->processPacket((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 20: _t->getFwVersion(); break;
        case 21: _t->getValues(); break;
        case 22: _t->sendTerminalCmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->setDutyCycle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->setCurrent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->setCurrentBrake((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->setRpm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->setHandbrake((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->setDetect((*reinterpret_cast< disp_pos_mode(*)>(_a[1]))); break;
        case 30: _t->samplePrint((*reinterpret_cast< debug_sampling_mode(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->getMcconf(); break;
        case 32: _t->getMcconfDefault(); break;
        case 33: _t->setMcconf((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setMcconf(); break;
        case 35: _t->getAppConf(); break;
        case 36: _t->getAppConfDefault(); break;
        case 37: _t->setAppConf(); break;
        case 38: _t->detectMotorParam((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 39: _t->reboot(); break;
        case 40: _t->sendAlive(); break;
        case 41: _t->getDecodedPpm(); break;
        case 42: _t->getDecodedAdc(); break;
        case 43: _t->getDecodedChuk(); break;
        case 44: _t->setServoPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 45: _t->measureRL(); break;
        case 46: _t->measureLinkage((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 47: _t->measureEncoder((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: _t->measureHallFoc((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 49: _t->sendCustomAppData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 50: _t->sendCustomAppData((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 51: _t->setChukData((*reinterpret_cast< chuck_data(*)>(_a[1]))); break;
        case 52: _t->pairNrf((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->timerSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Commands::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::dataToSend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Commands::*)(int , int , QString , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::fwVersionReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::ackReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Commands::*)(MC_VALUES );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::valuesReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::printReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::samplesReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::rotorPosReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::experimentSamplesReceived)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Commands::*)(bldc_detect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::bldcDetectReceived)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::decodedPpmReceived)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::decodedAdcReceived)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::decodedChukReceived)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::motorRLReceived)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::motorLinkageReceived)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Commands::*)(double , double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::encoderParamReceived)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::customAppDataReceived)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QVector<int> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::focHallTableReceived)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Commands::*)(NRF_PAIR_RES );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::nrfPairingRes)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Commands::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Commands::mcConfigCheckResult)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Commands::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Commands.data,
      qt_meta_data_Commands,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Commands::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Commands::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Commands.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Commands::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void Commands::dataToSend(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Commands::fwVersionReceived(int _t1, int _t2, QString _t3, QByteArray _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Commands::ackReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Commands::valuesReceived(MC_VALUES _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Commands::printReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Commands::samplesReceived(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Commands::rotorPosReceived(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Commands::experimentSamplesReceived(QVector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Commands::bldcDetectReceived(bldc_detect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Commands::decodedPpmReceived(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Commands::decodedAdcReceived(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Commands::decodedChukReceived(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Commands::motorRLReceived(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Commands::motorLinkageReceived(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Commands::encoderParamReceived(double _t1, double _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Commands::customAppDataReceived(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Commands::focHallTableReceived(QVector<int> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Commands::nrfPairingRes(NRF_PAIR_RES _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Commands::mcConfigCheckResult(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
