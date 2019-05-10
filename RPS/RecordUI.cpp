#include "RecordUI.h"

RecordUI::RecordUI(QLabel * wins_playerone_label, QLabel * wins_playertwo_label, QLabel * ties_label)
    : wins_playerone_label_(wins_playerone_label), wins_playertwo_label_(wins_playertwo_label), ties_label_(ties_label)
{

}

Outcomes RecordUI::DetermineWinner(Moves playerone_move, Moves playertwo_move)
{
    Outcomes result = Record::DetermineWinner(playerone_move, playertwo_move);
    UpdateLabels();
    return result;
}

void RecordUI::UpdateLabels()
{
    wins_playerone_label_->setText(QString::number(GetWinsPlayerOne()));
    wins_playertwo_label_->setText(QString::number(GetWinsPlayerTwo()));
    ties_label_->setText(QString::number(GetTies()));
}
