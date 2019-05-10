#include "NewGameDialog.h"
#include "ui_NewGameDialog.h"

NewGameDialog::NewGameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGameDialog)
{
    ui->setupUi(this);
}

NewGameDialog::~NewGameDialog()
{
    delete ui;
}

void NewGameDialog::on_submit_button_clicked()
{
    QString number_rounds = ui->rounds_line_edit->text();
    GameMode selected_mode;
    switch(ui->game_type_combobox->currentIndex())
    {
        case 0:
            selected_mode = GameMode::Random;
            break;
        case 1:
            selected_mode = GameMode::Rotation;
            break;
        case 2:
            selected_mode = GameMode::Smart;
            break;
        default:
            selected_mode = GameMode::Random;
            break;
    }
    emit send_round_mode(number_rounds, selected_mode);
    this->close();
}
