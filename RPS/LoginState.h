#ifndef LOGINSTATE_H
#define LOGINSTATE_H

#include <QLabel>


class LoginState
{
public:
    LoginState(QLabel * username_label, QLabel * password_label, QLabel * info_label);
    virtual void Handle() = 0;

protected:
    QLabel * username_label_;
    QLabel * password_label_;
    QLabel * info_label_;
};

#endif // LOGINSTATE_H
