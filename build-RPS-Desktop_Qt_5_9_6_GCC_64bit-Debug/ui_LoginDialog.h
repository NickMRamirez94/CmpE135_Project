/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *info_label;
    QFormLayout *formLayout;
    QLabel *username_label;
    QLineEdit *username_line_edit;
    QLabel *password_label;
    QLineEdit *password_line_edit;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_button;
    QPushButton *create_new_user_button;
    QPushButton *cancel_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(339, 267);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        info_label = new QLabel(LoginDialog);
        info_label->setObjectName(QStringLiteral("info_label"));
        info_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(info_label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        username_label = new QLabel(LoginDialog);
        username_label->setObjectName(QStringLiteral("username_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, username_label);

        username_line_edit = new QLineEdit(LoginDialog);
        username_line_edit->setObjectName(QStringLiteral("username_line_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username_line_edit);

        password_label = new QLabel(LoginDialog);
        password_label->setObjectName(QStringLiteral("password_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, password_label);

        password_line_edit = new QLineEdit(LoginDialog);
        password_line_edit->setObjectName(QStringLiteral("password_line_edit"));
        password_line_edit->setFocusPolicy(Qt::StrongFocus);
        password_line_edit->setContextMenuPolicy(Qt::DefaultContextMenu);
        password_line_edit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password_line_edit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(3, QFormLayout::LabelRole, horizontalSpacer);

        login_button = new QPushButton(LoginDialog);
        login_button->setObjectName(QStringLiteral("login_button"));

        formLayout->setWidget(3, QFormLayout::FieldRole, login_button);

        create_new_user_button = new QPushButton(LoginDialog);
        create_new_user_button->setObjectName(QStringLiteral("create_new_user_button"));

        formLayout->setWidget(5, QFormLayout::FieldRole, create_new_user_button);

        cancel_button = new QPushButton(LoginDialog);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));

        formLayout->setWidget(7, QFormLayout::FieldRole, cancel_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(4, QFormLayout::FieldRole, horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(2, QFormLayout::FieldRole, horizontalSpacer_3);


        verticalLayout->addLayout(formLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        info_label->setText(QApplication::translate("LoginDialog", "Please enter your login information below", Q_NULLPTR));
        username_label->setText(QApplication::translate("LoginDialog", "Username:", Q_NULLPTR));
        password_label->setText(QApplication::translate("LoginDialog", "Password:", Q_NULLPTR));
        login_button->setText(QApplication::translate("LoginDialog", "Login", Q_NULLPTR));
        create_new_user_button->setText(QApplication::translate("LoginDialog", "Create New User", Q_NULLPTR));
        cancel_button->setText(QApplication::translate("LoginDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
