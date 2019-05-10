#ifndef RANDOMCHOOSER_H
#define RANDOMCHOOSER_H

#include "Chooser.h"

class RandomChooser : public Chooser
{
public:

    RandomChooser();

    // Calls a an algorithm that uses random generation of move made
    // @return the move made
    Moves MakeChoice();
};

#endif // RANDOMCHOOSER_H
