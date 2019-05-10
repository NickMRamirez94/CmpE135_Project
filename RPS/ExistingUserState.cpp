#include "ExistingUserState.h"

ExistingUserState::ExistingUserState(QLabel * username_label, QLabel * password_label, QLabel * info_label)
    : LoginState(username_label, password_label, info_label)
{

}

void ExistingUserState::Handle()
{
    username_label_->setText("Username:");
    password_label_->setText("Password:");
    info_label_->setText("Please enter your login information below");
}
