#include "NewUserState.h"

NewUserState::NewUserState(QLabel * username_label, QLabel * password_label, QLabel * info_label)
    : LoginState(username_label, password_label, info_label)
{

}

void NewUserState::Handle()
{
    username_label_->setText("New Username:");
    password_label_->setText("New Password:");
    info_label_->setText("Please enter your new username and new password below");
}
