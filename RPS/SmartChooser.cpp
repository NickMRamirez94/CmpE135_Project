#include "SmartChooser.h"
#include <QtDebug>

SmartChooser::SmartChooser(QString * current_player_pattern, QMap<QString, int> * choice_frequencies)
: current_player_pattern_(current_player_pattern), choice_frequencies_(choice_frequencies)
{

}

Moves SmartChooser::MakeChoice()
{
    int frequency_rock;
    int frequency_paper;
    int frequency_scissors;

    // If does not exist
    if(choice_frequencies_->find(*current_player_pattern_ + "R") == choice_frequencies_->end())
    {
        choice_frequencies_->insert(*current_player_pattern_ + "R", 0);
    }
    if(choice_frequencies_->find(*current_player_pattern_ + "P") == choice_frequencies_->end())
    {
        choice_frequencies_->insert(*current_player_pattern_ + "P", 0);
    }
    if(choice_frequencies_->find(*current_player_pattern_ + "S") == choice_frequencies_->end())
    {
        choice_frequencies_->insert(*current_player_pattern_ + "S", 0);
    }

    frequency_rock = choice_frequencies_->value(*current_player_pattern_ + "R");
    frequency_paper = choice_frequencies_->value(*current_player_pattern_ + "P");
    frequency_scissors = choice_frequencies_->value(*current_player_pattern_ + "S");

    return DetermineChoice(frequency_rock, frequency_paper, frequency_scissors);
}

Moves SmartChooser::DetermineChoice(int frequency_rock, int frequency_paper, int frequency_scissors)
{
    Moves current_move = Moves::Rock;

    // Rock highest
    if(frequency_rock > frequency_paper && frequency_rock > frequency_scissors)
    {
        current_move = Moves::Paper;
    }
    // Paper highest
    else if(frequency_paper > frequency_scissors)
    {
        current_move = Moves::Scissors;
    }
    // Scissors highest
    else
    {
        current_move = Moves::Rock;
    }

    return current_move;
}
