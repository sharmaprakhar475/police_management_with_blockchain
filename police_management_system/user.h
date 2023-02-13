#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    QString userID;
    QString password;
    User();
    User(QString uid, QString pwd);
};

#endif // USER_H
