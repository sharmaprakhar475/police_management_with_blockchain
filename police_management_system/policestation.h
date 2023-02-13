#ifndef POLICESTATION_H
#define POLICESTATION_H
#include <QString>

class PoliceStation
{
public:
    QString policeStationID;
    QString password;
    PoliceStation();
    PoliceStation(QString pid, QString pwd);
};

#endif // POLICESTATION_H
