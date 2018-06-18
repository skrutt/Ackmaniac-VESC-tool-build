/********************************************************************************
** Form generated from reading UI file 'ppmmap.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPMMAP_H
#define UI_PPMMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaypercentage.h"

QT_BEGIN_NAMESPACE

class Ui_PpmMap
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *controlTypeBox;
    QPushButton *helpButton;
    QPushButton *applyButton;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *minBox;
    QDoubleSpinBox *maxBox;
    QDoubleSpinBox *centerBox;
    QPushButton *resetButton;
    QGridLayout *gridLayout;
    QLabel *label;
    DisplayPercentage *display;
    QLabel *label_2;
    DisplayPercentage *displayVesc;

    void setupUi(QWidget *PpmMap)
    {
        if (PpmMap->objectName().isEmpty())
            PpmMap->setObjectName(QStringLiteral("PpmMap"));
        PpmMap->resize(512, 182);
        verticalLayout_2 = new QVBoxLayout(PpmMap);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(PpmMap);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        controlTypeBox = new QComboBox(groupBox);
        controlTypeBox->setObjectName(QStringLiteral("controlTypeBox"));

        horizontalLayout->addWidget(controlTypeBox);

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

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon1);
        applyButton->setIconSize(QSize(45, 16));

        horizontalLayout->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minBox = new QDoubleSpinBox(groupBox);
        minBox->setObjectName(QStringLiteral("minBox"));
        minBox->setReadOnly(true);
        minBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        minBox->setDecimals(4);
        minBox->setMaximum(100);
        minBox->setSingleStep(0.01);

        horizontalLayout_2->addWidget(minBox);

        maxBox = new QDoubleSpinBox(groupBox);
        maxBox->setObjectName(QStringLiteral("maxBox"));
        maxBox->setReadOnly(true);
        maxBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        maxBox->setDecimals(4);
        maxBox->setMaximum(100);
        maxBox->setSingleStep(0.01);

        horizontalLayout_2->addWidget(maxBox);

        centerBox = new QDoubleSpinBox(groupBox);
        centerBox->setObjectName(QStringLiteral("centerBox"));
        centerBox->setReadOnly(true);
        centerBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        centerBox->setDecimals(4);

        horizontalLayout_2->addWidget(centerBox);

        resetButton = new QPushButton(groupBox);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        sizePolicy.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Restart-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon2);

        horizontalLayout_2->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        display = new DisplayPercentage(groupBox);
        display->setObjectName(QStringLiteral("display"));
        display->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(display, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        displayVesc = new DisplayPercentage(groupBox);
        displayVesc->setObjectName(QStringLiteral("displayVesc"));
        displayVesc->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(displayVesc, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(PpmMap);

        QMetaObject::connectSlotsByName(PpmMap);
    } // setupUi

    void retranslateUi(QWidget *PpmMap)
    {
        PpmMap->setWindowTitle(QApplication::translate("PpmMap", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("PpmMap", "PPM Pulselength Mapping", nullptr));
#ifndef QT_NO_TOOLTIP
        controlTypeBox->setToolTip(QApplication::translate("PpmMap", "Choose the control type. Some control types have centered input, some don't.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("PpmMap", "Show help", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("PpmMap", "Apply min, max and center to ESC Tool configuration", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        minBox->setToolTip(QApplication::translate("PpmMap", "Measured minimum pulselength", nullptr));
#endif // QT_NO_TOOLTIP
        minBox->setPrefix(QApplication::translate("PpmMap", "Min: ", nullptr));
        minBox->setSuffix(QApplication::translate("PpmMap", " ms", nullptr));
#ifndef QT_NO_TOOLTIP
        maxBox->setToolTip(QApplication::translate("PpmMap", "Measured maximum pulselength", nullptr));
#endif // QT_NO_TOOLTIP
        maxBox->setPrefix(QApplication::translate("PpmMap", "Max: ", nullptr));
        maxBox->setSuffix(QApplication::translate("PpmMap", " ms", nullptr));
        centerBox->setPrefix(QApplication::translate("PpmMap", "Center: ", nullptr));
        centerBox->setSuffix(QApplication::translate("PpmMap", " ms", nullptr));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("PpmMap", "Reset min and max", nullptr));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("PpmMap", "ESC Tool preview with the current settings.", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PpmMap", "ESC Tool", nullptr));
#ifndef QT_NO_TOOLTIP
        display->setToolTip(QApplication::translate("PpmMap", "ESC Tool preview with the current settings.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("PpmMap", "Current ESC output. Will be updated after writing the app configuration.", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PpmMap", "from ESC", nullptr));
#ifndef QT_NO_TOOLTIP
        displayVesc->setToolTip(QApplication::translate("PpmMap", "Current ESC output. Will be updated after writing the app configuration.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PpmMap: public Ui_PpmMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPMMAP_H
