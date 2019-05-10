#ifndef NEWUSERSTATE_H
#define NEWUSERSTATE_H

#include "LoginState.h"

#include <QLabel>

class NewUserState : public LoginState
{
public:
    NewUserState(QLabel * username_label, QLabel * password_label, QLabel * info_label);
    void Handle();
};

#endif // NEWUSERSTATE_H
