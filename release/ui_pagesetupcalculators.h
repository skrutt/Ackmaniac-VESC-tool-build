/********************************************************************************
** Form generated from reading UI file 'pagesetupcalculators.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESETUPCALCULATORS_H
#define UI_PAGESETUPCALCULATORS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageSetupCalculators
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    VTextBrowser *setupText;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addSetupButton;
    QPushButton *removeSetupButton;

    void setupUi(QWidget *PageSetupCalculators)
    {
        if (PageSetupCalculators->objectName().isEmpty())
            PageSetupCalculators->setObjectName(QStringLiteral("PageSetupCalculators"));
        PageSetupCalculators->resize(734, 536);
        verticalLayout_2 = new QVBoxLayout(PageSetupCalculators);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(PageSetupCalculators);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        setupText = new VTextBrowser(splitter);
        setupText->setObjectName(QStringLiteral("setupText"));
        splitter->addWidget(setupText);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addSetupButton = new QPushButton(widget);
        addSetupButton->setObjectName(QStringLiteral("addSetupButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Plus Math-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        addSetupButton->setIcon(icon);

        horizontalLayout->addWidget(addSetupButton);

        removeSetupButton = new QPushButton(widget);
        removeSetupButton->setObjectName(QStringLiteral("removeSetupButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeSetupButton->setIcon(icon1);

        horizontalLayout->addWidget(removeSetupButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(PageSetupCalculators);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PageSetupCalculators);
    } // setupUi

    void retranslateUi(QWidget *PageSetupCalculators)
    {
        PageSetupCalculators->setWindowTitle(QApplication::translate("PageSetupCalculators", "Form", nullptr));
        addSetupButton->setText(QApplication::translate("PageSetupCalculators", "Add Setup", nullptr));
        removeSetupButton->setText(QApplication::translate("PageSetupCalculators", "Remove Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSetupCalculators: public Ui_PageSetupCalculators {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESETUPCALCULATORS_H
