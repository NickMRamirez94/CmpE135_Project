#include "RandomChooser.h"
#include "Move.h"

#include <stdlib.h>
#include <time.h>

RandomChooser::RandomChooser()
{
    srand(time(nullptr));
}

Moves RandomChooser::MakeChoice()
{
    Moves current_move;
    current_move = static_cast<Moves>(rand()%3);
    return current_move;
}
