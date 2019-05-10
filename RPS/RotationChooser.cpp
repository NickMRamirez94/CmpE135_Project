#include "RotationChooser.h"

RotationChooser::RotationChooser(QString * current_player_pattern) : current_player_pattern_(current_player_pattern)
{

}

Moves RotationChooser::MakeChoice()
{
    Moves current_move = Moves::Rock;
    QString lastplayer_choice = current_player_pattern_->left(1);

    if(lastplayer_choice == "R") current_move = Moves::Paper;
    else if(lastplayer_choice == "P") current_move = Moves::Scissors;
    else current_move = Moves::Rock;

    return current_move;
}
