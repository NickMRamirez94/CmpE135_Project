#include <QFile>
#include <QTextStream>
#include <QtDebug>
#include <QCoreApplication>
#include <QDir>

#include "Game.h"

Game::Game(GameMode mode, Record * record, int number_rounds, const QString & mapfile_path) :
    kPatternLength(5) , current_mode_(mode), record_(record),
    number_rounds_(number_rounds), mapfile_path_(mapfile_path), current_round_(0)
{
    current_player_choice_ = "";
    current_player_pattern_ = new QString("");
    choice_frequencies_ = new QMap<QString, int>();

    computer_ = new Player(current_mode_, current_player_pattern_, choice_frequencies_);

    ImportMap();
}

Outcomes Game::PlayRound(Moves player_move)
{
    current_round_++;
    computer_->MakeChoice();
    if(current_mode_ == GameMode::Smart || current_mode_ == GameMode::Rotation)
    {
        UpdateMap(player_move);
    }
    return record_->DetermineWinner(player_move, computer_->GetChoice());
}

void Game::ImportMap()
{
    mapfile_path_.prepend(QCoreApplication::applicationDirPath() + "/MapData/");
    QFile in_file(mapfile_path_);
    if(in_file.open(QFile::ReadOnly | QFile::Text))
    {
        QString pattern;
        QString frequency;
        QTextStream input(&in_file);
        QString map_data = input.readAll();
        in_file.close();
        QStringList frequencies = map_data.split("\n");
        for(auto it = frequencies.begin(); it != frequencies.end(); it++)
        {
            QStringList temp = it->split(" ");
            if(temp.length() == 2)
            {
                pattern = temp[0];
                frequency = temp[1];
                choice_frequencies_->insert(pattern, frequency.toInt());
            }
        }
    }
    else
    {
        qDebug() << "No map file for user yet";
    }
}

void Game::UpdateMap(Moves player_move)
{
    switch(player_move)
    {
        case Moves::Rock:
            current_player_choice_ = "R";
            break;
        case Moves::Paper:
            current_player_choice_ = "P";
            break;
        case Moves::Scissors:
            current_player_choice_ = "S";
            break;
        default:
            break;
    }
    current_player_pattern_->append(current_player_choice_);

    // Not in map
    if(choice_frequencies_->find(*current_player_pattern_) == choice_frequencies_->end())
    {
        choice_frequencies_->insert(*current_player_pattern_, 1);
    }
    // In map
    else
    {
        auto it = choice_frequencies_->find(*current_player_pattern_);
        it.value()++;
    }

    if(current_player_pattern_->length() > kPatternLength)
    {
        current_player_pattern_->remove(0, 1);
    }
}

void Game::ExportMap()
{
    QFile out_file(mapfile_path_);
    if(out_file.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream stream(&out_file);
        for(auto it = choice_frequencies_->begin(); it != choice_frequencies_->end(); it++)
        {
            stream << it.key() << " " << it.value() << endl;
        }
        out_file.close();
    }
}

void Game::NewGame()
{
    record_->Reset();
    current_round_ = 0;
    ExportMap();
}

int Game::GetCurrentRound()
{
    return current_round_;
}

int Game::GetTotalRounds()
{
    return number_rounds_;
}

Moves Game::GetComputerChoice()
{
    return computer_->GetChoice();
}
