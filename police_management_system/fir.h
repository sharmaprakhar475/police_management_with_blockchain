#ifndef FIR_H
#define FIR_H
#include <QString>

class FIR
{
public:
    QString firID;
    QString complaintID;
    QString policeStationID;
    QString details;
    QString status;
    QString timestamp;
    FIR();
    FIR(QString fid, QString cid, QString pid, QString det, QString stat, QString ts);
};

#endif // FIR_H
