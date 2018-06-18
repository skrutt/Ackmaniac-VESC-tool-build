/********************************************************************************
** Form generated from reading UI file 'pagertdata.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGERTDATA_H
#define UI_PAGERTDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/qcustomplot.h"
#include "widgets/rtdatatext.h"

QT_BEGIN_NAMESPACE

class Ui_PageRtData
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *currentPlot;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *tempPlot;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *tempShowMosfetBox;
    QCheckBox *tempShowMotorBox;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *rpmPlot;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *focPlot;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QProgressBar *posBar;
    QCustomPlot *posPlot;
    QVBoxLayout *verticalLayout_7;
    QPushButton *posInductanceButton;
    QPushButton *posEncoderButton;
    QPushButton *posObserverButton;
    QPushButton *posPidButton;
    QPushButton *posEncoderObserverErrorButton;
    QPushButton *posPidErrorButton;
    QPushButton *posStopButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *buttonFrame;
    QVBoxLayout *verticalLayout;
    QToolButton *autoscaleButton;
    QToolButton *zoomHButton;
    QToolButton *zoomVButton;
    QToolButton *rescaleButton;
    QSpacerItem *verticalSpacer;
    RtDataText *rtText;

    void setupUi(QWidget *PageRtData)
    {
        if (PageRtData->objectName().isEmpty())
            PageRtData->setObjectName(QStringLiteral("PageRtData"));
        PageRtData->resize(834, 505);
        verticalLayout_6 = new QVBoxLayout(PageRtData);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(PageRtData);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentPlot = new QCustomPlot(tab);
        currentPlot->setObjectName(QStringLiteral("currentPlot"));

        verticalLayout_2->addWidget(currentPlot);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tempPlot = new QCustomPlot(tab_2);
        tempPlot->setObjectName(QStringLiteral("tempPlot"));

        verticalLayout_3->addWidget(tempPlot);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tempShowMosfetBox = new QCheckBox(tab_2);
        tempShowMosfetBox->setObjectName(QStringLiteral("tempShowMosfetBox"));
        tempShowMosfetBox->setChecked(true);

        horizontalLayout_3->addWidget(tempShowMosfetBox);

        tempShowMotorBox = new QCheckBox(tab_2);
        tempShowMotorBox->setObjectName(QStringLiteral("tempShowMotorBox"));
        tempShowMotorBox->setChecked(true);

        horizontalLayout_3->addWidget(tempShowMotorBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_3->setStretch(0, 1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        rpmPlot = new QCustomPlot(tab_3);
        rpmPlot->setObjectName(QStringLiteral("rpmPlot"));

        verticalLayout_4->addWidget(rpmPlot);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        focPlot = new QCustomPlot(tab_4);
        focPlot->setObjectName(QStringLiteral("focPlot"));

        verticalLayout_5->addWidget(focPlot);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        horizontalLayout_2 = new QHBoxLayout(tab_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        posBar = new QProgressBar(tab_5);
        posBar->setObjectName(QStringLiteral("posBar"));
        posBar->setMaximum(359);
        posBar->setValue(120);

        verticalLayout_8->addWidget(posBar);

        posPlot = new QCustomPlot(tab_5);
        posPlot->setObjectName(QStringLiteral("posPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(posPlot->sizePolicy().hasHeightForWidth());
        posPlot->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(posPlot);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        posInductanceButton = new QPushButton(tab_5);
        posInductanceButton->setObjectName(QStringLiteral("posInductanceButton"));

        verticalLayout_7->addWidget(posInductanceButton);

        posEncoderButton = new QPushButton(tab_5);
        posEncoderButton->setObjectName(QStringLiteral("posEncoderButton"));

        verticalLayout_7->addWidget(posEncoderButton);

        posObserverButton = new QPushButton(tab_5);
        posObserverButton->setObjectName(QStringLiteral("posObserverButton"));

        verticalLayout_7->addWidget(posObserverButton);

        posPidButton = new QPushButton(tab_5);
        posPidButton->setObjectName(QStringLiteral("posPidButton"));

        verticalLayout_7->addWidget(posPidButton);

        posEncoderObserverErrorButton = new QPushButton(tab_5);
        posEncoderObserverErrorButton->setObjectName(QStringLiteral("posEncoderObserverErrorButton"));

        verticalLayout_7->addWidget(posEncoderObserverErrorButton);

        posPidErrorButton = new QPushButton(tab_5);
        posPidErrorButton->setObjectName(QStringLiteral("posPidErrorButton"));

        verticalLayout_7->addWidget(posPidErrorButton);

        posStopButton = new QPushButton(tab_5);
        posStopButton->setObjectName(QStringLiteral("posStopButton"));

        verticalLayout_7->addWidget(posStopButton);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget);

        buttonFrame = new QFrame(PageRtData);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonFrame->sizePolicy().hasHeightForWidth());
        buttonFrame->setSizePolicy(sizePolicy1);
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(buttonFrame);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        autoscaleButton = new QToolButton(buttonFrame);
        autoscaleButton->setObjectName(QStringLiteral("autoscaleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(autoscaleButton->sizePolicy().hasHeightForWidth());
        autoscaleButton->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(3);
        autoscaleButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/size_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/res/icons/size_on.png"), QSize(), QIcon::Normal, QIcon::On);
        autoscaleButton->setIcon(icon);
        autoscaleButton->setIconSize(QSize(20, 20));
        autoscaleButton->setCheckable(true);
        autoscaleButton->setChecked(true);

        verticalLayout->addWidget(autoscaleButton);

        zoomHButton = new QToolButton(buttonFrame);
        zoomHButton->setObjectName(QStringLiteral("zoomHButton"));
        sizePolicy2.setHeightForWidth(zoomHButton->sizePolicy().hasHeightForWidth());
        zoomHButton->setSizePolicy(sizePolicy2);
        zoomHButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/expand_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/res/icons/expand_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomHButton->setIcon(icon1);
        zoomHButton->setIconSize(QSize(20, 20));
        zoomHButton->setCheckable(true);
        zoomHButton->setChecked(true);

        verticalLayout->addWidget(zoomHButton);

        zoomVButton = new QToolButton(buttonFrame);
        zoomVButton->setObjectName(QStringLiteral("zoomVButton"));
        sizePolicy2.setHeightForWidth(zoomVButton->sizePolicy().hasHeightForWidth());
        zoomVButton->setSizePolicy(sizePolicy2);
        zoomVButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/expand_v_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/res/icons/expand_v_on.png"), QSize(), QIcon::Normal, QIcon::On);
        zoomVButton->setIcon(icon2);
        zoomVButton->setIconSize(QSize(20, 20));
        zoomVButton->setCheckable(true);
        zoomVButton->setChecked(true);

        verticalLayout->addWidget(zoomVButton);

        rescaleButton = new QToolButton(buttonFrame);
        rescaleButton->setObjectName(QStringLiteral("rescaleButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/size_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        rescaleButton->setIcon(icon3);
        rescaleButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(rescaleButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(buttonFrame);


        verticalLayout_6->addLayout(horizontalLayout);

        rtText = new RtDataText(PageRtData);
        rtText->setObjectName(QStringLiteral("rtText"));

        verticalLayout_6->addWidget(rtText);


        retranslateUi(PageRtData);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageRtData);
    } // setupUi

    void retranslateUi(QWidget *PageRtData)
    {
        PageRtData->setWindowTitle(QApplication::translate("PageRtData", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageRtData", "Current", nullptr));
#ifndef QT_NO_TOOLTIP
        tempShowMosfetBox->setToolTip(QApplication::translate("PageRtData", "Show MOSFET temperature", nullptr));
#endif // QT_NO_TOOLTIP
        tempShowMosfetBox->setText(QApplication::translate("PageRtData", "MOSFET", nullptr));
#ifndef QT_NO_TOOLTIP
        tempShowMotorBox->setToolTip(QApplication::translate("PageRtData", "Show motor temperature", nullptr));
#endif // QT_NO_TOOLTIP
        tempShowMotorBox->setText(QApplication::translate("PageRtData", "Motor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageRtData", "Temperature", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageRtData", "RPM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PageRtData", "FOC", nullptr));
        posBar->setFormat(QApplication::translate("PageRtData", "%v Degrees", nullptr));
#ifndef QT_NO_TOOLTIP
        posInductanceButton->setToolTip(QApplication::translate("PageRtData", "Start inductance based signal injection detection (BLDC only)", nullptr));
#endif // QT_NO_TOOLTIP
        posInductanceButton->setText(QApplication::translate("PageRtData", "Inductance", nullptr));
#ifndef QT_NO_TOOLTIP
        posEncoderButton->setToolTip(QApplication::translate("PageRtData", "Plot the encoder position", nullptr));
#endif // QT_NO_TOOLTIP
        posEncoderButton->setText(QApplication::translate("PageRtData", "Encoder", nullptr));
#ifndef QT_NO_TOOLTIP
        posObserverButton->setToolTip(QApplication::translate("PageRtData", "Plot the rotor position seen by the observer (FOC only)", nullptr));
#endif // QT_NO_TOOLTIP
        posObserverButton->setText(QApplication::translate("PageRtData", "Observer", nullptr));
#ifndef QT_NO_TOOLTIP
        posPidButton->setToolTip(QApplication::translate("PageRtData", "Plot the PID controller position", nullptr));
#endif // QT_NO_TOOLTIP
        posPidButton->setText(QApplication::translate("PageRtData", "PID Pos", nullptr));
#ifndef QT_NO_TOOLTIP
        posEncoderObserverErrorButton->setToolTip(QApplication::translate("PageRtData", "Plot the difference between the observer and encoder position (FOC only)", nullptr));
#endif // QT_NO_TOOLTIP
        posEncoderObserverErrorButton->setText(QApplication::translate("PageRtData", "Observer Error", nullptr));
#ifndef QT_NO_TOOLTIP
        posPidErrorButton->setToolTip(QApplication::translate("PageRtData", "Plot the PID controller position error", nullptr));
#endif // QT_NO_TOOLTIP
        posPidErrorButton->setText(QApplication::translate("PageRtData", "PID Error", nullptr));
#ifndef QT_NO_TOOLTIP
        posStopButton->setToolTip(QApplication::translate("PageRtData", "Stop sending position samples", nullptr));
#endif // QT_NO_TOOLTIP
        posStopButton->setText(QApplication::translate("PageRtData", "Stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PageRtData", "Rotor Position", nullptr));
#ifndef QT_NO_TOOLTIP
        autoscaleButton->setToolTip(QApplication::translate("PageRtData", "Autoscale plots with incoming samples", nullptr));
#endif // QT_NO_TOOLTIP
        autoscaleButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomHButton->setToolTip(QApplication::translate("PageRtData", "Enable horizontal zoom", nullptr));
#endif // QT_NO_TOOLTIP
        zoomHButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        zoomVButton->setToolTip(QApplication::translate("PageRtData", "Enable vertical zoom", nullptr));
#endif // QT_NO_TOOLTIP
        zoomVButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        rescaleButton->setToolTip(QApplication::translate("PageRtData", "Rescale plots to fit", nullptr));
#endif // QT_NO_TOOLTIP
        rescaleButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageRtData: public Ui_PageRtData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGERTDATA_H
