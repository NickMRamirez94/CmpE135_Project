#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "NewGameDialog.h"
#include "LoginDialog.h"
#include "GameUI.h"
#include "RecordFactory.h"
#include "RecordType.h"
#include "PlayRoundDialog.h"
#include "AdminState.h"
#include "NonAdminState.h"
#include "GraphDialog.h"

#include <QtDebug>
#include <QList>
#include <QLabel>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    game_(nullptr),
    record_(nullptr)
{
    ui->setupUi(this);

    admin_state_ = new AdminState(ui->action_graph_user_data);
    non_admin_state_ = new NonAdminState(ui->action_graph_user_data);
    current_state_ = non_admin_state_;
    current_state_->Handle();

    LoginDialog * login_dialog = new LoginDialog(this);
    connect(login_dialog, SIGNAL(send_mapfile(QString)), this, SLOT(OnLogin(QString)));
    connect(login_dialog, SIGNAL(is_user_admin(bool)), this, SLOT(OnAdmin(bool)));
    login_dialog->exec();

    on_action_new_game_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_new_game_triggered()
{
    NewGameDialog * new_game_dialog = new NewGameDialog(this);
    connect(new_game_dialog, SIGNAL(send_round_mode(QString, GameMode)), this, SLOT(OnNewGame(QString, GameMode)));
    new_game_dialog->exec();
}

void MainWindow::on_action_graph_user_data_triggered()
{
    QString file_path = QFileDialog::getOpenFileName( this, "Load User Map Data", QCoreApplication::applicationDirPath() );
    if(!file_path.isEmpty())
    {
        GraphDialog * graph_dialog = new GraphDialog (this, file_path);
        graph_dialog->exec();
        if(graph_dialog != nullptr) delete graph_dialog;
    }
}

void MainWindow::on_action_quit_triggered()
{
    QApplication::quit();
}

void MainWindow::OnLogin(QString file_path)
{
    file_path_ = file_path;
}

void MainWindow::OnAdmin(bool is_admin)
{
    current_state_ = admin_state_;
    current_state_->Handle();
}

void MainWindow::OnNewGame(QString number_rounds, GameMode mode)
{
    if(game_ != nullptr) delete game_;
    if(record_ != nullptr) delete record_;

//    record_ = RecordFactory::MakeRecord(RecordType::RecordGUI, ui->player_wins_count_label,
//                                        ui->computer_wins_count_label, ui->tiescount_label);

    if(number_rounds.toInt() > 0)
    {
        game_ = new GameUI(mode, new RecordUI(ui->player_wins_count_label,
                        ui->computer_wins_count_label, ui->tiescount_label), number_rounds.toInt(), file_path_,
                        ui->roundnumber_label, ui->playerchoice_label, ui->computerchoice_label,
                        ui->predictedchoice_label, ui->winnername_label, ui->gameinfo_label);
    }
}

void MainWindow::on_player_rock_button_clicked()
{
    game_->PlayRound(Moves::Rock);
    MakePlayRoundDialog(Moves::Rock, game_->GetComputerChoice());
    if(game_->GetCurrentRound() >= game_->GetTotalRounds())
    {
        game_->NewGame();
        on_action_new_game_triggered();
    }
}

void MainWindow::on_player_paper_button_clicked()
{
    game_->PlayRound(Moves::Paper);
    MakePlayRoundDialog(Moves::Paper, game_->GetComputerChoice());
    if(game_->GetCurrentRound() >= game_->GetTotalRounds())
    {
        game_->NewGame();
        on_action_new_game_triggered();
    }
}

void MainWindow::on_playerone_scissors_button_clicked()
{
    game_->PlayRound(Moves::Scissors);
    MakePlayRoundDialog(Moves::Scissors, game_->GetComputerChoice());
    if(game_->GetCurrentRound() >= game_->GetTotalRounds())
    {
        game_->NewGame();
        on_action_new_game_triggered();
    }
}

inline void MainWindow::MakePlayRoundDialog(Moves player_move, Moves computer_move)
{
    PlayRoundDialog * play_dialog = new PlayRoundDialog(this, player_move, computer_move);
    play_dialog->exec();
    delete play_dialog;
}
