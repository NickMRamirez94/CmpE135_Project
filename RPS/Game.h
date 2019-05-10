#ifndef GAME_H
#define GAME_H

#include <QMap>

#include "RecordUI.h"
#include "Record.h"
#include "Player.h"
#include "Move.h"
#include "GameMode.h"

class Game
{
public:

    // Constructor
    Game(GameMode mode, Record * record, int number_rounds, const QString & mapfile_path);

    virtual Outcomes PlayRound(Moves player_move);

    // Starts a new game by resetting records
    void NewGame();

    int GetCurrentRound();

    int GetTotalRounds();

    Moves GetComputerChoice();

private:

    // Updates the internal choice_frequencies map
    void UpdateMap(Moves player_move);

    // Imports data for the choice_frequencies map
    void ImportMap();

    // Exports data from the choice_frequencies map
    void ExportMap();

    Record * record_;
    Player * computer_;
//    GameMode current_mode_;
    QString current_player_choice_;
    QString * current_player_pattern_;
    const int kPatternLength;
    QMap<QString, int> * choice_frequencies_;
    GameMode current_mode_;
    int current_round_;
    int number_rounds_;
    QString mapfile_path_;
};

#endif // GAME_H
