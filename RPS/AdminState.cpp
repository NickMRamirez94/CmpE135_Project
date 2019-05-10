#include "AdminState.h"

AdminState::AdminState(QAction * graph_action) : UserState(graph_action)
{

}

void AdminState::Handle()
{
    graph_action_->setEnabled(true);
}
