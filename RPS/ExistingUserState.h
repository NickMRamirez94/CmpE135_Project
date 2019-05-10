#ifndef EISTINGUSERSTATE_H
#define EISTINGUSERSTATE_H

#include "LoginState.h"

#include <QLabel>


class ExistingUserState : public LoginState
{
public:
    ExistingUserState(QLabel * username_label, QLabel * password_label, QLabel * info_label);
    void Handle();
};

#endif // EISTINGUSERSTATE_H
