/********************************************************************************
** Form generated from reading UI file 'NewGameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEDIALOG_H
#define UI_NEWGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewGameDialog
{
public:
    QFormLayout *formLayout;
    QLineEdit *rounds_line_edit;
    QLabel *settings_label;
    QSpacerItem *verticalSpacer;
    QLabel *rounds_label;
    QComboBox *game_type_combobox;
    QLabel *game_type_label;
    QPushButton *submit_button;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *NewGameDialog)
    {
        if (NewGameDialog->objectName().isEmpty())
            NewGameDialog->setObjectName(QStringLiteral("NewGameDialog"));
        NewGameDialog->resize(371, 257);
        formLayout = new QFormLayout(NewGameDialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        rounds_line_edit = new QLineEdit(NewGameDialog);
        rounds_line_edit->setObjectName(QStringLiteral("rounds_line_edit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, rounds_line_edit);

        settings_label = new QLabel(NewGameDialog);
        settings_label->setObjectName(QStringLiteral("settings_label"));
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans UI"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        settings_label->setFont(font);

        formLayout->setWidget(2, QFormLayout::SpanningRole, settings_label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::LabelRole, verticalSpacer);

        rounds_label = new QLabel(NewGameDialog);
        rounds_label->setObjectName(QStringLiteral("rounds_label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, rounds_label);

        game_type_combobox = new QComboBox(NewGameDialog);
        game_type_combobox->setObjectName(QStringLiteral("game_type_combobox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, game_type_combobox);

        game_type_label = new QLabel(NewGameDialog);
        game_type_label->setObjectName(QStringLiteral("game_type_label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, game_type_label);

        submit_button = new QPushButton(NewGameDialog);
        submit_button->setObjectName(QStringLiteral("submit_button"));

        formLayout->setWidget(8, QFormLayout::FieldRole, submit_button);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_2);


        retranslateUi(NewGameDialog);

        QMetaObject::connectSlotsByName(NewGameDialog);
    } // setupUi

    void retranslateUi(QDialog *NewGameDialog)
    {
        NewGameDialog->setWindowTitle(QApplication::translate("NewGameDialog", "Dialog", Q_NULLPTR));
        settings_label->setText(QApplication::translate("NewGameDialog", "Please enter the settings for the new game", Q_NULLPTR));
        rounds_label->setText(QApplication::translate("NewGameDialog", "Enter the number of rounds:", Q_NULLPTR));
        game_type_combobox->clear();
        game_type_combobox->insertItems(0, QStringList()
         << QApplication::translate("NewGameDialog", "Easy", Q_NULLPTR)
         << QApplication::translate("NewGameDialog", "Medium", Q_NULLPTR)
         << QApplication::translate("NewGameDialog", "Hard", Q_NULLPTR)
        );
        game_type_label->setText(QApplication::translate("NewGameDialog", "Choose the game difficulty:", Q_NULLPTR));
        submit_button->setText(QApplication::translate("NewGameDialog", "Submit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewGameDialog: public Ui_NewGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEDIALOG_H
