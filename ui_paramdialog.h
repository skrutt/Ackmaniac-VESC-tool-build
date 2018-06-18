/********************************************************************************
** Form generated from reading UI file 'paramdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMDIALOG_H
#define UI_PARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_ParamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    ParamTable *paramTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *ParamDialog)
    {
        if (ParamDialog->objectName().isEmpty())
            ParamDialog->setObjectName(QStringLiteral("ParamDialog"));
        ParamDialog->resize(557, 363);
        verticalLayout = new QVBoxLayout(ParamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textLabel = new QLabel(ParamDialog);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(true);

        verticalLayout->addWidget(textLabel);

        paramTable = new ParamTable(ParamDialog);
        paramTable->setObjectName(QStringLiteral("paramTable"));

        verticalLayout->addWidget(paramTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(ParamDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ParamDialog);

        QMetaObject::connectSlotsByName(ParamDialog);
    } // setupUi

    void retranslateUi(QDialog *ParamDialog)
    {
        ParamDialog->setWindowTitle(QApplication::translate("ParamDialog", "Dialog", nullptr));
        textLabel->setText(QString());
        closeButton->setText(QApplication::translate("ParamDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParamDialog: public Ui_ParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMDIALOG_H
