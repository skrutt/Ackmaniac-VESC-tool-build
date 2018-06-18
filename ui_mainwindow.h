/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaybar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReadMcconf;
    QAction *actionReadMcconfDefault;
    QAction *actionWriteMcconf;
    QAction *actionSaveMotorConfXml;
    QAction *actionLoadMotorConfXml;
    QAction *actionDisconnect;
    QAction *actionReboot;
    QAction *actionCanFwd;
    QAction *actionReconnect;
    QAction *actionRtData;
    QAction *actionReadAppconf;
    QAction *actionReadAppconfDefault;
    QAction *actionWriteAppconf;
    QAction *actionSaveAppconfXml;
    QAction *actionLoadAppconfXml;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionKeyboardControl;
    QAction *actionParameterEditorMcconf;
    QAction *actionParameterEditorAppconf;
    QAction *actionSaveAppConfigurationHeader;
    QAction *actionSaveMotorConfigurationHeader;
    QAction *actionSaveAppConfigurationHeaderWrap;
    QAction *actionSaveMotorConfigurationHeaderWrap;
    QAction *actionRtDataApp;
    QAction *actionTerminalPrintFaults;
    QAction *actionTerminalShowHelp;
    QAction *actionTerminalClear;
    QAction *actionTerminalPrintThreads;
    QAction *actionSendAlive;
    QAction *actionLibrariesUsed;
    QAction *actionMotorSetupWizard;
    QAction *actionAppSetupWizard;
    QAction *actionAboutQt;
    QAction *actionParameterEditorInfo;
    QAction *actionSafetyInformation;
    QAction *actionWarrantyStatement;
    QAction *actionVESCToolChangelog;
    QAction *actionTerminalDRV8301ResetLatchedFaults;
    QAction *actionFirmwareChangelog;
    QAction *actionLicense;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *pageList;
    QStackedWidget *pageWidget;
    QGridLayout *gridLayout_3;
    DisplayBar *dispCurrent;
    DisplayBar *dispDuty;
    QPushButton *fullBrakeButton;
    QDoubleSpinBox *handbrakeBox;
    QPushButton *handbrakeButton;
    QDoubleSpinBox *currentBox;
    QDoubleSpinBox *speedBox;
    QPushButton *dutyButton;
    QDoubleSpinBox *posBox;
    QPushButton *posButton;
    QPushButton *stopButton;
    QPushButton *speedButton;
    QPushButton *currentButton;
    QDoubleSpinBox *brakeCurrentBox;
    QPushButton *brakeCurrentButton;
    QDoubleSpinBox *dutyBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuTerminal;
    QMenu *menuCommands;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1054, 642);
        actionReadMcconf = new QAction(MainWindow);
        actionReadMcconf->setObjectName(QStringLiteral("actionReadMcconf"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/motor_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadMcconf->setIcon(icon);
        actionReadMcconfDefault = new QAction(MainWindow);
        actionReadMcconfDefault->setObjectName(QStringLiteral("actionReadMcconfDefault"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/motor_default.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadMcconfDefault->setIcon(icon1);
        actionWriteMcconf = new QAction(MainWindow);
        actionWriteMcconf->setObjectName(QStringLiteral("actionWriteMcconf"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/motor_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteMcconf->setIcon(icon2);
        actionSaveMotorConfXml = new QAction(MainWindow);
        actionSaveMotorConfXml->setObjectName(QStringLiteral("actionSaveMotorConfXml"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/Save as-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveMotorConfXml->setIcon(icon3);
        actionLoadMotorConfXml = new QAction(MainWindow);
        actionLoadMotorConfXml->setObjectName(QStringLiteral("actionLoadMotorConfXml"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadMotorConfXml->setIcon(icon4);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/Disconnected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon5);
        actionReboot = new QAction(MainWindow);
        actionReboot->setObjectName(QStringLiteral("actionReboot"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/Restart-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReboot->setIcon(icon6);
        actionCanFwd = new QAction(MainWindow);
        actionCanFwd->setObjectName(QStringLiteral("actionCanFwd"));
        actionCanFwd->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/can_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/res/icons/can_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCanFwd->setIcon(icon7);
        actionReconnect = new QAction(MainWindow);
        actionReconnect->setObjectName(QStringLiteral("actionReconnect"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReconnect->setIcon(icon8);
        actionRtData = new QAction(MainWindow);
        actionRtData->setObjectName(QStringLiteral("actionRtData"));
        actionRtData->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/icons/rt_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral(":/res/icons/rt_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtData->setIcon(icon9);
        actionReadAppconf = new QAction(MainWindow);
        actionReadAppconf->setObjectName(QStringLiteral("actionReadAppconf"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/icons/app_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadAppconf->setIcon(icon10);
        actionReadAppconfDefault = new QAction(MainWindow);
        actionReadAppconfDefault->setObjectName(QStringLiteral("actionReadAppconfDefault"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/res/icons/app_default.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadAppconfDefault->setIcon(icon11);
        actionWriteAppconf = new QAction(MainWindow);
        actionWriteAppconf->setObjectName(QStringLiteral("actionWriteAppconf"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/res/icons/app_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteAppconf->setIcon(icon12);
        actionSaveAppconfXml = new QAction(MainWindow);
        actionSaveAppconfXml->setObjectName(QStringLiteral("actionSaveAppconfXml"));
        actionSaveAppconfXml->setIcon(icon3);
        actionLoadAppconfXml = new QAction(MainWindow);
        actionLoadAppconfXml->setObjectName(QStringLiteral("actionLoadAppconfXml"));
        actionLoadAppconfXml->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/res/icons/Shutdown-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon13);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/res/icons/About-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon14);
        actionKeyboardControl = new QAction(MainWindow);
        actionKeyboardControl->setObjectName(QStringLiteral("actionKeyboardControl"));
        actionKeyboardControl->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/res/icons/keys_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QStringLiteral(":/res/icons/keys_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionKeyboardControl->setIcon(icon15);
        actionParameterEditorMcconf = new QAction(MainWindow);
        actionParameterEditorMcconf->setObjectName(QStringLiteral("actionParameterEditorMcconf"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/res/icons/Horizontal Settings Mixer-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionParameterEditorMcconf->setIcon(icon16);
        actionParameterEditorAppconf = new QAction(MainWindow);
        actionParameterEditorAppconf->setObjectName(QStringLiteral("actionParameterEditorAppconf"));
        actionParameterEditorAppconf->setIcon(icon16);
        actionSaveAppConfigurationHeader = new QAction(MainWindow);
        actionSaveAppConfigurationHeader->setObjectName(QStringLiteral("actionSaveAppConfigurationHeader"));
        actionSaveAppConfigurationHeader->setIcon(icon3);
        actionSaveMotorConfigurationHeader = new QAction(MainWindow);
        actionSaveMotorConfigurationHeader->setObjectName(QStringLiteral("actionSaveMotorConfigurationHeader"));
        actionSaveMotorConfigurationHeader->setIcon(icon3);
        actionSaveAppConfigurationHeaderWrap = new QAction(MainWindow);
        actionSaveAppConfigurationHeaderWrap->setObjectName(QStringLiteral("actionSaveAppConfigurationHeaderWrap"));
        actionSaveAppConfigurationHeaderWrap->setIcon(icon3);
        actionSaveMotorConfigurationHeaderWrap = new QAction(MainWindow);
        actionSaveMotorConfigurationHeaderWrap->setObjectName(QStringLiteral("actionSaveMotorConfigurationHeaderWrap"));
        actionSaveMotorConfigurationHeaderWrap->setIcon(icon3);
        actionRtDataApp = new QAction(MainWindow);
        actionRtDataApp->setObjectName(QStringLiteral("actionRtDataApp"));
        actionRtDataApp->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/res/icons/rt_app_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon17.addFile(QStringLiteral(":/res/icons/rt_app_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtDataApp->setIcon(icon17);
        actionTerminalPrintFaults = new QAction(MainWindow);
        actionTerminalPrintFaults->setObjectName(QStringLiteral("actionTerminalPrintFaults"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/res/icons/Console-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintFaults->setIcon(icon18);
        actionTerminalShowHelp = new QAction(MainWindow);
        actionTerminalShowHelp->setObjectName(QStringLiteral("actionTerminalShowHelp"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalShowHelp->setIcon(icon19);
        actionTerminalClear = new QAction(MainWindow);
        actionTerminalClear->setObjectName(QStringLiteral("actionTerminalClear"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalClear->setIcon(icon20);
        actionTerminalPrintThreads = new QAction(MainWindow);
        actionTerminalPrintThreads->setObjectName(QStringLiteral("actionTerminalPrintThreads"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/res/icons/Electronics-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintThreads->setIcon(icon21);
        actionSendAlive = new QAction(MainWindow);
        actionSendAlive->setObjectName(QStringLiteral("actionSendAlive"));
        actionSendAlive->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/res/icons/alive_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon22.addFile(QStringLiteral(":/res/icons/alive_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSendAlive->setIcon(icon22);
        actionLibrariesUsed = new QAction(MainWindow);
        actionLibrariesUsed->setObjectName(QStringLiteral("actionLibrariesUsed"));
        actionLibrariesUsed->setIcon(icon14);
        actionMotorSetupWizard = new QAction(MainWindow);
        actionMotorSetupWizard->setObjectName(QStringLiteral("actionMotorSetupWizard"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMotorSetupWizard->setIcon(icon23);
        actionAppSetupWizard = new QAction(MainWindow);
        actionAppSetupWizard->setObjectName(QStringLiteral("actionAppSetupWizard"));
        actionAppSetupWizard->setIcon(icon23);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionAboutQt->setIcon(icon14);
        actionParameterEditorInfo = new QAction(MainWindow);
        actionParameterEditorInfo->setObjectName(QStringLiteral("actionParameterEditorInfo"));
        actionParameterEditorInfo->setIcon(icon16);
        actionSafetyInformation = new QAction(MainWindow);
        actionSafetyInformation->setObjectName(QStringLiteral("actionSafetyInformation"));
        actionSafetyInformation->setIcon(icon14);
        actionWarrantyStatement = new QAction(MainWindow);
        actionWarrantyStatement->setObjectName(QStringLiteral("actionWarrantyStatement"));
        actionWarrantyStatement->setIcon(icon14);
        actionVESCToolChangelog = new QAction(MainWindow);
        actionVESCToolChangelog->setObjectName(QStringLiteral("actionVESCToolChangelog"));
        actionVESCToolChangelog->setIcon(icon14);
        actionTerminalDRV8301ResetLatchedFaults = new QAction(MainWindow);
        actionTerminalDRV8301ResetLatchedFaults->setObjectName(QStringLiteral("actionTerminalDRV8301ResetLatchedFaults"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/res/icons/Bug-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalDRV8301ResetLatchedFaults->setIcon(icon24);
        actionFirmwareChangelog = new QAction(MainWindow);
        actionFirmwareChangelog->setObjectName(QStringLiteral("actionFirmwareChangelog"));
        actionFirmwareChangelog->setIcon(icon14);
        actionLicense = new QAction(MainWindow);
        actionLicense->setObjectName(QStringLiteral("actionLicense"));
        actionLicense->setIcon(icon14);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pageList = new QListWidget(centralWidget);
        pageList->setObjectName(QStringLiteral("pageList"));
        pageList->setMinimumSize(QSize(220, 0));
        pageList->setMaximumSize(QSize(220, 16777215));
        pageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pageList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(pageList);


        horizontalLayout->addLayout(verticalLayout_2);

        pageWidget = new QStackedWidget(centralWidget);
        pageWidget->setObjectName(QStringLiteral("pageWidget"));

        horizontalLayout->addWidget(pageWidget);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dispCurrent = new DisplayBar(centralWidget);
        dispCurrent->setObjectName(QStringLiteral("dispCurrent"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dispCurrent->sizePolicy().hasHeightForWidth());
        dispCurrent->setSizePolicy(sizePolicy);
        dispCurrent->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(dispCurrent, 1, 8, 1, 1);

        dispDuty = new DisplayBar(centralWidget);
        dispDuty->setObjectName(QStringLiteral("dispDuty"));
        sizePolicy.setHeightForWidth(dispDuty->sizePolicy().hasHeightForWidth());
        dispDuty->setSizePolicy(sizePolicy);
        dispDuty->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(dispDuty, 0, 8, 1, 1);

        fullBrakeButton = new QPushButton(centralWidget);
        fullBrakeButton->setObjectName(QStringLiteral("fullBrakeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fullBrakeButton->sizePolicy().hasHeightForWidth());
        fullBrakeButton->setSizePolicy(sizePolicy1);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/res/icons/Anchor-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullBrakeButton->setIcon(icon25);
        fullBrakeButton->setIconSize(QSize(40, 40));
        fullBrakeButton->setAutoDefault(false);
        fullBrakeButton->setFlat(false);

        gridLayout_3->addWidget(fullBrakeButton, 0, 6, 2, 1);

        handbrakeBox = new QDoubleSpinBox(centralWidget);
        handbrakeBox->setObjectName(QStringLiteral("handbrakeBox"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        handbrakeBox->setFont(font);
        handbrakeBox->setMinimum(-500);
        handbrakeBox->setMaximum(500);
        handbrakeBox->setSingleStep(0.5);
        handbrakeBox->setValue(3);

        gridLayout_3->addWidget(handbrakeBox, 1, 4, 1, 1);

        handbrakeButton = new QPushButton(centralWidget);
        handbrakeButton->setObjectName(QStringLiteral("handbrakeButton"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/res/icons/Brake Warning-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        handbrakeButton->setIcon(icon26);

        gridLayout_3->addWidget(handbrakeButton, 1, 5, 1, 1);

        currentBox = new QDoubleSpinBox(centralWidget);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setFont(font);
        currentBox->setFrame(true);
        currentBox->setMinimum(-500);
        currentBox->setMaximum(500);
        currentBox->setSingleStep(0.5);
        currentBox->setValue(3);

        gridLayout_3->addWidget(currentBox, 1, 0, 1, 1);

        speedBox = new QDoubleSpinBox(centralWidget);
        speedBox->setObjectName(QStringLiteral("speedBox"));
        speedBox->setFont(font);
        speedBox->setDecimals(0);
        speedBox->setMinimum(-400000);
        speedBox->setMaximum(400000);
        speedBox->setSingleStep(100);
        speedBox->setValue(5000);

        gridLayout_3->addWidget(speedBox, 0, 2, 1, 1);

        dutyButton = new QPushButton(centralWidget);
        dutyButton->setObjectName(QStringLiteral("dutyButton"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        dutyButton->setIcon(icon27);
        dutyButton->setFlat(false);

        gridLayout_3->addWidget(dutyButton, 0, 1, 1, 1);

        posBox = new QDoubleSpinBox(centralWidget);
        posBox->setObjectName(QStringLiteral("posBox"));
        posBox->setFont(font);
        posBox->setMaximum(360);
        posBox->setSingleStep(10);
        posBox->setValue(0);

        gridLayout_3->addWidget(posBox, 1, 2, 1, 1);

        posButton = new QPushButton(centralWidget);
        posButton->setObjectName(QStringLiteral("posButton"));
        posButton->setIcon(icon27);

        gridLayout_3->addWidget(posButton, 1, 3, 1, 1);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/res/icons/Stop Sign-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon28);
        stopButton->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(stopButton, 0, 7, 2, 1);

        speedButton = new QPushButton(centralWidget);
        speedButton->setObjectName(QStringLiteral("speedButton"));
        speedButton->setIcon(icon27);

        gridLayout_3->addWidget(speedButton, 0, 3, 1, 1);

        currentButton = new QPushButton(centralWidget);
        currentButton->setObjectName(QStringLiteral("currentButton"));
        currentButton->setIcon(icon27);

        gridLayout_3->addWidget(currentButton, 1, 1, 1, 1);

        brakeCurrentBox = new QDoubleSpinBox(centralWidget);
        brakeCurrentBox->setObjectName(QStringLiteral("brakeCurrentBox"));
        brakeCurrentBox->setFont(font);
        brakeCurrentBox->setMinimum(-500);
        brakeCurrentBox->setMaximum(500);
        brakeCurrentBox->setSingleStep(0.5);
        brakeCurrentBox->setValue(3);

        gridLayout_3->addWidget(brakeCurrentBox, 0, 4, 1, 1);

        brakeCurrentButton = new QPushButton(centralWidget);
        brakeCurrentButton->setObjectName(QStringLiteral("brakeCurrentButton"));
        brakeCurrentButton->setIcon(icon26);

        gridLayout_3->addWidget(brakeCurrentButton, 0, 5, 1, 1);

        dutyBox = new QDoubleSpinBox(centralWidget);
        dutyBox->setObjectName(QStringLiteral("dutyBox"));
        dutyBox->setFont(font);
        dutyBox->setWrapping(false);
        dutyBox->setFrame(true);
        dutyBox->setMinimum(-1);
        dutyBox->setMaximum(1);
        dutyBox->setSingleStep(0.01);
        dutyBox->setValue(0.2);

        gridLayout_3->addWidget(dutyBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1054, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuTerminal = new QMenu(menuBar);
        menuTerminal->setObjectName(QStringLiteral("menuTerminal"));
        menuCommands = new QMenu(menuBar);
        menuCommands->setObjectName(QStringLiteral("menuCommands"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::RightToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCommands->menuAction());
        menuBar->addAction(menuTerminal->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSaveMotorConfXml);
        menuFile->addAction(actionLoadMotorConfXml);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveAppconfXml);
        menuFile->addAction(actionLoadAppconfXml);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveMotorConfigurationHeader);
        menuFile->addAction(actionSaveMotorConfigurationHeaderWrap);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveAppConfigurationHeader);
        menuFile->addAction(actionSaveAppConfigurationHeaderWrap);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionMotorSetupWizard);
        menuHelp->addAction(actionAppSetupWizard);
        menuHelp->addSeparator();
        menuHelp->addAction(actionFirmwareChangelog);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionLibrariesUsed);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSafetyInformation);
        menuHelp->addAction(actionWarrantyStatement);
        menuHelp->addAction(actionLicense);
        menuTools->addAction(actionParameterEditorMcconf);
        menuTools->addAction(actionParameterEditorAppconf);
        menuTools->addAction(actionParameterEditorInfo);
        menuTerminal->addAction(actionTerminalShowHelp);
        menuTerminal->addAction(actionTerminalPrintFaults);
        menuTerminal->addAction(actionTerminalPrintThreads);
        menuTerminal->addSeparator();
        menuTerminal->addAction(actionTerminalDRV8301ResetLatchedFaults);
        menuTerminal->addSeparator();
        menuTerminal->addAction(actionTerminalClear);
        menuCommands->addAction(actionReboot);
        mainToolBar->addAction(actionReconnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReadMcconf);
        mainToolBar->addAction(actionReadMcconfDefault);
        mainToolBar->addAction(actionWriteMcconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReadAppconf);
        mainToolBar->addAction(actionReadAppconfDefault);
        mainToolBar->addAction(actionWriteAppconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionKeyboardControl);
        mainToolBar->addAction(actionRtData);
        mainToolBar->addAction(actionRtDataApp);
        mainToolBar->addAction(actionSendAlive);
        mainToolBar->addAction(actionCanFwd);

        retranslateUi(MainWindow);

        pageWidget->setCurrentIndex(-1);
        fullBrakeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ESC Tool", nullptr));
        actionReadMcconf->setText(QApplication::translate("MainWindow", "readMcconf", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReadMcconf->setToolTip(QApplication::translate("MainWindow", "Read motor Configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionReadMcconfDefault->setText(QApplication::translate("MainWindow", "readMcconfDefault", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReadMcconfDefault->setToolTip(QApplication::translate("MainWindow", "Read default motor configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionWriteMcconf->setText(QApplication::translate("MainWindow", "writeMcconf", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWriteMcconf->setToolTip(QApplication::translate("MainWindow", "Write motor configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveMotorConfXml->setText(QApplication::translate("MainWindow", "Save Motor Configuration XML as...", nullptr));
        actionLoadMotorConfXml->setText(QApplication::translate("MainWindow", "Load Motor Configuration XML", nullptr));
        actionDisconnect->setText(QApplication::translate("MainWindow", "disconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect", nullptr));
#endif // QT_NO_TOOLTIP
        actionReboot->setText(QApplication::translate("MainWindow", "Reboot", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReboot->setToolTip(QApplication::translate("MainWindow", "Reboot", nullptr));
#endif // QT_NO_TOOLTIP
        actionCanFwd->setText(QApplication::translate("MainWindow", "canFwd", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCanFwd->setToolTip(QApplication::translate("MainWindow", "Forward communication over CAN-bus", nullptr));
#endif // QT_NO_TOOLTIP
        actionReconnect->setText(QApplication::translate("MainWindow", "reconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReconnect->setToolTip(QApplication::translate("MainWindow", "Reconnect last connection", nullptr));
#endif // QT_NO_TOOLTIP
        actionRtData->setText(QApplication::translate("MainWindow", "rtData", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRtData->setToolTip(QApplication::translate("MainWindow", "Stream realtime data", nullptr));
#endif // QT_NO_TOOLTIP
        actionReadAppconf->setText(QApplication::translate("MainWindow", "readAppconf", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReadAppconf->setToolTip(QApplication::translate("MainWindow", "Read app configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionReadAppconfDefault->setText(QApplication::translate("MainWindow", "readAppconfDefault", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReadAppconfDefault->setToolTip(QApplication::translate("MainWindow", "Read default app configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionWriteAppconf->setText(QApplication::translate("MainWindow", "writeAppconf", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWriteAppconf->setToolTip(QApplication::translate("MainWindow", "Write app configuration", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveAppconfXml->setText(QApplication::translate("MainWindow", "Save App Configuration XML as...", nullptr));
        actionLoadAppconfXml->setText(QApplication::translate("MainWindow", "Load App Configuration XML", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About ESC Tool", nullptr));
        actionKeyboardControl->setText(QApplication::translate("MainWindow", "keyboardControl", nullptr));
#ifndef QT_NO_TOOLTIP
        actionKeyboardControl->setToolTip(QApplication::translate("MainWindow", "Use arrow keys to control motor", nullptr));
#endif // QT_NO_TOOLTIP
        actionParameterEditorMcconf->setText(QApplication::translate("MainWindow", "Parameter Editor Mcconf", nullptr));
        actionParameterEditorAppconf->setText(QApplication::translate("MainWindow", "Parameter Editor Appconf", nullptr));
        actionSaveAppConfigurationHeader->setText(QApplication::translate("MainWindow", "Save App Configuration C Header as...", nullptr));
        actionSaveMotorConfigurationHeader->setText(QApplication::translate("MainWindow", "Save Motor Configuration C Header as...", nullptr));
        actionSaveAppConfigurationHeaderWrap->setText(QApplication::translate("MainWindow", "Save App Configuration C Header (ifdef wrapped) as...", nullptr));
        actionSaveMotorConfigurationHeaderWrap->setText(QApplication::translate("MainWindow", "Save Motor Configuration C Header (ifdef wrapped) as...", nullptr));
        actionRtDataApp->setText(QApplication::translate("MainWindow", "rtDataApp", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRtDataApp->setToolTip(QApplication::translate("MainWindow", "Stream realtime app data", nullptr));
#endif // QT_NO_TOOLTIP
        actionTerminalPrintFaults->setText(QApplication::translate("MainWindow", "Print Faults", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTerminalPrintFaults->setToolTip(QApplication::translate("MainWindow", "Print Faults", nullptr));
#endif // QT_NO_TOOLTIP
        actionTerminalShowHelp->setText(QApplication::translate("MainWindow", "Show Help", nullptr));
        actionTerminalClear->setText(QApplication::translate("MainWindow", "Clear Terminal", nullptr));
        actionTerminalPrintThreads->setText(QApplication::translate("MainWindow", "Print Threads", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTerminalPrintThreads->setToolTip(QApplication::translate("MainWindow", "Print Threads", nullptr));
#endif // QT_NO_TOOLTIP
        actionSendAlive->setText(QApplication::translate("MainWindow", "Send Alive Commands", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSendAlive->setToolTip(QApplication::translate("MainWindow", "Send alive packets periodically to prevent timeout", nullptr));
#endif // QT_NO_TOOLTIP
        actionLibrariesUsed->setText(QApplication::translate("MainWindow", "About Libraries Used", nullptr));
        actionMotorSetupWizard->setText(QApplication::translate("MainWindow", "Motor Setup Wizard [MOTOR]", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMotorSetupWizard->setToolTip(QApplication::translate("MainWindow", "Start the Motor Setup Wizard", nullptr));
#endif // QT_NO_TOOLTIP
        actionAppSetupWizard->setText(QApplication::translate("MainWindow", "Input Setup Wizard [APP]", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAppSetupWizard->setToolTip(QApplication::translate("MainWindow", "Start the App Setup Wizard", nullptr));
#endif // QT_NO_TOOLTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "Show the Qt library's About box", nullptr));
#endif // QT_NO_TOOLTIP
        actionParameterEditorInfo->setText(QApplication::translate("MainWindow", "Parameter Editor Info", nullptr));
        actionSafetyInformation->setText(QApplication::translate("MainWindow", "Safety Information", nullptr));
        actionWarrantyStatement->setText(QApplication::translate("MainWindow", "Limited Warranty Statement", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWarrantyStatement->setToolTip(QApplication::translate("MainWindow", "Limited Warranty Statement", nullptr));
#endif // QT_NO_TOOLTIP
        actionVESCToolChangelog->setText(QApplication::translate("MainWindow", "ESC Tool Changelog", nullptr));
        actionTerminalDRV8301ResetLatchedFaults->setText(QApplication::translate("MainWindow", "DRV8301 Reset Latched Faults", nullptr));
        actionFirmwareChangelog->setText(QApplication::translate("MainWindow", "Firmware Changelog", nullptr));
        actionLicense->setText(QApplication::translate("MainWindow", "License", nullptr));
#ifndef QT_NO_TOOLTIP
        fullBrakeButton->setToolTip(QApplication::translate("MainWindow", "Full brake", nullptr));
#endif // QT_NO_TOOLTIP
        fullBrakeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        handbrakeBox->setToolTip(QApplication::translate("MainWindow", "Handbrake current", nullptr));
#endif // QT_NO_TOOLTIP
        handbrakeBox->setPrefix(QApplication::translate("MainWindow", "HB ", nullptr));
        handbrakeBox->setSuffix(QApplication::translate("MainWindow", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        handbrakeButton->setToolTip(QApplication::translate("MainWindow", "Handbrake current", nullptr));
#endif // QT_NO_TOOLTIP
        handbrakeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("MainWindow", "Current", nullptr));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("MainWindow", "I ", nullptr));
        currentBox->setSuffix(QApplication::translate("MainWindow", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        speedBox->setToolTip(QApplication::translate("MainWindow", "Speed", nullptr));
#endif // QT_NO_TOOLTIP
        speedBox->setPrefix(QApplication::translate("MainWindow", "\317\211 ", nullptr));
        speedBox->setSuffix(QApplication::translate("MainWindow", " RPM", nullptr));
#ifndef QT_NO_TOOLTIP
        dutyButton->setToolTip(QApplication::translate("MainWindow", "Duty cycle", nullptr));
#endif // QT_NO_TOOLTIP
        dutyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        posBox->setToolTip(QApplication::translate("MainWindow", "Position", nullptr));
#endif // QT_NO_TOOLTIP
        posBox->setPrefix(QApplication::translate("MainWindow", "P ", nullptr));
        posBox->setSuffix(QApplication::translate("MainWindow", " \302\260", nullptr));
#ifndef QT_NO_TOOLTIP
        posButton->setToolTip(QApplication::translate("MainWindow", "Position", nullptr));
#endif // QT_NO_TOOLTIP
        posButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("MainWindow", "Switch off", nullptr));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        stopButton->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        speedButton->setToolTip(QApplication::translate("MainWindow", "Speed", nullptr));
#endif // QT_NO_TOOLTIP
        speedButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentButton->setToolTip(QApplication::translate("MainWindow", "Current", nullptr));
#endif // QT_NO_TOOLTIP
        currentButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        brakeCurrentBox->setToolTip(QApplication::translate("MainWindow", "Brake current", nullptr));
#endif // QT_NO_TOOLTIP
        brakeCurrentBox->setPrefix(QApplication::translate("MainWindow", "IB ", nullptr));
        brakeCurrentBox->setSuffix(QApplication::translate("MainWindow", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        brakeCurrentButton->setToolTip(QApplication::translate("MainWindow", "Brake current", nullptr));
#endif // QT_NO_TOOLTIP
        brakeCurrentButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        dutyBox->setToolTip(QApplication::translate("MainWindow", "Duty cycle", nullptr));
#endif // QT_NO_TOOLTIP
        dutyBox->setPrefix(QApplication::translate("MainWindow", "D ", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Developer", nullptr));
        menuTerminal->setTitle(QApplication::translate("MainWindow", "Terminal", nullptr));
        menuCommands->setTitle(QApplication::translate("MainWindow", "Commands", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
