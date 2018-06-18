/********************************************************************************
** Form generated from reading UI file 'parameditint.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITINT_H
#define UI_PARAMEDITINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditInt
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mainLayout;
    QPushButton *readButton;
    QPushButton *readDefaultButton;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditInt)
    {
        if (ParamEditInt->objectName().isEmpty())
            ParamEditInt->setObjectName(QStringLiteral("ParamEditInt"));
        ParamEditInt->resize(86, 26);
        verticalLayout = new QVBoxLayout(ParamEditInt);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        readButton = new QPushButton(ParamEditInt);
        readButton->setObjectName(QStringLiteral("readButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readButton->setIcon(icon);

        mainLayout->addWidget(readButton);

        readDefaultButton = new QPushButton(ParamEditInt);
        readDefaultButton->setObjectName(QStringLiteral("readDefaultButton"));
        sizePolicy.setHeightForWidth(readDefaultButton->sizePolicy().hasHeightForWidth());
        readDefaultButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Data Backup-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readDefaultButton->setIcon(icon1);

        mainLayout->addWidget(readDefaultButton);

        helpButton = new QPushButton(ParamEditInt);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon2);

        mainLayout->addWidget(helpButton);


        verticalLayout->addLayout(mainLayout);


        retranslateUi(ParamEditInt);

        QMetaObject::connectSlotsByName(ParamEditInt);
    } // setupUi

    void retranslateUi(QWidget *ParamEditInt)
    {
        ParamEditInt->setWindowTitle(QApplication::translate("ParamEditInt", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("ParamEditInt", "Read current setting", nullptr));
#endif // QT_NO_TOOLTIP
        readButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        readDefaultButton->setToolTip(QApplication::translate("ParamEditInt", "Read default setting", nullptr));
#endif // QT_NO_TOOLTIP
        readDefaultButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("ParamEditInt", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditInt: public Ui_ParamEditInt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITINT_H
