#ifndef NEWGAMEDIALOG_H
#define NEWGAMEDIALOG_H

#include <QDialog>

#include "GameMode.h"

namespace Ui {
class NewGameDialog;
}

class NewGameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewGameDialog(QWidget *parent = nullptr);
    ~NewGameDialog();

private slots:
    void on_submit_button_clicked();

signals:
    void send_round_mode(QString number_rounds, GameMode mode);

private:
    Ui::NewGameDialog *ui;
};

#endif // NEWGAMEDIALOG_H
