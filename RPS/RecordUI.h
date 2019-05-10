#ifndef RECORDUI_H
#define RECORDUI_H

#include <QLabel>

#include "Record.h"

class RecordUI : public Record
{
public:
    RecordUI(QLabel * wins_playerone_label, QLabel * wins_playertwo_label, QLabel * ties_label);

    Outcomes DetermineWinner(Moves playerone_move, Moves playertwo_move);

private:
    QLabel * wins_playerone_label_;
    QLabel * wins_playertwo_label_;
    QLabel * ties_label_;

    void UpdateLabels();

};

#endif // RECORDUI_H
