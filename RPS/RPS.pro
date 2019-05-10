#-------------------------------------------------
#
# Project created by QtCreator 2019-04-29T16:53:58
#
#-------------------------------------------------

QT       += core gui widgets
QT       +=     charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = RPS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        MainWindow.cpp \
    NewGameDialog.cpp \
    LoginDialog.cpp \
    LoginState.cpp \
    ExistingUserState.cpp \
    NewUserState.cpp \
    Record.cpp \
    RecordUI.cpp \
    Player.cpp \
    ChooserFactory.cpp \
    RandomChooser.cpp \
    SmartChooser.cpp \
    Game.cpp \
    PlayerChooser.cpp \
    GameUI.cpp \
    RotationChooser.cpp \
    RecordFactory.cpp \
    PlayRoundDialog.cpp \
    GameState.cpp \
    IdleState.cpp \
    PlayingState.cpp \
    GameOverState.cpp \
    Utilities.cpp \
    UserState.cpp \
    AdminState.cpp \
    NonAdminState.cpp \
    GraphDialog.cpp

HEADERS += \
        MainWindow.h \
    NewGameDialog.h \
    LoginDialog.h \
    LoginState.h \
    ExistingUserState.h \
    NewUserState.h \
    Record.h \
    Outcomes.h \
    Move.h \
    RecordUI.h \
    GameMode.h \
    Choices.h \
    Player.h \
    ChooserFactory.h \
    Chooser.h \
    RandomChooser.h \
    SmartChooser.h \
    Game.h \
    PlayerChooser.h \
    GameUI.h \
    RotationChooser.h \
    RecordFactory.h \
    RecordType.h \
    PlayRoundDialog.h \
    GameState.h \
    IdleState.h \
    PlayingState.h \
    GameOverState.h \
    Utilities.h \
    UserState.h \
    AdminState.h \
    NonAdminState.h \
    GraphDialog.h

FORMS += \
        MainWindow.ui \
    NewGameDialog.ui \
    LoginDialog.ui \
    PlayRoundDialog.ui \
    GraphDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
