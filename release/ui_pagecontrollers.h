/********************************************************************************
** Form generated from reading UI file 'pagecontrollers.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECONTROLLERS_H
#define UI_PAGECONTROLLERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageControllers
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *paramTab;

    void setupUi(QWidget *PageControllers)
    {
        if (PageControllers->objectName().isEmpty())
            PageControllers->setObjectName(QStringLiteral("PageControllers"));
        PageControllers->resize(433, 348);
        verticalLayout = new QVBoxLayout(PageControllers);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        paramTab = new ParamTable(PageControllers);
        paramTab->setObjectName(QStringLiteral("paramTab"));

        verticalLayout->addWidget(paramTab);


        retranslateUi(PageControllers);

        QMetaObject::connectSlotsByName(PageControllers);
    } // setupUi

    void retranslateUi(QWidget *PageControllers)
    {
        PageControllers->setWindowTitle(QApplication::translate("PageControllers", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageControllers: public Ui_PageControllers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECONTROLLERS_H
