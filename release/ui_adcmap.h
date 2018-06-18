/********************************************************************************
** Form generated from reading UI file 'adcmap.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCMAP_H
#define UI_ADCMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaypercentage.h"

QT_BEGIN_NAMESPACE

class Ui_AdcMap
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *controlTypeBox;
    QPushButton *helpButton;
    QPushButton *resetButton;
    QPushButton *applyButton;
    QGridLayout *gridLayout;
    QDoubleSpinBox *maxCh2Box;
    DisplayPercentage *displayCh1;
    QDoubleSpinBox *minCh1Box;
    QDoubleSpinBox *maxCh1Box;
    QLabel *label;
    DisplayPercentage *displayCh2;
    QLabel *label_2;
    QDoubleSpinBox *minCh2Box;
    QDoubleSpinBox *centerCh1Box;

    void setupUi(QWidget *AdcMap)
    {
        if (AdcMap->objectName().isEmpty())
            AdcMap->setObjectName(QStringLiteral("AdcMap"));
        AdcMap->resize(610, 145);
        verticalLayout_2 = new QVBoxLayout(AdcMap);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(AdcMap);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        controlTypeBox = new QComboBox(groupBox);
        controlTypeBox->setObjectName(QStringLiteral("controlTypeBox"));

        horizontalLayout_2->addWidget(controlTypeBox);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);

        horizontalLayout_2->addWidget(helpButton);

        resetButton = new QPushButton(groupBox);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        sizePolicy.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Restart-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon1);

        horizontalLayout_2->addWidget(resetButton);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon2);
        applyButton->setIconSize(QSize(45, 16));

        horizontalLayout_2->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        maxCh2Box = new QDoubleSpinBox(groupBox);
        maxCh2Box->setObjectName(QStringLiteral("maxCh2Box"));
        maxCh2Box->setReadOnly(true);
        maxCh2Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        maxCh2Box->setDecimals(2);
        maxCh2Box->setMaximum(9);
        maxCh2Box->setSingleStep(0.01);

        gridLayout->addWidget(maxCh2Box, 1, 2, 1, 1);

        displayCh1 = new DisplayPercentage(groupBox);
        displayCh1->setObjectName(QStringLiteral("displayCh1"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(displayCh1->sizePolicy().hasHeightForWidth());
        displayCh1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(displayCh1, 0, 4, 1, 1);

        minCh1Box = new QDoubleSpinBox(groupBox);
        minCh1Box->setObjectName(QStringLiteral("minCh1Box"));
        minCh1Box->setReadOnly(true);
        minCh1Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        minCh1Box->setDecimals(2);
        minCh1Box->setMaximum(9);
        minCh1Box->setSingleStep(0.01);

        gridLayout->addWidget(minCh1Box, 0, 1, 1, 1);

        maxCh1Box = new QDoubleSpinBox(groupBox);
        maxCh1Box->setObjectName(QStringLiteral("maxCh1Box"));
        maxCh1Box->setReadOnly(true);
        maxCh1Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        maxCh1Box->setDecimals(2);
        maxCh1Box->setMaximum(9);
        maxCh1Box->setSingleStep(0.01);

        gridLayout->addWidget(maxCh1Box, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        displayCh2 = new DisplayPercentage(groupBox);
        displayCh2->setObjectName(QStringLiteral("displayCh2"));
        sizePolicy1.setHeightForWidth(displayCh2->sizePolicy().hasHeightForWidth());
        displayCh2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(displayCh2, 1, 4, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        minCh2Box = new QDoubleSpinBox(groupBox);
        minCh2Box->setObjectName(QStringLiteral("minCh2Box"));
        minCh2Box->setReadOnly(true);
        minCh2Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        minCh2Box->setDecimals(2);
        minCh2Box->setMaximum(9);
        minCh2Box->setSingleStep(0.01);

        gridLayout->addWidget(minCh2Box, 1, 1, 1, 1);

        centerCh1Box = new QDoubleSpinBox(groupBox);
        centerCh1Box->setObjectName(QStringLiteral("centerCh1Box"));
        sizePolicy.setHeightForWidth(centerCh1Box->sizePolicy().hasHeightForWidth());
        centerCh1Box->setSizePolicy(sizePolicy);
        centerCh1Box->setReadOnly(true);
        centerCh1Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        centerCh1Box->setDecimals(2);
        centerCh1Box->setMaximum(9);
        centerCh1Box->setSingleStep(0.01);

        gridLayout->addWidget(centerCh1Box, 0, 3, 1, 1);

        gridLayout->setColumnStretch(3, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(AdcMap);

        QMetaObject::connectSlotsByName(AdcMap);
    } // setupUi

    void retranslateUi(QWidget *AdcMap)
    {
        AdcMap->setWindowTitle(QApplication::translate("AdcMap", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("AdcMap", "ADC Voltage Mapping", nullptr));
#ifndef QT_NO_TOOLTIP
        controlTypeBox->setToolTip(QApplication::translate("AdcMap", "Choose the control type. Some control types have centered input, some don't.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("AdcMap", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("AdcMap", "Reset min and max", nullptr));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("AdcMap", "Apply min and max to configuration", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        maxCh2Box->setToolTip(QApplication::translate("AdcMap", "Measured maximum voltage", nullptr));
#endif // QT_NO_TOOLTIP
        maxCh2Box->setPrefix(QApplication::translate("AdcMap", "Max: ", nullptr));
        maxCh2Box->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        minCh1Box->setToolTip(QApplication::translate("AdcMap", "Measured minimum voltage", nullptr));
#endif // QT_NO_TOOLTIP
        minCh1Box->setPrefix(QApplication::translate("AdcMap", "Min: ", nullptr));
        minCh1Box->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        maxCh1Box->setToolTip(QApplication::translate("AdcMap", "Measured maximum voltage", nullptr));
#endif // QT_NO_TOOLTIP
        maxCh1Box->setPrefix(QApplication::translate("AdcMap", "Max: ", nullptr));
        maxCh1Box->setSuffix(QString());
        label->setText(QApplication::translate("AdcMap", "CH1 ", nullptr));
        label_2->setText(QApplication::translate("AdcMap", "CH2 ", nullptr));
#ifndef QT_NO_TOOLTIP
        minCh2Box->setToolTip(QApplication::translate("AdcMap", "Measured minimum voltage", nullptr));
#endif // QT_NO_TOOLTIP
        minCh2Box->setPrefix(QApplication::translate("AdcMap", "Min: ", nullptr));
        minCh2Box->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        centerCh1Box->setToolTip(QApplication::translate("AdcMap", "Measured minimum voltage", nullptr));
#endif // QT_NO_TOOLTIP
        centerCh1Box->setPrefix(QApplication::translate("AdcMap", "Center: ", nullptr));
        centerCh1Box->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class AdcMap: public Ui_AdcMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCMAP_H
