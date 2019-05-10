#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

#include "LoginState.h"
#include "ExistingUserState.h"
#include "NewUserState.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_login_button_clicked();

    void on_create_new_user_button_clicked();

    void on_cancel_button_clicked();

signals:
    void send_mapfile(QString file_path);

    void is_user_admin(bool is_admin);

private:
    Ui::LoginDialog *ui;

    LoginState * exisiting_user_state;
    LoginState * new_user_state;
    LoginState * current_state;

    inline void ShowCancelButton(bool show);
};

#endif // LOGINDIALOG_H
