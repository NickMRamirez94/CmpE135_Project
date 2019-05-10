#include "Record.h"

Record::Record() : wins_playerone_(0), wins_playertwo_(0), ties_(0)
{

}

int Record::GetWinsPlayerOne()
{
    return wins_playerone_;
}

int Record::GetWinsPlayerTwo()
{
    return wins_playertwo_;
}

int Record::GetTies()
{
    return ties_;
}

Outcomes Record::DetermineWinner(Moves playerone_move, Moves playertwo_move)
{
    Outcomes result = CompareChoices(playerone_move, playertwo_move);
    switch(result)
    {
        case Outcomes::Win:
            wins_playerone_++;
            break;
        case Outcomes::Loss:
            wins_playertwo_++;
            break;
        default:
            ties_++;
            break;
    }
    return result;
}

Outcomes Record::CompareChoices(Moves playerone_move, Moves playertwo_move)
{
    Outcomes result = Outcomes::Tie;
    switch(playerone_move)
    {
        case Moves::Rock:
            switch(playertwo_move)
            {
                case Moves::Paper:
                    result = Outcomes::Loss;
                    break;
                case Moves::Scissors:
                    result = Outcomes::Win;
                    break;
                default:
                    break;
            }
            break;
        case Moves::Paper:
            switch(playertwo_move)
            {
                case Moves::Rock:
                    result = Outcomes::Win;
                    break;
                case Moves::Scissors:
                    result = Outcomes::Loss;
                    break;
                default:
                    break;
            }
            break;
        case Moves::Scissors:
            switch(playertwo_move)
            {
                case Moves::Rock:
                    result = Outcomes::Loss;
                    break;
                case Moves::Paper:
                    result = Outcomes::Win;
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
    return result;
}

void Record::Reset()
{
    wins_playerone_ = 0;
    wins_playertwo_ = 0;
    ties_ = 0;
}

