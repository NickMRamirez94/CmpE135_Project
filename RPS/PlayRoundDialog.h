#ifndef PLAYROUNDDIALOG_H
#define PLAYROUNDDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QPixmap>

#include "Move.h"

namespace Ui {
class PlayRoundDialog;
}

class PlayRoundDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayRoundDialog(QWidget *parent = nullptr, Moves player_move = Moves::Rock, Moves computer_move = Moves::Rock);
    ~PlayRoundDialog();

private slots:
    void ChangePicture();

private:

    QString GetFilePath(Moves move);

    Ui::PlayRoundDialog *ui;

    QTimer * timer_;
    int count_;

    Moves player_move_;
    Moves computer_move_;

    QPixmap * playerpix_;
    QPixmap * computerpix_;

    QString rock_image;
    QString paper_image;
    QString scissors_image;
};

#endif // PLAYROUNDDIALOG_H
