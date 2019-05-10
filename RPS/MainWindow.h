#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "GameMode.h"
#include "Choices.h"
#include "Game.h"
#include "Record.h"
#include "UserState.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_new_game_triggered();

    void on_action_quit_triggered();

    void OnLogin(QString file_path);

    void OnNewGame(QString number_rounds, GameMode mode);

    void OnAdmin(bool is_admin);

    void on_player_rock_button_clicked();

    void on_player_paper_button_clicked();

    void on_playerone_scissors_button_clicked();

    void on_action_graph_user_data_triggered();

private:

    inline void MakePlayRoundDialog(Moves player_move, Moves computer_move);

    Ui::MainWindow *ui;

    Game * game_;
    Record * record_;
    QString file_path_;

    UserState * current_state_;
    UserState * admin_state_;
    UserState * non_admin_state_;
};

#endif // MAINWINDOW_H
