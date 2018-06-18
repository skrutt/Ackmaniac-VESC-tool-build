/********************************************************************************
** Form generated from reading UI file 'pagesampleddata.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESAMPLEDDATA_H
#define UI_PAGESAMPLEDDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PageSampledData
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *currentStack;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *currentPlot;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *showCurrent1Box;
    QCheckBox *showCurrent2Box;
    QCheckBox *showCurrent3Box;
    QCheckBox *showMcTotalCurrentBox;
    QCheckBox *showPosCurrentBox;
    QCheckBox *showPhaseBox;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_6;
    QSplitter *splitter;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QCustomPlot *filterResponsePlot;
    QCheckBox *filterLogScaleBox;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_10;
    QCustomPlot *filterPlot;
    QCheckBox *filterScatterBox;
    QVBoxLayout *verticalLayout_4;
    QComboBox *plotModeBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *filterBox;
    QDoubleSpinBox *currentFilterFreqBox;
    QSpinBox *currentFilterTapBox;
    QCheckBox *compDelayBox;
    QCheckBox *hammingBox;
    QSpinBox *fftFreqBox;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *voltagePlot;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *showPh1Box;
    QCheckBox *showPh2Box;
    QCheckBox *showPh3Box;
    QCheckBox *showVirtualGndBox;
    QCheckBox *showPosVoltageBox;
    QCheckBox *showPhaseVoltageBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *truncateBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sampleNowButton;
    QPushButton *sampleStartButton;
    QPushButton *sampleTriggerStartButton;
    QPushButton *sampleTriggerFaultButton;
    QPushButton *sampleTriggerStartNosendButton;
    QPushButton *sampleTriggerFaultNosendButton;
    QPushButton *sampleLastButton;
    QPushButton *sampleStopButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpinBox *samplesBox;
    QSpinBox *decimationBox;
    QProgressBar *sampProgBar;
    QToolButton *zoomHButton;
    QToolButton *zoomVButton;
    QToolButton *rescaleButton;

    void setupUi(QWidget *PageSampledData)
    {
        if (PageSampledData->objectName().isEmpty())
            PageSampledData->setObjectName(QStringLiteral("PageSampledData"));
        PageSampledData->resize(591, 472);
        verticalLayout = new QVBoxLayout(PageSampledData);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageSampledData);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        currentStack = new QStackedWidget(tab_2);
        currentStack->setObjectName(QStringLiteral("currentStack"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        currentPlot = new QCustomPlot(page);
        currentPlot->setObjectName(QStringLiteral("currentPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentPlot->sizePolicy().hasHeightForWidth());
        currentPlot->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(currentPlot);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        showCurrent1Box = new QCheckBox(page);
        showCurrent1Box->setObjectName(QStringLiteral("showCurrent1Box"));
        showCurrent1Box->setChecked(true);

        horizontalLayout_14->addWidget(showCurrent1Box);

        showCurrent2Box = new QCheckBox(page);
        showCurrent2Box->setObjectName(QStringLiteral("showCurrent2Box"));
        showCurrent2Box->setChecked(true);

        horizontalLayout_14->addWidget(showCurrent2Box);

        showCurrent3Box = new QCheckBox(page);
        showCurrent3Box->setObjectName(QStringLiteral("showCurrent3Box"));
        showCurrent3Box->setChecked(true);

        horizontalLayout_14->addWidget(showCurrent3Box);

        showMcTotalCurrentBox = new QCheckBox(page);
        showMcTotalCurrentBox->setObjectName(QStringLiteral("showMcTotalCurrentBox"));
        showMcTotalCurrentBox->setChecked(true);

        horizontalLayout_14->addWidget(showMcTotalCurrentBox);

        showPosCurrentBox = new QCheckBox(page);
        showPosCurrentBox->setObjectName(QStringLiteral("showPosCurrentBox"));
        showPosCurrentBox->setChecked(true);

        horizontalLayout_14->addWidget(showPosCurrentBox);

        showPhaseBox = new QCheckBox(page);
        showPhaseBox->setObjectName(QStringLiteral("showPhaseBox"));
        showPhaseBox->setChecked(true);

        horizontalLayout_14->addWidget(showPhaseBox);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_14);


        verticalLayout_6->addLayout(verticalLayout_5);

        currentStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_6 = new QHBoxLayout(page_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(page_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        filterResponsePlot = new QCustomPlot(layoutWidget_3);
        filterResponsePlot->setObjectName(QStringLiteral("filterResponsePlot"));

        verticalLayout_8->addWidget(filterResponsePlot);

        filterLogScaleBox = new QCheckBox(layoutWidget_3);
        filterLogScaleBox->setObjectName(QStringLiteral("filterLogScaleBox"));

        verticalLayout_8->addWidget(filterLogScaleBox);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        filterPlot = new QCustomPlot(layoutWidget_4);
        filterPlot->setObjectName(QStringLiteral("filterPlot"));

        verticalLayout_10->addWidget(filterPlot);

        filterScatterBox = new QCheckBox(layoutWidget_4);
        filterScatterBox->setObjectName(QStringLiteral("filterScatterBox"));

        verticalLayout_10->addWidget(filterScatterBox);

        splitter->addWidget(layoutWidget_4);

        horizontalLayout_6->addWidget(splitter);

        currentStack->addWidget(page_2);

        horizontalLayout_3->addWidget(currentStack);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        plotModeBox = new QComboBox(tab_2);
        plotModeBox->addItem(QString());
        plotModeBox->addItem(QString());
        plotModeBox->addItem(QString());
        plotModeBox->setObjectName(QStringLiteral("plotModeBox"));

        verticalLayout_4->addWidget(plotModeBox);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 6, 1, 6);
        filterBox = new QComboBox(groupBox);
        filterBox->addItem(QString());
        filterBox->addItem(QString());
        filterBox->addItem(QString());
        filterBox->setObjectName(QStringLiteral("filterBox"));

        verticalLayout_3->addWidget(filterBox);

        currentFilterFreqBox = new QDoubleSpinBox(groupBox);
        currentFilterFreqBox->setObjectName(QStringLiteral("currentFilterFreqBox"));
        currentFilterFreqBox->setDecimals(3);
        currentFilterFreqBox->setMaximum(0.5);
        currentFilterFreqBox->setSingleStep(0.005);
        currentFilterFreqBox->setValue(0.05);

        verticalLayout_3->addWidget(currentFilterFreqBox);

        currentFilterTapBox = new QSpinBox(groupBox);
        currentFilterTapBox->setObjectName(QStringLiteral("currentFilterTapBox"));
        currentFilterTapBox->setMinimum(1);
        currentFilterTapBox->setMaximum(10);
        currentFilterTapBox->setValue(6);

        verticalLayout_3->addWidget(currentFilterTapBox);

        compDelayBox = new QCheckBox(groupBox);
        compDelayBox->setObjectName(QStringLiteral("compDelayBox"));
        compDelayBox->setChecked(true);

        verticalLayout_3->addWidget(compDelayBox);

        hammingBox = new QCheckBox(groupBox);
        hammingBox->setObjectName(QStringLiteral("hammingBox"));
        hammingBox->setChecked(true);

        verticalLayout_3->addWidget(hammingBox);


        verticalLayout_4->addWidget(groupBox);

        fftFreqBox = new QSpinBox(tab_2);
        fftFreqBox->setObjectName(QStringLiteral("fftFreqBox"));
        fftFreqBox->setMinimum(1);
        fftFreqBox->setMaximum(200000);
        fftFreqBox->setSingleStep(1000);
        fftFreqBox->setValue(40000);

        verticalLayout_4->addWidget(fftFreqBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        voltagePlot = new QCustomPlot(tab);
        voltagePlot->setObjectName(QStringLiteral("voltagePlot"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(voltagePlot->sizePolicy().hasHeightForWidth());
        voltagePlot->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(voltagePlot);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        showPh1Box = new QCheckBox(tab);
        showPh1Box->setObjectName(QStringLiteral("showPh1Box"));
        showPh1Box->setChecked(true);

        horizontalLayout_4->addWidget(showPh1Box);

        showPh2Box = new QCheckBox(tab);
        showPh2Box->setObjectName(QStringLiteral("showPh2Box"));
        showPh2Box->setChecked(true);

        horizontalLayout_4->addWidget(showPh2Box);

        showPh3Box = new QCheckBox(tab);
        showPh3Box->setObjectName(QStringLiteral("showPh3Box"));
        showPh3Box->setChecked(true);

        horizontalLayout_4->addWidget(showPh3Box);

        showVirtualGndBox = new QCheckBox(tab);
        showVirtualGndBox->setObjectName(QStringLiteral("showVirtualGndBox"));
        showVirtualGndBox->setChecked(true);

        horizontalLayout_4->addWidget(showVirtualGndBox);

        showPosVoltageBox = new QCheckBox(tab);
        showPosVoltageBox->setObjectName(QStringLiteral("showPosVoltageBox"));
        showPosVoltageBox->setChecked(true);

        horizontalLayout_4->addWidget(showPosVoltageBox);

        showPhaseVoltageBox = new QCheckBox(tab);
        showPhaseVoltageBox->setObjectName(QStringLiteral("showPhaseVoltageBox"));
        showPhaseVoltageBox->setChecked(true);

        horizontalLayout_4->addWidget(showPhaseVoltageBox);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        truncateBox = new QCheckBox(tab);
        truncateBox->setObjectName(QStringLiteral("truncateBox"));

        horizontalLayout_4->addWidget(truncateBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sampleNowButton = new QPushButton(PageSampledData);
        sampleNowButton->setObjectName(QStringLiteral("sampleNowButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/3ph_sine.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleNowButton->setIcon(icon);

        horizontalLayout_2->addWidget(sampleNowButton);

        sampleStartButton = new QPushButton(PageSampledData);
        sampleStartButton->setObjectName(QStringLiteral("sampleStartButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/motor.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleStartButton->setIcon(icon1);
        sampleStartButton->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(sampleStartButton);

        sampleTriggerStartButton = new QPushButton(PageSampledData);
        sampleTriggerStartButton->setObjectName(QStringLiteral("sampleTriggerStartButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/sampl_trigger_start.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleTriggerStartButton->setIcon(icon2);
        sampleTriggerStartButton->setIconSize(QSize(30, 16));

        horizontalLayout_2->addWidget(sampleTriggerStartButton);

        sampleTriggerFaultButton = new QPushButton(PageSampledData);
        sampleTriggerFaultButton->setObjectName(QStringLiteral("sampleTriggerFaultButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/sample_trigger_fault.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleTriggerFaultButton->setIcon(icon3);
        sampleTriggerFaultButton->setIconSize(QSize(30, 16));

        horizontalLayout_2->addWidget(sampleTriggerFaultButton);

        sampleTriggerStartNosendButton = new QPushButton(PageSampledData);
        sampleTriggerStartNosendButton->setObjectName(QStringLiteral("sampleTriggerStartNosendButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/sample_trigger_start_nosend.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleTriggerStartNosendButton->setIcon(icon4);
        sampleTriggerStartNosendButton->setIconSize(QSize(40, 16));

        horizontalLayout_2->addWidget(sampleTriggerStartNosendButton);

        sampleTriggerFaultNosendButton = new QPushButton(PageSampledData);
        sampleTriggerFaultNosendButton->setObjectName(QStringLiteral("sampleTriggerFaultNosendButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/sample_trigger_fault_nosend.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleTriggerFaultNosendButton->setIcon(icon5);
        sampleTriggerFaultNosendButton->setIconSize(QSize(40, 16));

        horizontalLayout_2->addWidget(sampleTriggerFaultNosendButton);

        sampleLastButton = new QPushButton(PageSampledData);
        sampleLastButton->setObjectName(QStringLiteral("sampleLastButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleLastButton->setIcon(icon6);

        horizontalLayout_2->addWidget(sampleLastButton);

        sampleStopButton = new QPushButton(PageSampledData);
        sampleStopButton->setObjectName(QStringLiteral("sampleStopButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/Cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        sampleStopButton->setIcon(icon7);

        horizontalLayout_2->addWidget(sampleStopButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        samplesBox = new QSpinBox(PageSampledData);
        samplesBox->setObjectName(QStringLiteral("samplesBox"));
        samplesBox->setMaximum(2000);
        samplesBox->setSingleStep(100);
        samplesBox->setValue(1000);

        horizontalLayout->addWidget(samplesBox);

        decimationBox = new QSpinBox(PageSampledData);
        decimationBox->setObjectName(QStringLiteral("decimationBox"));
        decimationBox->setMinimum(1);
        decimationBox->setValue(1);

        horizontalLayout->addWidget(decimationBox);

        sampProgBar = new QProgressBar(PageSampledData);
        sampProgBar->setObjectName(QStringLiteral("sampProgBar"));
        sampProgBar->setValue(0);

        horizontalLayout->addWidget(sampProgBar);

        zoomHButton = new QToolButton(PageSampledData);
        zoomHButton->setObjectName(QStringLiteral("zoomHButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zoomHButton->sizePolicy().hasHeightForWidth());
        zoomHButton->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(3);
        zoomHButton->setFont(font);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icons/expand_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/res/icons/expand_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomHButton->setIcon(icon8);
        zoomHButton->setIconSize(QSize(20, 20));
        zoomHButton->setCheckable(true);
        zoomHButton->setChecked(true);

        horizontalLayout->addWidget(zoomHButton);

        zoomVButton = new QToolButton(PageSampledData);
        zoomVButton->setObjectName(QStringLiteral("zoomVButton"));
        sizePolicy2.setHeightForWidth(zoomVButton->sizePolicy().hasHeightForWidth());
        zoomVButton->setSizePolicy(sizePolicy2);
        zoomVButton->setFont(font);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/icons/expand_v_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral(":/res/icons/expand_v_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomVButton->setIcon(icon9);
        zoomVButton->setIconSize(QSize(20, 20));
        zoomVButton->setCheckable(true);
        zoomVButton->setChecked(true);

        horizontalLayout->addWidget(zoomVButton);

        rescaleButton = new QToolButton(PageSampledData);
        rescaleButton->setObjectName(QStringLiteral("rescaleButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/icons/size_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        rescaleButton->setIcon(icon10);
        rescaleButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(rescaleButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageSampledData);

        tabWidget->setCurrentIndex(0);
        currentStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageSampledData);
    } // setupUi

    void retranslateUi(QWidget *PageSampledData)
    {
        PageSampledData->setWindowTitle(QApplication::translate("PageSampledData", "Form", nullptr));
        showCurrent1Box->setText(QApplication::translate("PageSampledData", "PH 1", nullptr));
        showCurrent2Box->setText(QApplication::translate("PageSampledData", "PH 2", nullptr));
        showCurrent3Box->setText(QApplication::translate("PageSampledData", "PH 3", nullptr));
        showMcTotalCurrentBox->setText(QApplication::translate("PageSampledData", "MC total", nullptr));
        showPosCurrentBox->setText(QApplication::translate("PageSampledData", "Position", nullptr));
#ifndef QT_NO_TOOLTIP
        showPhaseBox->setToolTip(QApplication::translate("PageSampledData", "Show FOC motor phase", nullptr));
#endif // QT_NO_TOOLTIP
        showPhaseBox->setText(QApplication::translate("PageSampledData", "Phase", nullptr));
        filterLogScaleBox->setText(QApplication::translate("PageSampledData", "Logscale", nullptr));
        filterScatterBox->setText(QApplication::translate("PageSampledData", "Scatterplot", nullptr));
        plotModeBox->setItemText(0, QApplication::translate("PageSampledData", "Time Plot", nullptr));
        plotModeBox->setItemText(1, QApplication::translate("PageSampledData", "FFT Plot", nullptr));
        plotModeBox->setItemText(2, QApplication::translate("PageSampledData", "Filter Plot", nullptr));

#ifndef QT_NO_TOOLTIP
        plotModeBox->setToolTip(QApplication::translate("PageSampledData", "Select what to plot", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("PageSampledData", "Filter Data", nullptr));
        filterBox->setItemText(0, QApplication::translate("PageSampledData", "No Filter", nullptr));
        filterBox->setItemText(1, QApplication::translate("PageSampledData", "FIR Filter", nullptr));
        filterBox->setItemText(2, QApplication::translate("PageSampledData", "Mean Filter", nullptr));

#ifndef QT_NO_TOOLTIP
        currentFilterFreqBox->setToolTip(QApplication::translate("PageSampledData", "FIR filter stop frequency", nullptr));
#endif // QT_NO_TOOLTIP
        currentFilterFreqBox->setPrefix(QApplication::translate("PageSampledData", "F_St: ", nullptr));
#ifndef QT_NO_TOOLTIP
        currentFilterTapBox->setToolTip(QApplication::translate("PageSampledData", "FIR filter taps", nullptr));
#endif // QT_NO_TOOLTIP
        currentFilterTapBox->setPrefix(QApplication::translate("PageSampledData", "Taps: ", nullptr));
#ifndef QT_NO_TOOLTIP
        compDelayBox->setToolTip(QApplication::translate("PageSampledData", "Compensate for filter delay", nullptr));
#endif // QT_NO_TOOLTIP
        compDelayBox->setText(QApplication::translate("PageSampledData", "Delay Comp", nullptr));
#ifndef QT_NO_TOOLTIP
        hammingBox->setToolTip(QApplication::translate("PageSampledData", "Use Hamming window", nullptr));
#endif // QT_NO_TOOLTIP
        hammingBox->setText(QApplication::translate("PageSampledData", "Hammnig", nullptr));
#ifndef QT_NO_TOOLTIP
        fftFreqBox->setToolTip(QApplication::translate("PageSampledData", "Sampling frequency to calculate FFT time axis at", nullptr));
#endif // QT_NO_TOOLTIP
        fftFreqBox->setPrefix(QApplication::translate("PageSampledData", "Fs: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageSampledData", "Current", nullptr));
        showPh1Box->setText(QApplication::translate("PageSampledData", "PH 1", nullptr));
        showPh2Box->setText(QApplication::translate("PageSampledData", "PH 2", nullptr));
        showPh3Box->setText(QApplication::translate("PageSampledData", "PH 3", nullptr));
        showVirtualGndBox->setText(QApplication::translate("PageSampledData", "Virtual Ground", nullptr));
        showPosVoltageBox->setText(QApplication::translate("PageSampledData", "Position", nullptr));
#ifndef QT_NO_TOOLTIP
        showPhaseVoltageBox->setToolTip(QApplication::translate("PageSampledData", "Show FOC motor phase", nullptr));
#endif // QT_NO_TOOLTIP
        showPhaseVoltageBox->setText(QApplication::translate("PageSampledData", "Phase", nullptr));
#ifndef QT_NO_TOOLTIP
        truncateBox->setToolTip(QApplication::translate("PageSampledData", "Truncate conducting phases", nullptr));
#endif // QT_NO_TOOLTIP
        truncateBox->setText(QApplication::translate("PageSampledData", "Truncate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageSampledData", "BEMF", nullptr));
#ifndef QT_NO_TOOLTIP
        sampleNowButton->setToolTip(QApplication::translate("PageSampledData", "Sample now", nullptr));
#endif // QT_NO_TOOLTIP
        sampleNowButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleStartButton->setToolTip(QApplication::translate("PageSampledData", "Sample when the motor starts", nullptr));
#endif // QT_NO_TOOLTIP
        sampleStartButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleTriggerStartButton->setToolTip(QApplication::translate("PageSampledData", "Triggered sampling when the motor starts", nullptr));
#endif // QT_NO_TOOLTIP
        sampleTriggerStartButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        sampleTriggerStartButton->setShortcut(QApplication::translate("PageSampledData", "P", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        sampleTriggerFaultButton->setToolTip(QApplication::translate("PageSampledData", "Triggered sampling at fault codes", nullptr));
#endif // QT_NO_TOOLTIP
        sampleTriggerFaultButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleTriggerStartNosendButton->setToolTip(QApplication::translate("PageSampledData", "Triggered sampling when the motor starts without sending the samples automatically", nullptr));
#endif // QT_NO_TOOLTIP
        sampleTriggerStartNosendButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleTriggerFaultNosendButton->setToolTip(QApplication::translate("PageSampledData", "Triggered sampling at fault codes without sending the samples automatically", nullptr));
#endif // QT_NO_TOOLTIP
        sampleTriggerFaultNosendButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleLastButton->setToolTip(QApplication::translate("PageSampledData", "Read last samples", nullptr));
#endif // QT_NO_TOOLTIP
        sampleLastButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sampleStopButton->setToolTip(QApplication::translate("PageSampledData", "Stop sampling", nullptr));
#endif // QT_NO_TOOLTIP
        sampleStopButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        samplesBox->setToolTip(QApplication::translate("PageSampledData", "Number of samples total, or number of samples before trigger in triggered modes", nullptr));
#endif // QT_NO_TOOLTIP
        samplesBox->setPrefix(QApplication::translate("PageSampledData", "Samp: ", nullptr));
#ifndef QT_NO_TOOLTIP
        decimationBox->setToolTip(QApplication::translate("PageSampledData", "Decimation (skip samples to fit more data)", nullptr));
#endif // QT_NO_TOOLTIP
        decimationBox->setPrefix(QApplication::translate("PageSampledData", "Dec: ", nullptr));
#ifndef QT_NO_TOOLTIP
        zoomHButton->setToolTip(QApplication::translate("PageSampledData", "Enable horizontal zoom", nullptr));
#endif // QT_NO_TOOLTIP
        zoomHButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomVButton->setToolTip(QApplication::translate("PageSampledData", "Enable vertical zoom", nullptr));
#endif // QT_NO_TOOLTIP
        zoomVButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        rescaleButton->setToolTip(QApplication::translate("PageSampledData", "Rescale plots to fit", nullptr));
#endif // QT_NO_TOOLTIP
        rescaleButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageSampledData: public Ui_PageSampledData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESAMPLEDDATA_H
