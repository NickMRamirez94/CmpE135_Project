#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QCryptographicHash>
#include <QtDebug>


#include "Utilities.h"

Utilities::Utilities()
{

}

QString Utilities::GetMapDataFile(const QString & username, const QString & password)
{
    QString uname = "";
    QString filename = "_mapdata.txt";

    QByteArray hashed_password = GetHashedPassword(password);

    QString path = QCoreApplication::applicationDirPath();
    path.append("/LoginData/userlogin.txt");
    QFile login_file(path);
    if(login_file.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream stream(&login_file);
        QString login_data = stream.readAll();
        login_file.close();

        QStringList user_info = login_data.split("\n");
        for(auto it = user_info.begin(); it != user_info.end(); it++)
        {
            QStringList uname_pword = it->split(" ");
            if(uname_pword.length() == 2)
            {
                if(uname_pword[1] == hashed_password)
                {
                    uname = uname_pword[0];
                    break;
                }
            }
        }
        filename.prepend(uname);

    }
    return filename;
}

QByteArray Utilities::GetHashedPassword(const QString & password)
{
    QByteArray bytearray_password = password.toLocal8Bit();
    QCryptographicHash hasher(QCryptographicHash::Sha1);
    hasher.addData(bytearray_password);
    return hasher.result();
}

void Utilities::CreateNewUser(const QString & username, const QString & password)
{
    QByteArray hashed_password = GetHashedPassword(password);

    QString path = QCoreApplication::applicationDirPath();
    path.append("/LoginData/userlogin.txt");
    QFile login_file(path);
    if(login_file.open(QFile::Append | QFile::Text))
    {
        QTextStream stream(&login_file);
        stream << username << " " << hashed_password << "\n";
        login_file.close();
    }
}

bool Utilities::CheckAdmin(const QString & username, const QString & password)
{
    bool is_admin = false;
    QString filename = "_mapdata.txt";

    QByteArray hashed_password = GetHashedPassword(password);

    QString path = QCoreApplication::applicationDirPath();
    path.append("/LoginData/adminlogin.txt");
    QFile login_file(path);
    if(login_file.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream stream(&login_file);
        QString login_data = stream.readAll();
        login_file.close();

        QStringList user_info = login_data.split("\n");
        for(auto it = user_info.begin(); it != user_info.end(); it++)
        {
            QStringList uname_pword = it->split(" ");
            if(uname_pword.length() == 2)
            {
                if(uname_pword[1] == hashed_password)
                {
                    is_admin = true;
                    break;
                }
            }
        }
    }
    return is_admin;
}
