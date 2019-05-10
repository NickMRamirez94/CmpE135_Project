#include "LoginDialog.h"
#include "ui_LoginDialog.h"
#include "Utilities.h"

#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    exisiting_user_state = new ExistingUserState(ui->username_label, ui->password_label, ui->info_label);
    new_user_state = new NewUserState(ui->username_label, ui->password_label, ui->info_label);
    current_state = exisiting_user_state;
    ShowCancelButton(false);
}

LoginDialog::~LoginDialog()
{
    if(exisiting_user_state != nullptr && new_user_state != nullptr)
    {
        delete exisiting_user_state;
        delete new_user_state;
    }
    delete ui;
}

void LoginDialog::on_login_button_clicked()
{
    QString username = ui->username_line_edit->text();
    QString password = ui->password_line_edit->text();
    if(username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning( this, "Login Error", "Empty Username or Password" );
    }
    else
    {
        if(current_state == new_user_state) Utilities::CreateNewUser(username, password);
        QString file_path = Utilities::GetMapDataFile(username, password);
        if(Utilities::CheckAdmin(username, password)) emit is_user_admin(true);
        emit send_mapfile(file_path);
        this->close();
    }
}

void LoginDialog::on_create_new_user_button_clicked()
{
    current_state = new_user_state;
    current_state->Handle();
    ShowCancelButton(true);
}

inline void LoginDialog::ShowCancelButton(bool show)
{
    ui->cancel_button->setVisible(show);
}

void LoginDialog::on_cancel_button_clicked()
{
    current_state = exisiting_user_state;
    current_state->Handle();
    ShowCancelButton(false);
}
