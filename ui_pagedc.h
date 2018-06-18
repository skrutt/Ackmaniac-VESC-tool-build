/********************************************************************************
** Form generated from reading UI file 'pagedc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEDC_H
#define UI_PAGEDC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageDc
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *paramTab;

    void setupUi(QWidget *PageDc)
    {
        if (PageDc->objectName().isEmpty())
            PageDc->setObjectName(QStringLiteral("PageDc"));
        PageDc->resize(491, 223);
        verticalLayout = new QVBoxLayout(PageDc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        paramTab = new ParamTable(PageDc);
        paramTab->setObjectName(QStringLiteral("paramTab"));

        verticalLayout->addWidget(paramTab);


        retranslateUi(PageDc);

        QMetaObject::connectSlotsByName(PageDc);
    } // setupUi

    void retranslateUi(QWidget *PageDc)
    {
        PageDc->setWindowTitle(QApplication::translate("PageDc", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageDc: public Ui_PageDc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEDC_H
