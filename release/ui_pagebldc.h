/********************************************************************************
** Form generated from reading UI file 'pagebldc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEBLDC_H
#define UI_PAGEBLDC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/detectbldc.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageBldc
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    ParamTable *generalTab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    ParamTable *sensorlessTab;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    ParamTable *sensorTab;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    ParamTable *advancedTab;
    DetectBldc *detectBldc;

    void setupUi(QWidget *PageBldc)
    {
        if (PageBldc->objectName().isEmpty())
            PageBldc->setObjectName(QStringLiteral("PageBldc"));
        PageBldc->resize(734, 483);
        verticalLayout = new QVBoxLayout(PageBldc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageBldc);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        generalTab = new ParamTable(tab);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout_2->addWidget(generalTab);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        sensorlessTab = new ParamTable(tab_2);
        sensorlessTab->setObjectName(QStringLiteral("sensorlessTab"));

        verticalLayout_3->addWidget(sensorlessTab);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        sensorTab = new ParamTable(tab_3);
        sensorTab->setObjectName(QStringLiteral("sensorTab"));

        verticalLayout_4->addWidget(sensorTab);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        advancedTab = new ParamTable(tab_5);
        advancedTab->setObjectName(QStringLiteral("advancedTab"));

        verticalLayout_5->addWidget(advancedTab);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        detectBldc = new DetectBldc(PageBldc);
        detectBldc->setObjectName(QStringLiteral("detectBldc"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(detectBldc->sizePolicy().hasHeightForWidth());
        detectBldc->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(detectBldc);

        verticalLayout->setStretch(0, 1);

        retranslateUi(PageBldc);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageBldc);
    } // setupUi

    void retranslateUi(QWidget *PageBldc)
    {
        PageBldc->setWindowTitle(QApplication::translate("PageBldc", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageBldc", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageBldc", "Sensorless", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageBldc", "Sensors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PageBldc", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageBldc: public Ui_PageBldc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEBLDC_H
