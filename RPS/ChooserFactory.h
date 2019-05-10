#ifndef CHOOSERFACTORY_H
#define CHOOSERFACTORY_H

#include <QMap>

#include "Chooser.h"
#include "GameMode.h"

class ChooserFactory
{
public:
    // Constructs and returns a chooser object
    // @param chosoer_type the type of chooser object to generate
    // @param current_player_pattern player pattern used for smart chooser
    // @param choice_frequencies map used for smart chooser
    // @return the Chooser object created
    static Chooser * MakeChooser(GameMode mode, QString * current_player_pattern, QMap<QString, int> * choice_frequencies);
};

#endif // CHOOSERFACTORY_H
