#ifndef ADMINSTATE_H
#define ADMINSTATE_H

#include <QAction>

#include "UserState.h"

class AdminState : public UserState
{
public:
    AdminState(QAction * graph_action);

    void Handle();
};

#endif // ADMINSTATE_H
