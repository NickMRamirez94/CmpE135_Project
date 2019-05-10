#ifndef CHOOSER_H
#define CHOOSER_H

#include "Move.h"

//enum class ChooserType
//{
//    Player, Random, Smart
//};

// Interface Chooser
class Chooser
{
public:
    // Placeholder for MakeChoice algorithm
    // @return the move made
    virtual Moves MakeChoice() = 0;
};

#endif // CHOOSER_H
