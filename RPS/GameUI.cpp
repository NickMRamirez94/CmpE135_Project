#include "GameUI.h"
#include "IdleState.h"
#include "PlayingState.h"
#include "GameOverState.h"

GameUI::GameUI(GameMode mode, Record * record, int number_rounds, const QString & mapfile_path, QLabel * roundnumber_label,
               QLabel * playerchoice_label, QLabel * computerchoice_label, QLabel * predictedchoice_label,
               QLabel * winnername_label, QLabel * info_label) :
    Game(mode, record, number_rounds, mapfile_path), roundnumber_label_(roundnumber_label), playerchoice_label_(playerchoice_label),
    computerchoice_label_(computerchoice_label), predictedchoice_label_(predictedchoice_label), winnername_label_(winnername_label)
{
    idle_state_ = new IdleState(info_label);
    playing_state_ = new PlayingState(info_label);
    gameover_state_ = new GameOverState(info_label);

    current_game_state_ = idle_state_;
    current_game_state_->Handle();
}

Outcomes GameUI::PlayRound(Moves player_move)
{
    Outcomes result = Game::PlayRound(player_move);
    UpdateLabels(player_move, result);
    return result;
}

void GameUI::UpdateLabels(Moves player_move, Outcomes result)
{
    if(GetCurrentRound() >= GetTotalRounds()) current_game_state_ = gameover_state_;
    else current_game_state_ = playing_state_;

    current_game_state_->Handle();

    Moves computer_move = GetComputerChoice();

    roundnumber_label_->setText(QString::number(GetCurrentRound()));

    if(player_move == Moves::Rock) playerchoice_label_->setText("Rock");
    else if(player_move == Moves::Paper) playerchoice_label_->setText("Paper");
    else playerchoice_label_->setText("Scissors");

    if(computer_move == Moves::Rock) computerchoice_label_->setText("Rock");
    else if(computer_move == Moves::Paper) computerchoice_label_->setText("Paper");
    else computerchoice_label_->setText("Scissors");

    if(computer_move == Moves::Rock) predictedchoice_label_->setText("Scissors");
    else if(computer_move == Moves::Paper) predictedchoice_label_->setText("Rock");
    else predictedchoice_label_->setText("Paper");


    if(result == Outcomes::Win) winnername_label_->setText("Player");
    else if(result == Outcomes::Loss) winnername_label_->setText("Computer");
    else winnername_label_->setText("Draw");
}
