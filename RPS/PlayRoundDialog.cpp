#include "PlayRoundDialog.h"
#include "ui_PlayRoundDialog.h"

#include <QPixmap>
#include <QtDebug>

PlayRoundDialog::PlayRoundDialog(QWidget *parent, Moves player_move, Moves computer_move) :
    QDialog(parent),
    ui(new Ui::PlayRoundDialog),
    count_(0),
    player_move_(player_move),
    computer_move_(computer_move)
{
    ui->setupUi(this);
    ui->shoot_label->setVisible(false);

    rock_image = QCoreApplication::applicationDirPath();
    rock_image.append("/Images/rock.jpg");
    paper_image = QCoreApplication::applicationDirPath();
    paper_image.append("/Images/paper.jpg");
    scissors_image = QCoreApplication::applicationDirPath();
    scissors_image.append("/Images/scissors.jpg");

    playerpix_ = new QPixmap(rock_image);
    computerpix_ = new QPixmap(rock_image);
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
        playerpix_->load(paper_image);
        computerpix_->load(paper_image);
        ui->playerpic_label->setPixmap(*playerpix_);
        ui->computerpic_label->setPixmap(*computerpix_);
    }
    else if(count_ == 2)
    {
        playerpix_->load(scissors_image);
        computerpix_->load(scissors_image);
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
    if(move == Moves::Rock) return rock_image;
    else if(move == Moves::Paper) return paper_image;
    else return scissors_image;
}

PlayRoundDialog::~PlayRoundDialog()
{
    delete ui;
    delete timer_;
}
