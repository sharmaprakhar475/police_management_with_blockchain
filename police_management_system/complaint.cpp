#include "complaint.h"

Complaint::Complaint()
{

}
Complaint::Complaint(QString cid, QString nm, QString det, QString stat, QString ts)
        : complaintID(cid), name(nm), details(det), status(stat), timestamp(ts) {

}
QString Complaint::getComplaintID()
{
    return complaintID;
}
