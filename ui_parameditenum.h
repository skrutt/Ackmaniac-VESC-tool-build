/********************************************************************************
** Form generated from reading UI file 'parameditenum.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITENUM_H
#define UI_PARAMEDITENUM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditEnum
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *valueBox;
    QPushButton *readButton;
    QPushButton *readDefaultButton;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditEnum)
    {
        if (ParamEditEnum->objectName().isEmpty())
            ParamEditEnum->setObjectName(QStringLiteral("ParamEditEnum"));
        ParamEditEnum->resize(302, 29);
        horizontalLayout = new QHBoxLayout(ParamEditEnum);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valueBox = new QComboBox(ParamEditEnum);
        valueBox->setObjectName(QStringLiteral("valueBox"));

        horizontalLayout->addWidget(valueBox);

        readButton = new QPushButton(ParamEditEnum);
        readButton->setObjectName(QStringLiteral("readButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(readButton->sizePolicy().hasHeightForWidth());
        readButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Upload-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readButton->setIcon(icon);

        horizontalLayout->addWidget(readButton);

        readDefaultButton = new QPushButton(ParamEditEnum);
        readDefaultButton->setObjectName(QStringLiteral("readDefaultButton"));
        sizePolicy.setHeightForWidth(readDefaultButton->sizePolicy().hasHeightForWidth());
        readDefaultButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Data Backup-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        readDefaultButton->setIcon(icon1);

        horizontalLayout->addWidget(readDefaultButton);

        helpButton = new QPushButton(ParamEditEnum);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon2);

        horizontalLayout->addWidget(helpButton);


        retranslateUi(ParamEditEnum);

        QMetaObject::connectSlotsByName(ParamEditEnum);
    } // setupUi

    void retranslateUi(QWidget *ParamEditEnum)
    {
        ParamEditEnum->setWindowTitle(QApplication::translate("ParamEditEnum", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("ParamEditEnum", "Read current setting", nullptr));
#endif // QT_NO_TOOLTIP
        readButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        readDefaultButton->setToolTip(QApplication::translate("ParamEditEnum", "Read default setting", nullptr));
#endif // QT_NO_TOOLTIP
        readDefaultButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("ParamEditEnum", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditEnum: public Ui_ParamEditEnum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITENUM_H
