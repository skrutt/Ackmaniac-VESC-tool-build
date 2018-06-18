/********************************************************************************
** Form generated from reading UI file 'pagewelcome.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWELCOME_H
#define UI_PAGEWELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/imagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageWelcome
{
public:
    QVBoxLayout *verticalLayout;
    ImageWidget *bgWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *autoConnectButton;
    QPushButton *wizardMotorButton;
    QPushButton *wizardAppButton;

    void setupUi(QWidget *PageWelcome)
    {
        if (PageWelcome->objectName().isEmpty())
            PageWelcome->setObjectName(QStringLiteral("PageWelcome"));
        PageWelcome->resize(760, 415);
        verticalLayout = new QVBoxLayout(PageWelcome);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bgWidget = new ImageWidget(PageWelcome);
        bgWidget->setObjectName(QStringLiteral("bgWidget"));
        verticalLayout_2 = new QVBoxLayout(bgWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 30, 30, 30);
        label = new QLabel(bgWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(bgWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        autoConnectButton = new QPushButton(PageWelcome);
        autoConnectButton->setObjectName(QStringLiteral("autoConnectButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoConnectButton->setIcon(icon);
        autoConnectButton->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(autoConnectButton);

        wizardMotorButton = new QPushButton(PageWelcome);
        wizardMotorButton->setObjectName(QStringLiteral("wizardMotorButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        wizardMotorButton->setIcon(icon1);
        wizardMotorButton->setIconSize(QSize(45, 45));
        wizardMotorButton->setFlat(false);

        horizontalLayout->addWidget(wizardMotorButton);

        wizardAppButton = new QPushButton(PageWelcome);
        wizardAppButton->setObjectName(QStringLiteral("wizardAppButton"));
        wizardAppButton->setIcon(icon1);
        wizardAppButton->setIconSize(QSize(45, 45));
        wizardAppButton->setFlat(false);

        horizontalLayout->addWidget(wizardAppButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageWelcome);

        QMetaObject::connectSlotsByName(PageWelcome);
    } // setupUi

    void retranslateUi(QWidget *PageWelcome)
    {
        PageWelcome->setWindowTitle(QApplication::translate("PageWelcome", "Form", nullptr));
        label->setText(QApplication::translate("PageWelcome", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Welcome to </span><span style=\" font-size:20pt; font-weight:600;\">ACKMANIAC-ESC Tool</span></p><p align=\"center\"><span style=\" font-size:14pt;\">To get started, you can use the </span><span style=\" font-size:14pt; font-style:italic;\">Setup Wizards</span><span style=\" font-size:14pt;\"> to configure the motor and app settings respectively. Otherwise, you can connect to your ESC in the </span><span style=\" font-size:14pt; font-style:italic;\">Connection</span><span style=\" font-size:14pt;\"> page and go through the motor and app configuration pages manually.</span></p><p align=\"center\"><span style=\" font-size:14pt;\">If you like to honor all the work you are free to support me with a<br/></span><a href=\"https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&amp;hosted_button_id=GJ59FXYPUQHUY\"><span style=\" font-size:28pt; font-weight:600; text-decoration: underline; color:#ff0000;\">Donation</span></a></p><p align=\"center\"><a "
                        "href=\"https://github.com/Ackmaniac/vesc_tool\"><span style=\" font-size:12pt; text-decoration: underline; color:#0000ff;\">ACKMANIAC-ESC Tool sources<br/></span></a><a href=\"https://github.com/Ackmaniac/vesc_tool\"><span style=\" text-decoration: underline; color:#0000ff;\"><br/></span></a><a href=\"https://github.com/Ackmaniac/bldc\"><span style=\" font-size:12pt; text-decoration: underline; color:#0000ff;\">Firmware sources</span></a></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        autoConnectButton->setToolTip(QApplication::translate("PageWelcome", "Automatically connect to the ESC using the USB connection.", nullptr));
#endif // QT_NO_TOOLTIP
        autoConnectButton->setText(QApplication::translate("PageWelcome", "Connect", nullptr));
        wizardMotorButton->setText(QApplication::translate("PageWelcome", "Motor Setup Wizard [MOTOR]", nullptr));
        wizardAppButton->setText(QApplication::translate("PageWelcome", "Input Setup Wizard [APP]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageWelcome: public Ui_PageWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWELCOME_H
