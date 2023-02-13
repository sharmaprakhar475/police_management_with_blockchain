#ifndef GLOBAL_H
#define GLOBAL_H
#include "user.h"
#include "fir.h"
#include "complaint.h"
#include "policestation.h"
#include "block.h"
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QVector>

class global
{
public:
    global();
    QString getTimestamp();
    void storeDataInBlockchain();
    void retrieveData();
};
extern User userDB[100];
extern FIR firDB[100];
extern Complaint complaintDB[100];
extern PoliceStation policeDB[100];
extern int uCount, cCount, pCount, fCount;
#endif // GLOBAL_H
