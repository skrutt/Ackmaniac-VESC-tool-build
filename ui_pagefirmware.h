/********************************************************************************
** Form generated from reading UI file 'pagefirmware.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEFIRMWARE_H
#define UI_PAGEFIRMWARE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaypercentage.h"

QT_BEGIN_NAMESPACE

class Ui_PageFirmware
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *fwTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QListWidget *hwList;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QListWidget *fwList;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *showNonDefaultBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *changelogButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *fwEdit;
    QPushButton *chooseButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QListWidget *blList;
    QHBoxLayout *horizontalLayout_3;
    DisplayPercentage *display;
    QPushButton *cancelButton;
    QPushButton *uploadButton;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *currentLabel;
    QPushButton *readVersionButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *supportedLabel;

    void setupUi(QWidget *PageFirmware)
    {
        if (PageFirmware->objectName().isEmpty())
            PageFirmware->setObjectName(QStringLiteral("PageFirmware"));
        PageFirmware->resize(653, 471);
        verticalLayout_4 = new QVBoxLayout(PageFirmware);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(PageFirmware);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        fwTabWidget = new QTabWidget(groupBox);
        fwTabWidget->setObjectName(QStringLiteral("fwTabWidget"));
        fwTabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        hwList = new QListWidget(tab);
        hwList->setObjectName(QStringLiteral("hwList"));

        verticalLayout_5->addWidget(hwList);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        fwList = new QListWidget(tab);
        fwList->setObjectName(QStringLiteral("fwList"));

        verticalLayout_6->addWidget(fwList);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        showNonDefaultBox = new QCheckBox(tab);
        showNonDefaultBox->setObjectName(QStringLiteral("showNonDefaultBox"));

        horizontalLayout_6->addWidget(showNonDefaultBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        changelogButton = new QPushButton(tab);
        changelogButton->setObjectName(QStringLiteral("changelogButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/About-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        changelogButton->setIcon(icon);

        horizontalLayout_6->addWidget(changelogButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        fwTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        fwEdit = new QLineEdit(tab_2);
        fwEdit->setObjectName(QStringLiteral("fwEdit"));

        horizontalLayout_4->addWidget(fwEdit);

        chooseButton = new QPushButton(tab_2);
        chooseButton->setObjectName(QStringLiteral("chooseButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseButton->sizePolicy().hasHeightForWidth());
        chooseButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        chooseButton->setIcon(icon1);

        horizontalLayout_4->addWidget(chooseButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 249, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        fwTabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        blList = new QListWidget(tab_3);
        blList->setObjectName(QStringLiteral("blList"));

        verticalLayout_8->addWidget(blList);

        fwTabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(fwTabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        display = new DisplayPercentage(groupBox);
        display->setObjectName(QStringLiteral("display"));

        horizontalLayout_3->addWidget(display);

        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon2);

        horizontalLayout_3->addWidget(cancelButton);

        uploadButton = new QPushButton(groupBox);
        uploadButton->setObjectName(QStringLiteral("uploadButton"));
        sizePolicy.setHeightForWidth(uploadButton->sizePolicy().hasHeightForWidth());
        uploadButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/Download-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        uploadButton->setIcon(icon3);

        horizontalLayout_3->addWidget(uploadButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(PageFirmware);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        currentLabel = new QLabel(groupBox_2);
        currentLabel->setObjectName(QStringLiteral("currentLabel"));

        horizontalLayout->addWidget(currentLabel);

        readVersionButton = new QPushButton(groupBox_2);
        readVersionButton->setObjectName(QStringLiteral("readVersionButton"));
        sizePolicy.setHeightForWidth(readVersionButton->sizePolicy().hasHeightForWidth());
        readVersionButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readVersionButton->setIcon(icon4);

        horizontalLayout->addWidget(readVersionButton);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PageFirmware);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        supportedLabel = new QLabel(groupBox_3);
        supportedLabel->setObjectName(QStringLiteral("supportedLabel"));

        verticalLayout_2->addWidget(supportedLabel);


        horizontalLayout_2->addWidget(groupBox_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(PageFirmware);

        fwTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageFirmware);
    } // setupUi

    void retranslateUi(QWidget *PageFirmware)
    {
        PageFirmware->setWindowTitle(QApplication::translate("PageFirmware", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("PageFirmware", "Install New Firmware", nullptr));
        label->setText(QApplication::translate("PageFirmware", "Hardware Version", nullptr));
        label_2->setText(QApplication::translate("PageFirmware", "Firmware", nullptr));
#ifndef QT_NO_TOOLTIP
        showNonDefaultBox->setToolTip(QApplication::translate("PageFirmware", "Show firmwares with non-default compilation options", nullptr));
#endif // QT_NO_TOOLTIP
        showNonDefaultBox->setText(QApplication::translate("PageFirmware", "Show non-default firmwares", nullptr));
#ifndef QT_NO_TOOLTIP
        changelogButton->setToolTip(QApplication::translate("PageFirmware", "Show firmware changelog", nullptr));
#endif // QT_NO_TOOLTIP
        changelogButton->setText(QString());
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab), QApplication::translate("PageFirmware", "Included Files", nullptr));
#ifndef QT_NO_TOOLTIP
        chooseButton->setToolTip(QApplication::translate("PageFirmware", "Choose file...", nullptr));
#endif // QT_NO_TOOLTIP
        chooseButton->setText(QString());
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab_2), QApplication::translate("PageFirmware", "Custom File", nullptr));
        fwTabWidget->setTabText(fwTabWidget->indexOf(tab_3), QApplication::translate("PageFirmware", "Bootloader", nullptr));
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("PageFirmware", "Cancel upload", nullptr));
#endif // QT_NO_TOOLTIP
        cancelButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        uploadButton->setToolTip(QApplication::translate("PageFirmware", "Update firmware on the connected ESC", nullptr));
#endif // QT_NO_TOOLTIP
        uploadButton->setText(QString());
        groupBox_2->setTitle(QApplication::translate("PageFirmware", "ESC Firmware, Hardware and UUID", nullptr));
        currentLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        readVersionButton->setToolTip(QApplication::translate("PageFirmware", "Read firmware version", nullptr));
#endif // QT_NO_TOOLTIP
        readVersionButton->setText(QString());
        groupBox_3->setTitle(QApplication::translate("PageFirmware", "Supported Firmwares", nullptr));
        supportedLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageFirmware: public Ui_PageFirmware {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEFIRMWARE_H
