/********************************************************************************
** Form generated from reading UI file 'PlayRoundDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYROUNDDIALOG_H
#define UI_PLAYROUNDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlayRoundDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *player_label;
    QLabel *computer_label;
    QLabel *shoot_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *playerpic_label;
    QLabel *vs_label;
    QLabel *computerpic_label;

    void setupUi(QDialog *PlayRoundDialog)
    {
        if (PlayRoundDialog->objectName().isEmpty())
            PlayRoundDialog->setObjectName(QStringLiteral("PlayRoundDialog"));
        PlayRoundDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(PlayRoundDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        player_label = new QLabel(PlayRoundDialog);
        player_label->setObjectName(QStringLiteral("player_label"));
        QFont font;
        font.setPointSize(14);
        player_label->setFont(font);
        player_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(player_label);

        computer_label = new QLabel(PlayRoundDialog);
        computer_label->setObjectName(QStringLiteral("computer_label"));
        computer_label->setFont(font);
        computer_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(computer_label);


        verticalLayout->addLayout(horizontalLayout);

        shoot_label = new QLabel(PlayRoundDialog);
        shoot_label->setObjectName(QStringLiteral("shoot_label"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        shoot_label->setFont(font1);
        shoot_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(shoot_label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        playerpic_label = new QLabel(PlayRoundDialog);
        playerpic_label->setObjectName(QStringLiteral("playerpic_label"));

        horizontalLayout_2->addWidget(playerpic_label);

        vs_label = new QLabel(PlayRoundDialog);
        vs_label->setObjectName(QStringLiteral("vs_label"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        vs_label->setFont(font2);
        vs_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(vs_label);

        computerpic_label = new QLabel(PlayRoundDialog);
        computerpic_label->setObjectName(QStringLiteral("computerpic_label"));

        horizontalLayout_2->addWidget(computerpic_label);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PlayRoundDialog);

        QMetaObject::connectSlotsByName(PlayRoundDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayRoundDialog)
    {
        PlayRoundDialog->setWindowTitle(QApplication::translate("PlayRoundDialog", "Dialog", Q_NULLPTR));
        player_label->setText(QApplication::translate("PlayRoundDialog", "Player", Q_NULLPTR));
        computer_label->setText(QApplication::translate("PlayRoundDialog", "Computer", Q_NULLPTR));
        shoot_label->setText(QApplication::translate("PlayRoundDialog", "SHOOT", Q_NULLPTR));
        playerpic_label->setText(QApplication::translate("PlayRoundDialog", "TextLabel", Q_NULLPTR));
        vs_label->setText(QApplication::translate("PlayRoundDialog", "VS", Q_NULLPTR));
        computerpic_label->setText(QApplication::translate("PlayRoundDialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayRoundDialog: public Ui_PlayRoundDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYROUNDDIALOG_H
