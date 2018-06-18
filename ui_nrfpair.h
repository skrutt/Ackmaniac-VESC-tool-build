/********************************************************************************
** Form generated from reading UI file 'nrfpair.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NRFPAIR_H
#define UI_NRFPAIR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NrfPair
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QPushButton *startButton;
    QDoubleSpinBox *timeBox;
    QLabel *countLabel;

    void setupUi(QWidget *NrfPair)
    {
        if (NrfPair->objectName().isEmpty())
            NrfPair->setObjectName(QStringLiteral("NrfPair"));
        NrfPair->resize(356, 84);
        verticalLayout = new QVBoxLayout(NrfPair);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(NrfPair);
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

        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);

        horizontalLayout->addWidget(startButton);

        timeBox = new QDoubleSpinBox(groupBox);
        timeBox->setObjectName(QStringLiteral("timeBox"));
        timeBox->setDecimals(1);
        timeBox->setValue(10);

        horizontalLayout->addWidget(timeBox);

        countLabel = new QLabel(groupBox);
        countLabel->setObjectName(QStringLiteral("countLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        countLabel->setFont(font);
        countLabel->setFrameShape(QFrame::Box);
        countLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(countLabel);


        verticalLayout->addWidget(groupBox);


        retranslateUi(NrfPair);

        QMetaObject::connectSlotsByName(NrfPair);
    } // setupUi

    void retranslateUi(QWidget *NrfPair)
    {
        NrfPair->setWindowTitle(QApplication::translate("NrfPair", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("NrfPair", "NRF Pairing", nullptr));
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        startButton->setToolTip(QApplication::translate("NrfPair", "Start Pairing", nullptr));
#endif // QT_NO_TOOLTIP
        startButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        timeBox->setToolTip(QApplication::translate("NrfPair", "Stay in pairing mode for this amount of time", nullptr));
#endif // QT_NO_TOOLTIP
        timeBox->setPrefix(QApplication::translate("NrfPair", "Time: ", nullptr));
        timeBox->setSuffix(QApplication::translate("NrfPair", " s", nullptr));
        countLabel->setText(QApplication::translate("NrfPair", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NrfPair: public Ui_NrfPair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NRFPAIR_H
