#ifndef PLAYERCHOOSER_H
#define PLAYERCHOOSER_H

#include "Chooser.h"

class PlayerChooser : public Chooser
{
public:
    // Calls on user to make a choice
    // @return the move made
    Moves MakeChoice();
};

#endif // PLAYERCHOOSER_H
