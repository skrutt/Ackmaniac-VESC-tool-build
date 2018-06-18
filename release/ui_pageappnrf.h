/********************************************************************************
** Form generated from reading UI file 'pageappnrf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPNRF_H
#define UI_PAGEAPPNRF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/nrfpair.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppNrf
{
public:
    QVBoxLayout *verticalLayout;
    ParamTable *generalTab;
    NrfPair *nrfPair;

    void setupUi(QWidget *PageAppNrf)
    {
        if (PageAppNrf->objectName().isEmpty())
            PageAppNrf->setObjectName(QStringLiteral("PageAppNrf"));
        PageAppNrf->resize(563, 332);
        verticalLayout = new QVBoxLayout(PageAppNrf);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        generalTab = new ParamTable(PageAppNrf);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout->addWidget(generalTab);

        nrfPair = new NrfPair(PageAppNrf);
        nrfPair->setObjectName(QStringLiteral("nrfPair"));

        verticalLayout->addWidget(nrfPair);


        retranslateUi(PageAppNrf);

        QMetaObject::connectSlotsByName(PageAppNrf);
    } // setupUi

    void retranslateUi(QWidget *PageAppNrf)
    {
        PageAppNrf->setWindowTitle(QApplication::translate("PageAppNrf", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageAppNrf: public Ui_PageAppNrf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPNRF_H
