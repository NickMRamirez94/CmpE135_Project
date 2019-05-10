#ifndef NONADMINSTATE_H
#define NONADMINSTATE_H

#include <QAction>

#include "UserState.h"

class NonAdminState : public UserState
{
public:
    NonAdminState(QAction * graph_action);
    void Handle();
};

#endif // NONADMINSTATE_H
