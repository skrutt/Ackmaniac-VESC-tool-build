/********************************************************************************
** Form generated from reading UI file 'pagemotor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMOTOR_H
#define UI_PAGEMOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/batterycalculator.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMotor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    ParamTable *motorTab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    ParamTable *currentTab;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    ParamTable *voltageTab;
    BatteryCalculator *batteryCalc;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_7;
    ParamTable *rpmTab;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    ParamTable *tempTab;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    ParamTable *advancedTab;

    void setupUi(QWidget *PageMotor)
    {
        if (PageMotor->objectName().isEmpty())
            PageMotor->setObjectName(QStringLiteral("PageMotor"));
        PageMotor->resize(622, 437);
        verticalLayout = new QVBoxLayout(PageMotor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageMotor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        motorTab = new ParamTable(tab);
        motorTab->setObjectName(QStringLiteral("motorTab"));

        verticalLayout_2->addWidget(motorTab);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        currentTab = new ParamTable(tab_2);
        currentTab->setObjectName(QStringLiteral("currentTab"));

        verticalLayout_3->addWidget(currentTab);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        voltageTab = new ParamTable(tab_3);
        voltageTab->setObjectName(QStringLiteral("voltageTab"));

        verticalLayout_4->addWidget(voltageTab);

        batteryCalc = new BatteryCalculator(tab_3);
        batteryCalc->setObjectName(QStringLiteral("batteryCalc"));

        verticalLayout_4->addWidget(batteryCalc);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_7 = new QVBoxLayout(tab_6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        rpmTab = new ParamTable(tab_6);
        rpmTab->setObjectName(QStringLiteral("rpmTab"));

        verticalLayout_7->addWidget(rpmTab);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tempTab = new ParamTable(tab_4);
        tempTab->setObjectName(QStringLiteral("tempTab"));

        verticalLayout_5->addWidget(tempTab);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        advancedTab = new ParamTable(tab_5);
        advancedTab->setObjectName(QStringLiteral("advancedTab"));

        verticalLayout_6->addWidget(advancedTab);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMotor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMotor);
    } // setupUi

    void retranslateUi(QWidget *PageMotor)
    {
        PageMotor->setWindowTitle(QApplication::translate("PageMotor", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageMotor", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageMotor", "Current", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageMotor", "Voltage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("PageMotor", "RPM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PageMotor", "Temperature", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PageMotor", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMotor: public Ui_PageMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMOTOR_H
