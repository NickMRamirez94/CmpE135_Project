#include "NonAdminState.h"

NonAdminState::NonAdminState(QAction * graph_action) : UserState(graph_action)
{

}

void NonAdminState::Handle()
{
    graph_action_->setEnabled(false);
}
