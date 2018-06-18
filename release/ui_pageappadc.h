/********************************************************************************
** Form generated from reading UI file 'pageappadc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPADC_H
#define UI_PAGEAPPADC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/adcmap.h"
#include "widgets/paramtable.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppAdc
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    ParamTable *generalTab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    ParamTable *mappingTab;
    AdcMap *adcMap;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    ParamTable *throttleCurveTab;
    QCustomPlot *throttlePlot;

    void setupUi(QWidget *PageAppAdc)
    {
        if (PageAppAdc->objectName().isEmpty())
            PageAppAdc->setObjectName(QStringLiteral("PageAppAdc"));
        PageAppAdc->resize(662, 493);
        verticalLayout = new QVBoxLayout(PageAppAdc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageAppAdc);
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
        mappingTab = new ParamTable(tab_2);
        mappingTab->setObjectName(QStringLiteral("mappingTab"));

        verticalLayout_3->addWidget(mappingTab);

        adcMap = new AdcMap(tab_2);
        adcMap->setObjectName(QStringLiteral("adcMap"));

        verticalLayout_3->addWidget(adcMap);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        throttleCurveTab = new ParamTable(tab_3);
        throttleCurveTab->setObjectName(QStringLiteral("throttleCurveTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(throttleCurveTab->sizePolicy().hasHeightForWidth());
        throttleCurveTab->setSizePolicy(sizePolicy);
        throttleCurveTab->setMaximumSize(QSize(16777215, 100));

        verticalLayout_4->addWidget(throttleCurveTab);

        throttlePlot = new QCustomPlot(tab_3);
        throttlePlot->setObjectName(QStringLiteral("throttlePlot"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(throttlePlot->sizePolicy().hasHeightForWidth());
        throttlePlot->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(throttlePlot);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageAppAdc);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageAppAdc);
    } // setupUi

    void retranslateUi(QWidget *PageAppAdc)
    {
        PageAppAdc->setWindowTitle(QApplication::translate("PageAppAdc", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageAppAdc", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageAppAdc", "Mapping", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageAppAdc", "Throttle Curve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageAppAdc: public Ui_PageAppAdc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPADC_H
