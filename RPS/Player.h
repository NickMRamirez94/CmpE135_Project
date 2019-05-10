#ifndef PLAYER_H
#define PLAYER_H

#include <QMap>

#include "Chooser.h"
#include "Move.h"
#include "GameMode.h"

using namespace std;

class Player
{
public:

    // Constructor
    // @param chooser_type the type of algorithm of use for making a choice
    // @param current_player_pattern player pattern used for smart chooser
    // @param choice_frequencies map used for smart chooser
    Player(GameMode mode, QString * current_player_pattern, QMap<QString, int> * choice_frequencies);

    // Delegates to the chooser_ to make a move
    // @return the move made
    Moves MakeChoice();

    // Retrieve the most recent move made
    // @return the most recent move made
    Moves GetChoice();

    ~Player();

// Leaving protected for now in case Computer class brought back
protected:
    Chooser * chooser_;
    Moves current_move_;
};

#endif // PLAYER_H
