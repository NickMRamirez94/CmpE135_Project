/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new_game;
    QAction *action_quit;
    QAction *action_graph_user_data;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tab_widget;
    QWidget *game_tab;
    QVBoxLayout *verticalLayout;
    QLabel *gameinfo_label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *round_label;
    QLabel *roundnumber_label;
    QSpacerItem *verticalSpacer;
    QLabel *player_label;
    QHBoxLayout *button_horizontal_layout;
    QPushButton *player_rock_button;
    QPushButton *player_paper_button;
    QPushButton *playerone_scissors_button;
    QHBoxLayout *horizontalLayout_6;
    QLabel *playerchooses_label;
    QLabel *playerchoice_label;
    QSpacerItem *verticalSpacer_2;
    QLabel *computer_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *computerchooses_label;
    QLabel *computerchoice_label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *predicted_label;
    QLabel *predictedchoice_label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *winner_label;
    QLabel *winnername_label;
    QWidget *statistics_tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *statisticsinfo_label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *player_wins_label;
    QLabel *player_wins_count_label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *computer_wins_label;
    QLabel *computer_wins_count_label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ties_label;
    QLabel *tiescount_label;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(487, 502);
        action_new_game = new QAction(MainWindow);
        action_new_game->setObjectName(QStringLiteral("action_new_game"));
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        action_graph_user_data = new QAction(MainWindow);
        action_graph_user_data->setObjectName(QStringLiteral("action_graph_user_data"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tab_widget = new QTabWidget(centralWidget);
        tab_widget->setObjectName(QStringLiteral("tab_widget"));
        game_tab = new QWidget();
        game_tab->setObjectName(QStringLiteral("game_tab"));
        verticalLayout = new QVBoxLayout(game_tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gameinfo_label = new QLabel(game_tab);
        gameinfo_label->setObjectName(QStringLiteral("gameinfo_label"));
        gameinfo_label->setAlignment(Qt::AlignCenter);
        gameinfo_label->setWordWrap(true);

        verticalLayout->addWidget(gameinfo_label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        round_label = new QLabel(game_tab);
        round_label->setObjectName(QStringLiteral("round_label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        round_label->setFont(font);
        round_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(round_label);

        roundnumber_label = new QLabel(game_tab);
        roundnumber_label->setObjectName(QStringLiteral("roundnumber_label"));
        roundnumber_label->setFont(font);

        horizontalLayout_7->addWidget(roundnumber_label);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        player_label = new QLabel(game_tab);
        player_label->setObjectName(QStringLiteral("player_label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        player_label->setFont(font1);
        player_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(player_label);

        button_horizontal_layout = new QHBoxLayout();
        button_horizontal_layout->setSpacing(6);
        button_horizontal_layout->setObjectName(QStringLiteral("button_horizontal_layout"));
        player_rock_button = new QPushButton(game_tab);
        player_rock_button->setObjectName(QStringLiteral("player_rock_button"));

        button_horizontal_layout->addWidget(player_rock_button);

        player_paper_button = new QPushButton(game_tab);
        player_paper_button->setObjectName(QStringLiteral("player_paper_button"));

        button_horizontal_layout->addWidget(player_paper_button);

        playerone_scissors_button = new QPushButton(game_tab);
        playerone_scissors_button->setObjectName(QStringLiteral("playerone_scissors_button"));

        button_horizontal_layout->addWidget(playerone_scissors_button);


        verticalLayout->addLayout(button_horizontal_layout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        playerchooses_label = new QLabel(game_tab);
        playerchooses_label->setObjectName(QStringLiteral("playerchooses_label"));
        playerchooses_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(playerchooses_label);

        playerchoice_label = new QLabel(game_tab);
        playerchoice_label->setObjectName(QStringLiteral("playerchoice_label"));

        horizontalLayout_6->addWidget(playerchoice_label);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        computer_label = new QLabel(game_tab);
        computer_label->setObjectName(QStringLiteral("computer_label"));
        computer_label->setFont(font1);
        computer_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(computer_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        computerchooses_label = new QLabel(game_tab);
        computerchooses_label->setObjectName(QStringLiteral("computerchooses_label"));
        computerchooses_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(computerchooses_label);

        computerchoice_label = new QLabel(game_tab);
        computerchoice_label->setObjectName(QStringLiteral("computerchoice_label"));

        horizontalLayout_4->addWidget(computerchoice_label);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        predicted_label = new QLabel(game_tab);
        predicted_label->setObjectName(QStringLiteral("predicted_label"));
        predicted_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(predicted_label);

        predictedchoice_label = new QLabel(game_tab);
        predictedchoice_label->setObjectName(QStringLiteral("predictedchoice_label"));

        horizontalLayout_5->addWidget(predictedchoice_label);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        winner_label = new QLabel(game_tab);
        winner_label->setObjectName(QStringLiteral("winner_label"));
        winner_label->setFont(font);
        winner_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(winner_label);

        winnername_label = new QLabel(game_tab);
        winnername_label->setObjectName(QStringLiteral("winnername_label"));
        winnername_label->setFont(font);

        horizontalLayout_3->addWidget(winnername_label);


        verticalLayout->addLayout(horizontalLayout_3);

        tab_widget->addTab(game_tab, QString());
        statistics_tab = new QWidget();
        statistics_tab->setObjectName(QStringLiteral("statistics_tab"));
        verticalLayout_2 = new QVBoxLayout(statistics_tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        statisticsinfo_label = new QLabel(statistics_tab);
        statisticsinfo_label->setObjectName(QStringLiteral("statisticsinfo_label"));
        statisticsinfo_label->setAlignment(Qt::AlignCenter);
        statisticsinfo_label->setWordWrap(true);

        verticalLayout_2->addWidget(statisticsinfo_label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);

        label_2 = new QLabel(statistics_tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        player_wins_label = new QLabel(statistics_tab);
        player_wins_label->setObjectName(QStringLiteral("player_wins_label"));
        player_wins_label->setFont(font1);
        player_wins_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(player_wins_label);

        player_wins_count_label = new QLabel(statistics_tab);
        player_wins_count_label->setObjectName(QStringLiteral("player_wins_count_label"));
        player_wins_count_label->setFont(font1);

        horizontalLayout_10->addWidget(player_wins_count_label);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        computer_wins_label = new QLabel(statistics_tab);
        computer_wins_label->setObjectName(QStringLiteral("computer_wins_label"));
        computer_wins_label->setFont(font1);
        computer_wins_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(computer_wins_label);

        computer_wins_count_label = new QLabel(statistics_tab);
        computer_wins_count_label->setObjectName(QStringLiteral("computer_wins_count_label"));
        computer_wins_count_label->setFont(font1);

        horizontalLayout_9->addWidget(computer_wins_count_label);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        ties_label = new QLabel(statistics_tab);
        ties_label->setObjectName(QStringLiteral("ties_label"));
        ties_label->setFont(font1);
        ties_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(ties_label);

        tiescount_label = new QLabel(statistics_tab);
        tiescount_label->setObjectName(QStringLiteral("tiescount_label"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        tiescount_label->setFont(font2);

        horizontalLayout_8->addWidget(tiescount_label);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        tab_widget->addTab(statistics_tab, QString());

        horizontalLayout_2->addWidget(tab_widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 487, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(action_new_game);
        menuFile->addAction(action_graph_user_data);
        menuFile->addAction(action_quit);

        retranslateUi(MainWindow);

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_new_game->setText(QApplication::translate("MainWindow", "New Game", Q_NULLPTR));
        action_quit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        action_graph_user_data->setText(QApplication::translate("MainWindow", "Graph User Data", Q_NULLPTR));
        gameinfo_label->setText(QApplication::translate("MainWindow", "Welcome to RPS Game! Below you will find the game area. The Statistics tab holds the record of the currently active game.", Q_NULLPTR));
        round_label->setText(QApplication::translate("MainWindow", "Round: ", Q_NULLPTR));
        roundnumber_label->setText(QString());
        player_label->setText(QApplication::translate("MainWindow", "Player", Q_NULLPTR));
        player_rock_button->setText(QApplication::translate("MainWindow", "Rock", Q_NULLPTR));
        player_paper_button->setText(QApplication::translate("MainWindow", "Paper", Q_NULLPTR));
        playerone_scissors_button->setText(QApplication::translate("MainWindow", "Scissors", Q_NULLPTR));
        playerchooses_label->setText(QApplication::translate("MainWindow", "Player Chooses:", Q_NULLPTR));
        playerchoice_label->setText(QString());
        computer_label->setText(QApplication::translate("MainWindow", "Computer", Q_NULLPTR));
        computerchooses_label->setText(QApplication::translate("MainWindow", "Computer Chooses:", Q_NULLPTR));
        computerchoice_label->setText(QString());
        predicted_label->setText(QApplication::translate("MainWindow", "Predicted Choice:", Q_NULLPTR));
        predictedchoice_label->setText(QString());
        winner_label->setText(QApplication::translate("MainWindow", "Winner:", Q_NULLPTR));
        winnername_label->setText(QString());
        tab_widget->setTabText(tab_widget->indexOf(game_tab), QApplication::translate("MainWindow", "Game Area", Q_NULLPTR));
        statisticsinfo_label->setText(QApplication::translate("MainWindow", "This is the Statistics tab. You can view the results of the currently active game here.", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Record", Q_NULLPTR));
        player_wins_label->setText(QApplication::translate("MainWindow", "Player Wins:", Q_NULLPTR));
        player_wins_count_label->setText(QString());
        computer_wins_label->setText(QApplication::translate("MainWindow", "Computer Wins:", Q_NULLPTR));
        computer_wins_count_label->setText(QString());
        ties_label->setText(QApplication::translate("MainWindow", "Ties:", Q_NULLPTR));
        tiescount_label->setText(QString());
        tab_widget->setTabText(tab_widget->indexOf(statistics_tab), QApplication::translate("MainWindow", "Statistics", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
