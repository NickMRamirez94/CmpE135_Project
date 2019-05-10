#include <QMap>

#include "Player.h"
#include "ChooserFactory.h"

Player::Player(GameMode mode, QString * current_player_pattern, QMap<QString, int> * choice_frequencies)
{
    chooser_ = ChooserFactory::MakeChooser(mode, current_player_pattern, choice_frequencies);
}

Moves Player::MakeChoice()
{
    current_move_ = chooser_->MakeChoice();
    return current_move_;
}

Moves Player::GetChoice()
{
    return current_move_;
}

Player::~Player()
{
    if(chooser_ != nullptr) delete chooser_;
}
