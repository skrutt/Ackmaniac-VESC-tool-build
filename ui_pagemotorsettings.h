/********************************************************************************
** Form generated from reading UI file 'pagemotorsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMOTORSETTINGS_H
#define UI_PAGEMOTORSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageMotorSettings
{
public:
    QVBoxLayout *verticalLayout;
    VTextBrowser *textEdit;
    QPushButton *motorSetupWizardButton;

    void setupUi(QWidget *PageMotorSettings)
    {
        if (PageMotorSettings->objectName().isEmpty())
            PageMotorSettings->setObjectName(QStringLiteral("PageMotorSettings"));
        PageMotorSettings->resize(672, 345);
        verticalLayout = new QVBoxLayout(PageMotorSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new VTextBrowser(PageMotorSettings);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        motorSetupWizardButton = new QPushButton(PageMotorSettings);
        motorSetupWizardButton->setObjectName(QStringLiteral("motorSetupWizardButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        motorSetupWizardButton->setIcon(icon);

        verticalLayout->addWidget(motorSetupWizardButton);


        retranslateUi(PageMotorSettings);

        QMetaObject::connectSlotsByName(PageMotorSettings);
    } // setupUi

    void retranslateUi(QWidget *PageMotorSettings)
    {
        PageMotorSettings->setWindowTitle(QApplication::translate("PageMotorSettings", "Form", nullptr));
        motorSetupWizardButton->setText(QApplication::translate("PageMotorSettings", "Motor Setup Wizard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMotorSettings: public Ui_PageMotorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMOTORSETTINGS_H
