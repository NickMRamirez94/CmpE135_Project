#ifndef USERSTATE_H
#define USERSTATE_H

#include <QAction>

class UserState
{
public:
    UserState(QAction * graph_action);
    virtual void Handle() = 0;

protected:
    QAction * graph_action_;
};

#endif // USERSTATE_H
