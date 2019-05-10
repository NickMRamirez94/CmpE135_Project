#include "PlayRoundDialog.h"
#include "ui_PlayRoundDialog.h"

#include <QPixmap>

PlayRoundDialog::PlayRoundDialog(QWidget *parent, Moves player_move, Moves computer_move) :
    QDialog(parent),
    ui(new Ui::PlayRoundDialog),
    count_(0),
    player_move_(player_move),
    computer_move_(computer_move)
{
    ui->setupUi(this);
    ui->shoot_label->setVisible(false);

    playerpix_ = new QPixmap("/home/nick/Pictures/rock.jpg");
    computerpix_ = new QPixmap("/home/nick/Pictures/rock.jpg");
    ui->playerpic_label->setPixmap(*playerpix_);
    ui->computerpic_label->setPixmap(*computerpix_);

    timer_ = new QTimer(this);
    connect(timer_, SIGNAL(timeout()), SLOT(ChangePicture()));
    timer_->start(1500);
}

void PlayRoundDialog::ChangePicture()
{
    timer_->start(1500);
    count_++;

    if(count_ == 1)
    {
        playerpix_->load("/home/nick/Pictures/paper.jpg");
        computerpix_->load("/home/nick/Pictures/paper.jpg");
        ui->playerpic_label->setPixmap(*playerpix_);
        ui->computerpic_label->setPixmap(*computerpix_);
    }
    else if(count_ == 2)
    {
        playerpix_->load("/home/nick/Pictures/scissors.jpg");
        computerpix_->load("/home/nick/Pictures/scissors.jpg");
        ui->playerpic_label->setPixmap(*playerpix_);
        ui->computerpic_label->setPixmap(*computerpix_);
    }
    else if(count_ == 3)
    {
        ui->shoot_label->setVisible(true);
        playerpix_->load(GetFilePath(player_move_));
        computerpix_->load(GetFilePath(computer_move_));
        ui->playerpic_label->setPixmap(*playerpix_);
        ui->computerpic_label->setPixmap(*computerpix_);
    }
    else
    {
        timer_->stop();
        this->close();
    }
}

QString PlayRoundDialog::GetFilePath(Moves move)
{
    if(move == Moves::Rock) return "/home/nick/Pictures/rock.jpg";
    else if(move == Moves::Paper) return "/home/nick/Pictures/paper.jpg";
    else return "/home/nick/Pictures/scissors.jpg";
}

PlayRoundDialog::~PlayRoundDialog()
{
    delete ui;
    delete timer_;
}
