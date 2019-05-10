#include "IdleState.h"

IdleState::IdleState(QLabel * info_label) : GameState(info_label)
{

}

void IdleState::Handle()
{
    info_label_->setText("Welcome to RPS Game! Below you will find the game area. "
                         "The Statistics tab holds the record of the currently "
                         "active game.");
}
