/********************************************************************************
** Form generated from reading UI file 'pageappuart.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPUART_H
#define UI_PAGEAPPUART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppUart
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *generalTab;

    void setupUi(QWidget *PageAppUart)
    {
        if (PageAppUart->objectName().isEmpty())
            PageAppUart->setObjectName(QStringLiteral("PageAppUart"));
        PageAppUart->resize(560, 257);
        verticalLayout = new QVBoxLayout(PageAppUart);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        generalTab = new ParamTable(PageAppUart);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout->addWidget(generalTab);


        retranslateUi(PageAppUart);

        QMetaObject::connectSlotsByName(PageAppUart);
    } // setupUi

    void retranslateUi(QWidget *PageAppUart)
    {
        PageAppUart->setWindowTitle(QApplication::translate("PageAppUart", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageAppUart: public Ui_PageAppUart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPUART_H
