/********************************************************************************
** Form generated from reading UI file 'pageappnunchuk.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPNUNCHUK_H
#define UI_PAGEAPPNUNCHUK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaypercentage.h"
#include "widgets/paramtable.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppNunchuk
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    ParamTable *generalTab;
    DisplayPercentage *display;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    ParamTable *throttleCurveTab;
    QCustomPlot *throttlePlot;

    void setupUi(QWidget *PageAppNunchuk)
    {
        if (PageAppNunchuk->objectName().isEmpty())
            PageAppNunchuk->setObjectName(QStringLiteral("PageAppNunchuk"));
        PageAppNunchuk->resize(647, 476);
        verticalLayout = new QVBoxLayout(PageAppNunchuk);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageAppNunchuk);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        generalTab = new ParamTable(tab);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout_2->addWidget(generalTab);

        display = new DisplayPercentage(tab);
        display->setObjectName(QStringLiteral("display"));
        display->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(display);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        throttleCurveTab = new ParamTable(tab_2);
        throttleCurveTab->setObjectName(QStringLiteral("throttleCurveTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(throttleCurveTab->sizePolicy().hasHeightForWidth());
        throttleCurveTab->setSizePolicy(sizePolicy);
        throttleCurveTab->setMaximumSize(QSize(16777215, 100));

        verticalLayout_3->addWidget(throttleCurveTab);

        throttlePlot = new QCustomPlot(tab_2);
        throttlePlot->setObjectName(QStringLiteral("throttlePlot"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(throttlePlot->sizePolicy().hasHeightForWidth());
        throttlePlot->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(throttlePlot);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageAppNunchuk);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageAppNunchuk);
    } // setupUi

    void retranslateUi(QWidget *PageAppNunchuk)
    {
        PageAppNunchuk->setWindowTitle(QApplication::translate("PageAppNunchuk", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageAppNunchuk", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageAppNunchuk", "Throttle Curve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageAppNunchuk: public Ui_PageAppNunchuk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPNUNCHUK_H
