/********************************************************************************
** Form generated from reading UI file 'sendemail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDEMAIL_H
#define UI_SENDEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendEmail
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *host;
    QLabel *label_2;
    QSpinBox *port;
    QCheckBox *ssl;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QCheckBox *auth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *username;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *sender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *recipients;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *subject;
    QTextEdit *texteditor;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QPushButton *addAttachment;
    QListWidget *attachments;
    QPushButton *sendEmail;

    void setupUi(QWidget *SendEmail)
    {
        if (SendEmail->objectName().isEmpty())
            SendEmail->setObjectName(QStringLiteral("SendEmail"));
        SendEmail->resize(710, 556);
        layoutWidget = new QWidget(SendEmail);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 694, 534));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(87, 17));
        label->setMaximumSize(QSize(87, 17));

        horizontalLayout->addWidget(label);

        host = new QLineEdit(layoutWidget);
        host->setObjectName(QStringLiteral("host"));

        horizontalLayout->addWidget(host);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(34, 17));
        label_2->setMaximumSize(QSize(34, 17));

        horizontalLayout->addWidget(label_2);

        port = new QSpinBox(layoutWidget);
        port->setObjectName(QStringLiteral("port"));
        port->setMaximum(99999);

        horizontalLayout->addWidget(port);

        ssl = new QCheckBox(layoutWidget);
        ssl->setObjectName(QStringLiteral("ssl"));

        horizontalLayout->addWidget(ssl);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        auth = new QCheckBox(layoutWidget);
        auth->setObjectName(QStringLiteral("auth"));
        auth->setMinimumSize(QSize(21, 21));
        auth->setMaximumSize(QSize(21, 21));
        auth->setTristate(false);

        horizontalLayout_3->addWidget(auth);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(211, 27));
        username->setMaximumSize(QSize(211, 27));

        horizontalLayout_4->addWidget(username);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(password);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(81, 0));
        label_8->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_2->addWidget(label_8);

        sender = new QLineEdit(layoutWidget);
        sender->setObjectName(QStringLiteral("sender"));

        horizontalLayout_2->addWidget(sender);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(81, 0));
        label_9->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_5->addWidget(label_9);

        recipients = new QLineEdit(layoutWidget);
        recipients->setObjectName(QStringLiteral("recipients"));

        horizontalLayout_5->addWidget(recipients);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(81, 0));
        label_10->setMaximumSize(QSize(81, 16777215));

        horizontalLayout_7->addWidget(label_10);

        subject = new QLineEdit(layoutWidget);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout_7->addWidget(subject);


        verticalLayout_2->addLayout(horizontalLayout_7);

        texteditor = new QTextEdit(layoutWidget);
        texteditor->setObjectName(QStringLiteral("texteditor"));
        texteditor->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(texteditor);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        addAttachment = new QPushButton(layoutWidget);
        addAttachment->setObjectName(QStringLiteral("addAttachment"));
        addAttachment->setMinimumSize(QSize(97, 0));
        addAttachment->setMaximumSize(QSize(97, 16777215));

        horizontalLayout_8->addWidget(addAttachment);


        verticalLayout->addLayout(horizontalLayout_8);

        attachments = new QListWidget(layoutWidget);
        attachments->setObjectName(QStringLiteral("attachments"));
        attachments->setMaximumSize(QSize(16777215, 64));

        verticalLayout->addWidget(attachments);


        verticalLayout_2->addLayout(verticalLayout);

        sendEmail = new QPushButton(layoutWidget);
        sendEmail->setObjectName(QStringLiteral("sendEmail"));

        verticalLayout_2->addWidget(sendEmail);


        retranslateUi(SendEmail);

        QMetaObject::connectSlotsByName(SendEmail);
    } // setupUi

    void retranslateUi(QWidget *SendEmail)
    {
        SendEmail->setWindowTitle(QApplication::translate("SendEmail", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SendEmail", "SMTP server:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SendEmail", "Port:", Q_NULLPTR));
        ssl->setText(QApplication::translate("SendEmail", "SSL", Q_NULLPTR));
        label_4->setText(QApplication::translate("SendEmail", "Use authentication", Q_NULLPTR));
        auth->setText(QString());
        label_5->setText(QApplication::translate("SendEmail", "Username:", Q_NULLPTR));
        label_6->setText(QApplication::translate("SendEmail", "Password:", Q_NULLPTR));
        label_7->setText(QApplication::translate("SendEmail", "Mime E-mail", Q_NULLPTR));
        label_8->setText(QApplication::translate("SendEmail", "Sender:", Q_NULLPTR));
        label_9->setText(QApplication::translate("SendEmail", "Recipients:", Q_NULLPTR));
        label_10->setText(QApplication::translate("SendEmail", "Subject:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SendEmail", "Attachments:", Q_NULLPTR));
        addAttachment->setText(QApplication::translate("SendEmail", "Add File", Q_NULLPTR));
        sendEmail->setText(QApplication::translate("SendEmail", "Send Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendEmail: public Ui_SendEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAIL_H
