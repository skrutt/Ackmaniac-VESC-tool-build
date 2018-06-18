/********************************************************************************
** Form generated from reading UI file 'pagemotorinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMOTORINFO_H
#define UI_PAGEMOTORINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/mrichtextedit.h"
#include "widgets/paramtable.h"

QT_BEGIN_NAMESPACE

class Ui_PageMotorInfo
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    ParamTable *generalTab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    MRichTextEdit *descriptionEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *descriptionHelpButton;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    ParamTable *qualityTab;
    MRichTextEdit *qualityEdit;

    void setupUi(QWidget *PageMotorInfo)
    {
        if (PageMotorInfo->objectName().isEmpty())
            PageMotorInfo->setObjectName(QStringLiteral("PageMotorInfo"));
        PageMotorInfo->resize(760, 498);
        verticalLayout = new QVBoxLayout(PageMotorInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageMotorInfo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        generalTab = new ParamTable(tab);
        generalTab->setObjectName(QStringLiteral("generalTab"));

        verticalLayout_3->addWidget(generalTab);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        descriptionEdit = new MRichTextEdit(tab_2);
        descriptionEdit->setObjectName(QStringLiteral("descriptionEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionEdit->sizePolicy().hasHeightForWidth());
        descriptionEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(descriptionEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        descriptionHelpButton = new QPushButton(tab_2);
        descriptionHelpButton->setObjectName(QStringLiteral("descriptionHelpButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        descriptionHelpButton->setIcon(icon);

        horizontalLayout->addWidget(descriptionHelpButton);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(tab_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        qualityTab = new ParamTable(splitter);
        qualityTab->setObjectName(QStringLiteral("qualityTab"));
        splitter->addWidget(qualityTab);
        qualityEdit = new MRichTextEdit(splitter);
        qualityEdit->setObjectName(QStringLiteral("qualityEdit"));
        splitter->addWidget(qualityEdit);

        verticalLayout_4->addWidget(splitter);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(PageMotorInfo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMotorInfo);
    } // setupUi

    void retranslateUi(QWidget *PageMotorInfo)
    {
        PageMotorInfo->setWindowTitle(QApplication::translate("PageMotorInfo", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageMotorInfo", "General", nullptr));
        descriptionHelpButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageMotorInfo", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageMotorInfo", "Quality", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMotorInfo: public Ui_PageMotorInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMOTORINFO_H
