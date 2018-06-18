/********************************************************************************
** Form generated from reading UI file 'batterycalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYCALCULATOR_H
#define UI_BATTERYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatteryCalculator
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *batteryCalcButton;
    QComboBox *batteryTypeBox;
    QLabel *batteryCutoffLabel;
    QLabel *label_3;
    QSpinBox *batteryCellBox;
    QPushButton *helpButton;

    void setupUi(QWidget *BatteryCalculator)
    {
        if (BatteryCalculator->objectName().isEmpty())
            BatteryCalculator->setObjectName(QStringLiteral("BatteryCalculator"));
        BatteryCalculator->resize(474, 125);
        horizontalLayout = new QHBoxLayout(BatteryCalculator);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(BatteryCalculator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        batteryCalcButton = new QPushButton(groupBox);
        batteryCalcButton->setObjectName(QStringLiteral("batteryCalcButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(batteryCalcButton->sizePolicy().hasHeightForWidth());
        batteryCalcButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        batteryCalcButton->setIcon(icon);
        batteryCalcButton->setIconSize(QSize(45, 16));

        gridLayout->addWidget(batteryCalcButton, 2, 3, 1, 1);

        batteryTypeBox = new QComboBox(groupBox);
        batteryTypeBox->addItem(QString());
        batteryTypeBox->addItem(QString());
        batteryTypeBox->setObjectName(QStringLiteral("batteryTypeBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(batteryTypeBox->sizePolicy().hasHeightForWidth());
        batteryTypeBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(batteryTypeBox, 0, 1, 1, 3);

        batteryCutoffLabel = new QLabel(groupBox);
        batteryCutoffLabel->setObjectName(QStringLiteral("batteryCutoffLabel"));

        gridLayout->addWidget(batteryCutoffLabel, 2, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        batteryCellBox = new QSpinBox(groupBox);
        batteryCellBox->setObjectName(QStringLiteral("batteryCellBox"));
        sizePolicy2.setHeightForWidth(batteryCellBox->sizePolicy().hasHeightForWidth());
        batteryCellBox->setSizePolicy(sizePolicy2);
        batteryCellBox->setMinimum(1);
        batteryCellBox->setValue(10);

        gridLayout->addWidget(batteryCellBox, 1, 1, 1, 3);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy1.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon1);

        gridLayout->addWidget(helpButton, 2, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(BatteryCalculator);

        QMetaObject::connectSlotsByName(BatteryCalculator);
    } // setupUi

    void retranslateUi(QWidget *BatteryCalculator)
    {
        BatteryCalculator->setWindowTitle(QApplication::translate("BatteryCalculator", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("BatteryCalculator", "Battery Cutoff Calculator", nullptr));
        label_2->setText(QApplication::translate("BatteryCalculator", "Type", nullptr));
#ifndef QT_NO_TOOLTIP
        batteryCalcButton->setToolTip(QApplication::translate("BatteryCalculator", "Apply calculated limits", nullptr));
#endif // QT_NO_TOOLTIP
        batteryCalcButton->setText(QString());
        batteryTypeBox->setItemText(0, QApplication::translate("BatteryCalculator", "Lithium Ion:          (full at 4.2V/cell - Li-Ion)", nullptr));
        batteryTypeBox->setItemText(1, QApplication::translate("BatteryCalculator", "Lithium Polymer: (full at 4.2V/cell - LiPo)", nullptr));

        batteryCutoffLabel->setText(QString());
        label_3->setText(QApplication::translate("BatteryCalculator", "Cells", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("BatteryCalculator", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BatteryCalculator: public Ui_BatteryCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYCALCULATOR_H
