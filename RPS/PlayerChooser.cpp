#include <QtDebug>

#include "PlayerChooser.h"

#include "Move.h"

Moves PlayerChooser::MakeChoice()
{
    qDebug() << "Player making selection from GUI";
    return Moves::Rock;
}
