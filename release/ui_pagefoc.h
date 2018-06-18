/********************************************************************************
** Form generated from reading UI file 'pagefoc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEFOC_H
#define UI_PAGEFOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/detectfoc.h"
#include "widgets/detectfocencoder.h"
#include "widgets/detectfochall.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageFoc
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    ParamTable *generalTab;
    DetectFoc *detectFoc;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    ParamTable *sensorlessTab;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    ParamTable *hallTab;
    DetectFocHall *detectFocHall;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    ParamTable *encoderTab;
    DetectFocEncoder *detectFocEncoder;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    ParamTable *advancedTab;

    void setupUi(QWidget *PageFoc)
    {
        if (PageFoc->objectName().isEmpty())
            PageFoc->setObjectName(QStringLiteral("PageFoc"));
        PageFoc->resize(709, 377);
        verticalLayout = new QVBoxLayout(PageFoc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageFoc);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        generalTab = new ParamTable(tab);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout_2->addWidget(generalTab);

        detectFoc = new DetectFoc(tab);
        detectFoc->setObjectName(QStringLiteral("detectFoc"));

        verticalLayout_2->addWidget(detectFoc);

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
        hallTab = new ParamTable(tab_3);
        hallTab->setObjectName(QStringLiteral("hallTab"));

        verticalLayout_4->addWidget(hallTab);

        detectFocHall = new DetectFocHall(tab_3);
        detectFocHall->setObjectName(QStringLiteral("detectFocHall"));

        verticalLayout_4->addWidget(detectFocHall);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        encoderTab = new ParamTable(tab_4);
        encoderTab->setObjectName(QStringLiteral("encoderTab"));

        verticalLayout_5->addWidget(encoderTab);

        detectFocEncoder = new DetectFocEncoder(tab_4);
        detectFocEncoder->setObjectName(QStringLiteral("detectFocEncoder"));

        verticalLayout_5->addWidget(detectFocEncoder);

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


        retranslateUi(PageFoc);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageFoc);
    } // setupUi

    void retranslateUi(QWidget *PageFoc)
    {
        PageFoc->setWindowTitle(QApplication::translate("PageFoc", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageFoc", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageFoc", "Sensorless", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageFoc", "Hall Sensors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PageFoc", "Encoder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PageFoc", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageFoc: public Ui_PageFoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEFOC_H
