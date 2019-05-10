#ifndef ROTATIONCHOOSER_H
#define ROTATIONCHOOSER_H

#include "Chooser.h"

#include <QString>

class RotationChooser : public Chooser
{
public:
    // Constructor
    // @param current_player_pattern player pattern used for smart chooser
    RotationChooser(QString * current_player_pattern);

    // Calls for rotation algorithm in making choice
    // @return the move made
    Moves MakeChoice();

private:
    QString * current_player_pattern_;
};

#endif // ROTATIONCHOOSER_H
