#include "ChooserFactory.h"
#include "RandomChooser.h"
#include "SmartChooser.h"
#include "PlayerChooser.h"
#include "RotationChooser.h"

Chooser * ChooserFactory::MakeChooser(GameMode mode, QString * current_player_pattern, QMap<QString, int> * choice_frequencies)
{
    switch(mode)
    {
        case GameMode::Random:
            return new RandomChooser();
            break;
        case GameMode::Smart:
            return new SmartChooser(current_player_pattern, choice_frequencies);
            break;
        case GameMode::Player:
            return new PlayerChooser();
        case GameMode::Rotation:
            return new RotationChooser(current_player_pattern);
        default:
            return nullptr;
    }
}
