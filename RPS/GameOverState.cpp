#include "GameOverState.h"

GameOverState::GameOverState(QLabel * info_label) : GameState(info_label)
{

}

void GameOverState::Handle()
{
    info_label_->setText("The game is now completed! "
                         "Please play again! :)");
}
