/********************************************************************************
** Form generated from reading UI file 'detectfochall.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTFOCHALL_H
#define UI_DETECTFOCHALL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectFocHall
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpButton;
    QDoubleSpinBox *currentBox;
    QPushButton *startButton;
    QPushButton *applyButton;
    QHBoxLayout *horizontalLayout;
    QSpinBox *hall0Box;
    QSpinBox *hall1Box;
    QSpinBox *hall2Box;
    QSpinBox *hall3Box;
    QSpinBox *hall4Box;
    QSpinBox *hall5Box;
    QSpinBox *hall6Box;
    QSpinBox *hall7Box;

    void setupUi(QWidget *DetectFocHall)
    {
        if (DetectFocHall->objectName().isEmpty())
            DetectFocHall->setObjectName(QStringLiteral("DetectFocHall"));
        DetectFocHall->resize(466, 100);
        verticalLayout = new QVBoxLayout(DetectFocHall);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(DetectFocHall);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);

        horizontalLayout_2->addWidget(helpButton);

        currentBox = new QDoubleSpinBox(groupBox);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setValue(10);

        horizontalLayout_2->addWidget(currentBox);

        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);

        horizontalLayout_2->addWidget(startButton);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon2);
        applyButton->setIconSize(QSize(45, 16));

        horizontalLayout_2->addWidget(applyButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hall0Box = new QSpinBox(groupBox);
        hall0Box->setObjectName(QStringLiteral("hall0Box"));
        hall0Box->setReadOnly(true);
        hall0Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall0Box->setMaximum(255);

        horizontalLayout->addWidget(hall0Box);

        hall1Box = new QSpinBox(groupBox);
        hall1Box->setObjectName(QStringLiteral("hall1Box"));
        hall1Box->setReadOnly(true);
        hall1Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall1Box->setMaximum(255);

        horizontalLayout->addWidget(hall1Box);

        hall2Box = new QSpinBox(groupBox);
        hall2Box->setObjectName(QStringLiteral("hall2Box"));
        hall2Box->setReadOnly(true);
        hall2Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall2Box->setMaximum(255);

        horizontalLayout->addWidget(hall2Box);

        hall3Box = new QSpinBox(groupBox);
        hall3Box->setObjectName(QStringLiteral("hall3Box"));
        hall3Box->setReadOnly(true);
        hall3Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall3Box->setMaximum(255);

        horizontalLayout->addWidget(hall3Box);

        hall4Box = new QSpinBox(groupBox);
        hall4Box->setObjectName(QStringLiteral("hall4Box"));
        hall4Box->setReadOnly(true);
        hall4Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall4Box->setMaximum(255);

        horizontalLayout->addWidget(hall4Box);

        hall5Box = new QSpinBox(groupBox);
        hall5Box->setObjectName(QStringLiteral("hall5Box"));
        hall5Box->setReadOnly(true);
        hall5Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall5Box->setMaximum(255);

        horizontalLayout->addWidget(hall5Box);

        hall6Box = new QSpinBox(groupBox);
        hall6Box->setObjectName(QStringLiteral("hall6Box"));
        hall6Box->setReadOnly(true);
        hall6Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall6Box->setMaximum(255);

        horizontalLayout->addWidget(hall6Box);

        hall7Box = new QSpinBox(groupBox);
        hall7Box->setObjectName(QStringLiteral("hall7Box"));
        hall7Box->setReadOnly(true);
        hall7Box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hall7Box->setMaximum(255);

        horizontalLayout->addWidget(hall7Box);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DetectFocHall);

        QMetaObject::connectSlotsByName(DetectFocHall);
    } // setupUi

    void retranslateUi(QWidget *DetectFocHall)
    {
        DetectFocHall->setWindowTitle(QApplication::translate("DetectFocHall", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DetectFocHall", "Detect Hall Sensors", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("DetectFocHall", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("DetectFocHall", "Open loop current to turn the motor with", nullptr));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("DetectFocHall", "I: ", nullptr));
        currentBox->setSuffix(QApplication::translate("DetectFocHall", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        startButton->setToolTip(QApplication::translate("DetectFocHall", "Start detection", nullptr));
#endif // QT_NO_TOOLTIP
        startButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("DetectFocHall", "Apply detection result", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        hall0Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 0 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall1Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 1 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall2Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 2 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall3Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 3 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall4Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 4 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall5Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 5 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall6Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 6 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        hall7Box->setToolTip(QApplication::translate("DetectFocHall", "Hall table 7 position (0 - 200, 255 = not used)", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DetectFocHall: public Ui_DetectFocHall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTFOCHALL_H
