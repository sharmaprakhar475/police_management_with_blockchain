#ifndef COMPLAINT_H
#define COMPLAINT_H
#include <QString>

class Complaint
{

public:
    QString userId;
    QString complaintID;
    QString name;
    QString details;
    QString status;
    QString timestamp;

    Complaint();
    Complaint(QString cid, QString nm, QString det, QString stat, QString ts);
    QString getComplaintID();
};

#endif // COMPLAINT_H
