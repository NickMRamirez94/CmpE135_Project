#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <QLabel>

class GameState
{
public:
    GameState(QLabel * info_label);
    virtual void Handle() = 0;

protected:
    QLabel * info_label_;
};

#endif // GAMESTATE_H
