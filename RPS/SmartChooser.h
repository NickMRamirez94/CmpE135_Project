#ifndef SMARTCHOOSER_H
#define SMARTCHOOSER_H

#include "Chooser.h"
#include <QMap>

using namespace std;

class SmartChooser : public Chooser
{
public:
    // Constructor
    // @param current_player_pattern player pattern used for smart chooser
    // @param choice_frequencies map used to predict and counter next player choice
    SmartChooser(QString * current_player_pattern, QMap<QString, int> * choice_frequencies);

    // Calls for simple ML algorithm in making choice
    // @return the move made
    Moves MakeChoice();

private:
    // Helper functions to determine which move to make based on frequencies
    // @param frequency_rock the frequency of occurances of current_player_pattern with rock as next move
    // @param frequency_paper the frequency of occurances of current_player_pattern with paper as next move
    // @param frequency_scissors the frequency of occurances of current_player_pattern with scissors as next move
    Moves DetermineChoice(int frequency_rock, int frequency_paper, int frequency_scissors);

    QString * current_player_pattern_;
    QMap<QString, int> * choice_frequencies_;
};

#endif // SMARTCHOOSER_H
