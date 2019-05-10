#ifndef IDLESTATE_H
#define IDLESTATE_H

#include <QLabel>

#include "GameState.h"

class IdleState : public GameState
{
public:
    IdleState(QLabel * info_label);
    void Handle();
};

#endif // IDLESTATE_H
