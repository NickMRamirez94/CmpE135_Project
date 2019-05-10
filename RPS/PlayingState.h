#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include <QLabel>

#include "GameState.h"


class PlayingState : public GameState
{
public:
    PlayingState(QLabel * info_label);
    void Handle();
};

#endif // PLAYINGSTATE_H
