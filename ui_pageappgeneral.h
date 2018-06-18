/********************************************************************************
** Form generated from reading UI file 'pageappgeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPGENERAL_H
#define UI_PAGEAPPGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppGeneral
{
public:
    QVBoxLayout *vboxLayout;
    ParamTable *appTab;

    void setupUi(QWidget *PageAppGeneral)
    {
        if (PageAppGeneral->objectName().isEmpty())
            PageAppGeneral->setObjectName(QStringLiteral("PageAppGeneral"));
        PageAppGeneral->resize(821, 584);
        vboxLayout = new QVBoxLayout(PageAppGeneral);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        appTab = new ParamTable(PageAppGeneral);
        appTab->setObjectName(QStringLiteral("appTab"));

        vboxLayout->addWidget(appTab);


        retranslateUi(PageAppGeneral);

        QMetaObject::connectSlotsByName(PageAppGeneral);
    } // setupUi

    void retranslateUi(QWidget *PageAppGeneral)
    {
        PageAppGeneral->setWindowTitle(QApplication::translate("PageAppGeneral", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageAppGeneral: public Ui_PageAppGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPGENERAL_H
