#ifndef RECORD_H
#define RECORD_H

#include "Move.h"
#include "Outcomes.h"

class Record
{
public:

    Record();

    // Determine the winner of a round of rock paper scissors
    // @param player_move the move of the player
    // @param computer_move the move of the computer
    virtual Outcomes DetermineWinner(Moves playerone_move, Moves playertwo_move);

    // Resets the wins of both players
    void Reset();

    // Getters
    int GetWinsPlayerOne();
    int GetWinsPlayerTwo();
    int GetTies();
private:

    // Helper functions for DetermineWinner to compare choices made
    // @param player_move the move made by the player
    // @param computer_move the move made by the computer
    // @return the outcome of the comparison
    Outcomes CompareChoices(Moves playerone_move, Moves playertwo_move);

    int wins_playerone_;
    int wins_playertwo_;
    int ties_;
};
#endif // RECORD_H
