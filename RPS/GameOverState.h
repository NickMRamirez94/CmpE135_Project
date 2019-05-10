#ifndef GAMEOVERSTATE_H
#define GAMEOVERSTATE_H

#include <QLabel>

#include "GameState.h"

class GameOverState : public GameState
{
public:
    GameOverState(QLabel * info_label);
    void Handle();
};

#endif // GAMEOVERSTATE_H
