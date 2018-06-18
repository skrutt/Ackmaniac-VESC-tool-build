/********************************************************************************
** Form generated from reading UI file 'pagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESETTINGS_H
#define UI_PAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *uiScaleBox;
    QCheckBox *uiAutoScaleBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PageSettings)
    {
        if (PageSettings->objectName().isEmpty())
            PageSettings->setObjectName(QStringLiteral("PageSettings"));
        PageSettings->resize(745, 352);
        verticalLayout_2 = new QVBoxLayout(PageSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(PageSettings);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        uiScaleBox = new QDoubleSpinBox(frame);
        uiScaleBox->setObjectName(QStringLiteral("uiScaleBox"));
        uiScaleBox->setMinimum(1);
        uiScaleBox->setMaximum(3);
        uiScaleBox->setSingleStep(0.1);

        horizontalLayout->addWidget(uiScaleBox);

        uiAutoScaleBox = new QCheckBox(frame);
        uiAutoScaleBox->setObjectName(QStringLiteral("uiAutoScaleBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiAutoScaleBox->sizePolicy().hasHeightForWidth());
        uiAutoScaleBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(uiAutoScaleBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);


        retranslateUi(PageSettings);

        QMetaObject::connectSlotsByName(PageSettings);
    } // setupUi

    void retranslateUi(QWidget *PageSettings)
    {
        PageSettings->setWindowTitle(QApplication::translate("PageSettings", "Form", nullptr));
        label->setText(QApplication::translate("PageSettings", "UI Scale Factor (restart required)", nullptr));
#ifndef QT_NO_TOOLTIP
        uiScaleBox->setToolTip(QApplication::translate("PageSettings", "<html><head/><body><p>Scale the user intefrace with this factor. Useful for high resolution monitors. ESC Tool must be restarted for this setting to take effect.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        uiAutoScaleBox->setToolTip(QApplication::translate("PageSettings", "<html><head/><body><p>Try to determine the scaling factor automatically from the screen resolution and the system font settings. ESC Tool must be restarted for this setting to take effect.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        uiAutoScaleBox->setText(QApplication::translate("PageSettings", "Auto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSettings: public Ui_PageSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESETTINGS_H
