/********************************************************************************
** Form generated from reading UI file 'detectfoc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTFOC_H
#define UI_DETECTFOC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectFoc
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *erpmBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QPushButton *pushButton;
    QPushButton *rlButton;
    QPushButton *pushButton_2;
    QPushButton *lambdaButton;
    QPushButton *pushButton_3;
    QPushButton *applyAllButton;
    QDoubleSpinBox *dutyBox;
    QLabel *label_2;
    QDoubleSpinBox *inductanceBox;
    QDoubleSpinBox *lambdaBox;
    QLabel *label;
    QDoubleSpinBox *tcBox;
    QDoubleSpinBox *kpBox;
    QDoubleSpinBox *kiBox;
    QLabel *label_3;
    QDoubleSpinBox *obsGainBox;
    QLabel *label_4;
    QDoubleSpinBox *currentBox;
    QDoubleSpinBox *resistanceBox;
    QPushButton *calcGainButton;
    QPushButton *calcKpKiButton;

    void setupUi(QWidget *DetectFoc)
    {
        if (DetectFoc->objectName().isEmpty())
            DetectFoc->setObjectName(QStringLiteral("DetectFoc"));
        DetectFoc->resize(649, 196);
        verticalLayout = new QVBoxLayout(DetectFoc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(DetectFoc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        erpmBox = new QDoubleSpinBox(groupBox);
        erpmBox->setObjectName(QStringLiteral("erpmBox"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        erpmBox->setFont(font);
        erpmBox->setDecimals(1);
        erpmBox->setMaximum(100000);
        erpmBox->setSingleStep(10);
        erpmBox->setValue(450);

        gridLayout->addWidget(erpmBox, 1, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);
        helpButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(helpButton);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/arrow_r.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/res/icons/arrow_r.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon1.addFile(QStringLiteral(":/res/icons/arrow_r.png"), QSize(), QIcon::Disabled, QIcon::On);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(45, 16));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        rlButton = new QPushButton(groupBox);
        rlButton->setObjectName(QStringLiteral("rlButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/rl.png"), QSize(), QIcon::Normal, QIcon::Off);
        rlButton->setIcon(icon2);
        rlButton->setIconSize(QSize(20, 16));

        horizontalLayout->addWidget(rlButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(45, 16));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        lambdaButton = new QPushButton(groupBox);
        lambdaButton->setObjectName(QStringLiteral("lambdaButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/lambda.png"), QSize(), QIcon::Normal, QIcon::Off);
        lambdaButton->setIcon(icon3);
        lambdaButton->setIconSize(QSize(20, 16));

        horizontalLayout->addWidget(lambdaButton);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(45, 16));
        pushButton_3->setFlat(true);

        horizontalLayout->addWidget(pushButton_3);

        applyAllButton = new QPushButton(groupBox);
        applyAllButton->setObjectName(QStringLiteral("applyAllButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(applyAllButton->sizePolicy().hasHeightForWidth());
        applyAllButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyAllButton->setIcon(icon4);
        applyAllButton->setIconSize(QSize(50, 16));

        horizontalLayout->addWidget(applyAllButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 6);

        dutyBox = new QDoubleSpinBox(groupBox);
        dutyBox->setObjectName(QStringLiteral("dutyBox"));
        dutyBox->setFont(font);
        dutyBox->setMaximum(1);
        dutyBox->setSingleStep(0.1);
        dutyBox->setValue(0.5);

        gridLayout->addWidget(dutyBox, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 5, 1, 1);

        inductanceBox = new QDoubleSpinBox(groupBox);
        inductanceBox->setObjectName(QStringLiteral("inductanceBox"));
        inductanceBox->setFont(font);
        inductanceBox->setWrapping(false);
        inductanceBox->setReadOnly(true);
        inductanceBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inductanceBox->setMaximum(100000);

        gridLayout->addWidget(inductanceBox, 2, 3, 1, 1);

        lambdaBox = new QDoubleSpinBox(groupBox);
        lambdaBox->setObjectName(QStringLiteral("lambdaBox"));
        lambdaBox->setFont(font);
        lambdaBox->setReadOnly(true);
        lambdaBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        lambdaBox->setDecimals(3);
        lambdaBox->setMaximum(100);
        lambdaBox->setSingleStep(0.0001);

        gridLayout->addWidget(lambdaBox, 2, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 5, 1, 1);

        tcBox = new QDoubleSpinBox(groupBox);
        tcBox->setObjectName(QStringLiteral("tcBox"));
        tcBox->setFont(font);
        tcBox->setDecimals(1);
        tcBox->setMaximum(100000);
        tcBox->setSingleStep(100);
        tcBox->setValue(1000);

        gridLayout->addWidget(tcBox, 3, 2, 1, 1);

        kpBox = new QDoubleSpinBox(groupBox);
        kpBox->setObjectName(QStringLiteral("kpBox"));
        kpBox->setFont(font);
        kpBox->setReadOnly(true);
        kpBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        kpBox->setDecimals(4);
        kpBox->setMaximum(1000);
        kpBox->setSingleStep(0.01);
        kpBox->setValue(0);

        gridLayout->addWidget(kpBox, 3, 3, 1, 1);

        kiBox = new QDoubleSpinBox(groupBox);
        kiBox->setObjectName(QStringLiteral("kiBox"));
        kiBox->setFont(font);
        kiBox->setReadOnly(true);
        kiBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        kiBox->setDecimals(2);
        kiBox->setMaximum(100000);
        kiBox->setSingleStep(1);
        kiBox->setValue(0);

        gridLayout->addWidget(kiBox, 3, 4, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 5, 1, 1);

        obsGainBox = new QDoubleSpinBox(groupBox);
        obsGainBox->setObjectName(QStringLiteral("obsGainBox"));
        obsGainBox->setFont(font);
        obsGainBox->setReadOnly(true);
        obsGainBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        obsGainBox->setMaximum(10000);

        gridLayout->addWidget(obsGainBox, 4, 2, 1, 3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 5, 1, 1);

        currentBox = new QDoubleSpinBox(groupBox);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setFont(font);
        currentBox->setMaximum(100000);
        currentBox->setValue(5);

        gridLayout->addWidget(currentBox, 1, 1, 1, 2);

        resistanceBox = new QDoubleSpinBox(groupBox);
        resistanceBox->setObjectName(QStringLiteral("resistanceBox"));
        resistanceBox->setFont(font);
        resistanceBox->setReadOnly(true);
        resistanceBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        resistanceBox->setDecimals(2);
        resistanceBox->setMaximum(100000);
        resistanceBox->setSingleStep(0.001);

        gridLayout->addWidget(resistanceBox, 2, 1, 1, 2);

        calcGainButton = new QPushButton(groupBox);
        calcGainButton->setObjectName(QStringLiteral("calcGainButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calcGainButton->sizePolicy().hasHeightForWidth());
        calcGainButton->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/Calculator-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        calcGainButton->setIcon(icon5);

        gridLayout->addWidget(calcGainButton, 4, 1, 1, 1);

        calcKpKiButton = new QPushButton(groupBox);
        calcKpKiButton->setObjectName(QStringLiteral("calcKpKiButton"));
        sizePolicy1.setHeightForWidth(calcKpKiButton->sizePolicy().hasHeightForWidth());
        calcKpKiButton->setSizePolicy(sizePolicy1);
        calcKpKiButton->setIcon(icon5);

        gridLayout->addWidget(calcKpKiButton, 3, 1, 1, 1);

        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 1);

        verticalLayout->addWidget(groupBox);


        retranslateUi(DetectFoc);

        QMetaObject::connectSlotsByName(DetectFoc);
    } // setupUi

    void retranslateUi(QWidget *DetectFoc)
    {
        DetectFoc->setWindowTitle(QApplication::translate("DetectFoc", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DetectFoc", "Detect and Calculate Parameters", nullptr));
#ifndef QT_NO_TOOLTIP
        erpmBox->setToolTip(QApplication::translate("DetectFoc", "Open loop speed for delay mode BLDC commutation", nullptr));
#endif // QT_NO_TOOLTIP
        erpmBox->setPrefix(QApplication::translate("DetectFoc", "\317\211: ", nullptr));
        erpmBox->setSuffix(QApplication::translate("DetectFoc", " ERPM", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("DetectFoc", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        rlButton->setToolTip(QApplication::translate("DetectFoc", "Measure resistance and inductance", nullptr));
#endif // QT_NO_TOOLTIP
        rlButton->setText(QString());
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        lambdaButton->setToolTip(QApplication::translate("DetectFoc", "Measure flux linkage", nullptr));
#endif // QT_NO_TOOLTIP
        lambdaButton->setText(QString());
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        applyAllButton->setToolTip(QApplication::translate("DetectFoc", "Calculate and apply all parameters", nullptr));
#endif // QT_NO_TOOLTIP
        applyAllButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        dutyBox->setToolTip(QApplication::translate("DetectFoc", "Duty cycle to sample at", nullptr));
#endif // QT_NO_TOOLTIP
        dutyBox->setPrefix(QApplication::translate("DetectFoc", "D: ", nullptr));
        dutyBox->setSuffix(QString());
        label_2->setText(QApplication::translate("DetectFoc", "\342\206\220 For \316\273", nullptr));
#ifndef QT_NO_TOOLTIP
        inductanceBox->setToolTip(QApplication::translate("DetectFoc", "Motor inductance", nullptr));
#endif // QT_NO_TOOLTIP
        inductanceBox->setPrefix(QApplication::translate("DetectFoc", "L: ", nullptr));
        inductanceBox->setSuffix(QApplication::translate("DetectFoc", " \302\265H", nullptr));
#ifndef QT_NO_TOOLTIP
        lambdaBox->setToolTip(QApplication::translate("DetectFoc", "Motor flux linkage", nullptr));
#endif // QT_NO_TOOLTIP
        lambdaBox->setPrefix(QApplication::translate("DetectFoc", "\316\273: ", nullptr));
        lambdaBox->setSuffix(QApplication::translate("DetectFoc", " mWb", nullptr));
        label->setText(QApplication::translate("DetectFoc", "\342\206\220 Param", nullptr));
#ifndef QT_NO_TOOLTIP
        tcBox->setToolTip(QApplication::translate("DetectFoc", "Time constant for calculating KP and KI", nullptr));
#endif // QT_NO_TOOLTIP
        tcBox->setPrefix(QApplication::translate("DetectFoc", "T: ", nullptr));
        tcBox->setSuffix(QApplication::translate("DetectFoc", " \302\265S", nullptr));
#ifndef QT_NO_TOOLTIP
        kpBox->setToolTip(QApplication::translate("DetectFoc", "Current control KP", nullptr));
#endif // QT_NO_TOOLTIP
        kpBox->setPrefix(QApplication::translate("DetectFoc", "KP: ", nullptr));
        kpBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        kiBox->setToolTip(QApplication::translate("DetectFoc", "Current control KI", nullptr));
#endif // QT_NO_TOOLTIP
        kiBox->setPrefix(QApplication::translate("DetectFoc", "KI: ", nullptr));
        kiBox->setSuffix(QString());
        label_3->setText(QApplication::translate("DetectFoc", "\342\206\220 Calc", nullptr));
#ifndef QT_NO_TOOLTIP
        obsGainBox->setToolTip(QApplication::translate("DetectFoc", "Observer gain", nullptr));
#endif // QT_NO_TOOLTIP
        obsGainBox->setPrefix(QApplication::translate("DetectFoc", "Observer Gain (x1M): ", nullptr));
        obsGainBox->setSuffix(QString());
        label_4->setText(QApplication::translate("DetectFoc", "\342\206\220 Calc", nullptr));
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("DetectFoc", "Current for starting", nullptr));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("DetectFoc", "I: ", nullptr));
        currentBox->setSuffix(QApplication::translate("DetectFoc", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        resistanceBox->setToolTip(QApplication::translate("DetectFoc", "Motor resistance", nullptr));
#endif // QT_NO_TOOLTIP
        resistanceBox->setPrefix(QApplication::translate("DetectFoc", "R: ", nullptr));
        resistanceBox->setSuffix(QApplication::translate("DetectFoc", " m\316\251", nullptr));
#ifndef QT_NO_TOOLTIP
        calcGainButton->setToolTip(QApplication::translate("DetectFoc", "Calculate Observer Gain (requires \316\273)", nullptr));
#endif // QT_NO_TOOLTIP
        calcGainButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        calcKpKiButton->setToolTip(QApplication::translate("DetectFoc", "Calculate KP and KI (requires R and L)", nullptr));
#endif // QT_NO_TOOLTIP
        calcKpKiButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetectFoc: public Ui_DetectFoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTFOC_H
