#include "PlayingState.h"

PlayingState::PlayingState(QLabel * info_label) : GameState(info_label)
{

}

void PlayingState::Handle()
{
    info_label_->setText("You're in the middle of an RPS Game! "
                         "Good Luck! And Have Fun :)");
}
