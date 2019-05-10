#ifndef GAMEUI_H
#define GAMEUI_H

#include <QLabel>

#include "Game.h"
#include "GameState.h"

class GameUI : public Game
{
public:
    GameUI(GameMode mode, Record * record, int number_rounds, const QString & mapfile_path, QLabel * roundnumber_label,
           QLabel * playerchoice_label, QLabel * computerchoice_label, QLabel * predictedchoice_label,
           QLabel * winnername_label, QLabel * info_label);

    Outcomes PlayRound(Moves player_move);

private:
    void UpdateLabels(Moves player_move, Outcomes result);

    QList<QLabel> * labels_;

    QLabel * roundnumber_label_;
    QLabel * playerchoice_label_;
    QLabel * computerchoice_label_;
    QLabel * predictedchoice_label_;
    QLabel * winnername_label_;

    GameState * current_game_state_;

    GameState * idle_state_;
    GameState * playing_state_;
    GameState * gameover_state_;
};

#endif // GAMEUI_H
