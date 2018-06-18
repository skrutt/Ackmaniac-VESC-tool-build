/********************************************************************************
** Form generated from reading UI file 'detectbldc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTBLDC_H
#define UI_DETECTBLDC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectBldc
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *dutyBox;
    QDoubleSpinBox *currentBox;
    QPushButton *applyButton;
    QDoubleSpinBox *erpmBox;
    QPushButton *helpButton;
    QPushButton *runButton;
    QTextBrowser *resultBrowser;

    void setupUi(QWidget *DetectBldc)
    {
        if (DetectBldc->objectName().isEmpty())
            DetectBldc->setObjectName(QStringLiteral("DetectBldc"));
        DetectBldc->resize(509, 140);
        verticalLayout = new QVBoxLayout(DetectBldc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(DetectBldc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dutyBox = new QDoubleSpinBox(groupBox);
        dutyBox->setObjectName(QStringLiteral("dutyBox"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        dutyBox->setFont(font);
        dutyBox->setMaximum(1);
        dutyBox->setSingleStep(0.01);
        dutyBox->setValue(0.05);

        gridLayout->addWidget(dutyBox, 2, 1, 1, 1);

        currentBox = new QDoubleSpinBox(groupBox);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setFont(font);
        currentBox->setMaximum(100);
        currentBox->setValue(5);

        gridLayout->addWidget(currentBox, 0, 1, 1, 1);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon);
        applyButton->setIconSize(QSize(45, 16));

        gridLayout->addWidget(applyButton, 2, 0, 1, 1);

        erpmBox = new QDoubleSpinBox(groupBox);
        erpmBox->setObjectName(QStringLiteral("erpmBox"));
        erpmBox->setFont(font);
        erpmBox->setDecimals(1);
        erpmBox->setMaximum(100000);
        erpmBox->setValue(150);

        gridLayout->addWidget(erpmBox, 1, 1, 1, 1);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon1);

        gridLayout->addWidget(helpButton, 0, 0, 1, 1);

        runButton = new QPushButton(groupBox);
        runButton->setObjectName(QStringLiteral("runButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        runButton->setIcon(icon2);

        gridLayout->addWidget(runButton, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        resultBrowser = new QTextBrowser(groupBox);
        resultBrowser->setObjectName(QStringLiteral("resultBrowser"));
        resultBrowser->setMaximumSize(QSize(16777215, 70));

        horizontalLayout->addWidget(resultBrowser);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DetectBldc);

        QMetaObject::connectSlotsByName(DetectBldc);
    } // setupUi

    void retranslateUi(QWidget *DetectBldc)
    {
        DetectBldc->setWindowTitle(QApplication::translate("DetectBldc", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DetectBldc", "Detect BLDC Parameters", nullptr));
#ifndef QT_NO_TOOLTIP
        dutyBox->setToolTip(QApplication::translate("DetectBldc", "Duty cycle to measure BEMF coupling at", nullptr));
#endif // QT_NO_TOOLTIP
        dutyBox->setPrefix(QApplication::translate("DetectBldc", "D: ", nullptr));
        dutyBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("DetectBldc", "Current to use for spinning up the motor", nullptr));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("DetectBldc", "I ", nullptr));
        currentBox->setSuffix(QApplication::translate("DetectBldc", " A", nullptr));
#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("DetectBldc", "Apply detection results", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        erpmBox->setToolTip(QApplication::translate("DetectBldc", "Min ERPM setting for delay commutation mode to use", nullptr));
#endif // QT_NO_TOOLTIP
        erpmBox->setPrefix(QApplication::translate("DetectBldc", "\317\211 ", nullptr));
        erpmBox->setSuffix(QApplication::translate("DetectBldc", " ERPM", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("DetectBldc", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        runButton->setToolTip(QApplication::translate("DetectBldc", "Start detection", nullptr));
#endif // QT_NO_TOOLTIP
        runButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetectBldc: public Ui_DetectBldc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTBLDC_H
