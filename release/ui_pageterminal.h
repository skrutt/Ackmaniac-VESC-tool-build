/********************************************************************************
** Form generated from reading UI file 'pageterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGETERMINAL_H
#define UI_PAGETERMINAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageTerminal
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *terminalBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QLineEdit *terminalEdit;
    QPushButton *sendButton;
    QPushButton *clearButton;

    void setupUi(QWidget *PageTerminal)
    {
        if (PageTerminal->objectName().isEmpty())
            PageTerminal->setObjectName(QStringLiteral("PageTerminal"));
        PageTerminal->resize(632, 452);
        verticalLayout = new QVBoxLayout(PageTerminal);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        terminalBrowser = new QTextBrowser(PageTerminal);
        terminalBrowser->setObjectName(QStringLiteral("terminalBrowser"));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans Mono"));
        terminalBrowser->setFont(font);
        terminalBrowser->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout->addWidget(terminalBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        helpButton = new QPushButton(PageTerminal);
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

        terminalEdit = new QLineEdit(PageTerminal);
        terminalEdit->setObjectName(QStringLiteral("terminalEdit"));

        horizontalLayout->addWidget(terminalEdit);

        sendButton = new QPushButton(PageTerminal);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Send File-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon1);

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(PageTerminal);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);

        horizontalLayout->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageTerminal);
        QObject::connect(clearButton, SIGNAL(clicked()), terminalBrowser, SLOT(clear()));
        QObject::connect(terminalEdit, SIGNAL(returnPressed()), sendButton, SLOT(click()));

        QMetaObject::connectSlotsByName(PageTerminal);
    } // setupUi

    void retranslateUi(QWidget *PageTerminal)
    {
        PageTerminal->setWindowTitle(QApplication::translate("PageTerminal", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("PageTerminal", "Send help command to ESC", nullptr));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("PageTerminal", "Send command", nullptr));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("PageTerminal", "Clear terminal", nullptr));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageTerminal: public Ui_PageTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGETERMINAL_H
