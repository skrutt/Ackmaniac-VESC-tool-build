/********************************************************************************
** Form generated from reading UI file 'detectfocencoder.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTFOCENCODER_H
#define UI_DETECTFOCENCODER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectFocEncoder
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QDoubleSpinBox *currentBox;
    QPushButton *startButton;
    QDoubleSpinBox *offsetBox;
    QDoubleSpinBox *ratioBox;
    QComboBox *invertedBox;
    QPushButton *applyButton;

    void setupUi(QWidget *DetectFocEncoder)
    {
        if (DetectFocEncoder->objectName().isEmpty())
            DetectFocEncoder->setObjectName(QStringLiteral("DetectFocEncoder"));
        DetectFocEncoder->resize(605, 66);
        verticalLayout = new QVBoxLayout(DetectFocEncoder);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(DetectFocEncoder);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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

        horizontalLayout->addWidget(helpButton);

        currentBox = new QDoubleSpinBox(groupBox);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setValue(10);

        horizontalLayout->addWidget(currentBox);

        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);

        horizontalLayout->addWidget(startButton);

        offsetBox = new QDoubleSpinBox(groupBox);
        offsetBox->setObjectName(QStringLiteral("offsetBox"));
        offsetBox->setReadOnly(true);
        offsetBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        offsetBox->setDecimals(1);
        offsetBox->setMaximum(360);
        offsetBox->setValue(0);

        horizontalLayout->addWidget(offsetBox);

        ratioBox = new QDoubleSpinBox(groupBox);
        ratioBox->setObjectName(QStringLiteral("ratioBox"));
        ratioBox->setReadOnly(true);
        ratioBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ratioBox->setDecimals(1);
        ratioBox->setMaximum(100000);
        ratioBox->setValue(0);

        horizontalLayout->addWidget(ratioBox);

        invertedBox = new QComboBox(groupBox);
        invertedBox->addItem(QString());
        invertedBox->addItem(QString());
        invertedBox->setObjectName(QStringLiteral("invertedBox"));
        invertedBox->setEnabled(true);

        horizontalLayout->addWidget(invertedBox);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon2);
        applyButton->setIconSize(QSize(45, 16));

        horizontalLayout->addWidget(applyButton);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);

        verticalLayout->addWidget(groupBox);


        retranslateUi(DetectFocEncoder);

        QMetaObject::connectSlotsByName(DetectFocEncoder);
    } // setupUi

    void retranslateUi(QWidget *DetectFocEncoder)
    {
        DetectFocEncoder->setWindowTitle(QApplication::translate("DetectFocEncoder", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DetectFocEncoder", "Detect Encoder", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("DetectFocEncoder", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("DetectFocEncoder", "Open loop current to turn the motor with", nullptr));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("DetectFocEncoder", "I: ", nullptr));
        currentBox->setSuffix(QApplication::translate("DetectFocEncoder", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        startButton->setToolTip(QApplication::translate("DetectFocEncoder", "Start detection", nullptr));
#endif // QT_NO_TOOLTIP
        startButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        offsetBox->setToolTip(QApplication::translate("DetectFocEncoder", "Encoder offset", nullptr));
#endif // QT_NO_TOOLTIP
        offsetBox->setPrefix(QApplication::translate("DetectFocEncoder", "Offset: ", nullptr));
        offsetBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        ratioBox->setToolTip(QApplication::translate("DetectFocEncoder", "Encoder ratio", nullptr));
#endif // QT_NO_TOOLTIP
        ratioBox->setPrefix(QApplication::translate("DetectFocEncoder", "Ratio: ", nullptr));
        ratioBox->setSuffix(QString());
        invertedBox->setItemText(0, QApplication::translate("DetectFocEncoder", "Not Inverted", nullptr));
        invertedBox->setItemText(1, QApplication::translate("DetectFocEncoder", "Inverted", nullptr));

#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("DetectFocEncoder", "Apply detection result", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetectFocEncoder: public Ui_DetectFocEncoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTFOCENCODER_H
