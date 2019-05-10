#ifndef UTILITIES_H
#define UTILITIES_H

#include <QString>
#include <QByteArray>


class Utilities
{
public:
    Utilities();

    static QString GetMapDataFile(const QString & username, const QString & password);

    static void CreateNewUser(const QString & username, const QString & password);

    static bool CheckAdmin(const QString & user, const QString & password);

 private:
    static QByteArray GetHashedPassword(const QString & password);
};

#endif // UTILITIES_H
