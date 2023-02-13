#include "global.h"
#include "block.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include "bits/stdc++.h"

using namespace std;

global::global()
{

}

void global::storeDataInBlockchain()
{
    // Store data of userDB
    QString userData;
    for (int i = 0; i < uCount; i++)
    {
        userData += (userDB[i].userID + " " + userDB[i].password + "\n");
    }

    // Store data of complaintDB
    QString complaintData;
    for (int i = 0; i < cCount; i++)
    {
        complaintData += (complaintDB[i].complaintID + " " + complaintDB[i].name + " " + complaintDB[i].details + " " + complaintDB[i].status + " " + complaintDB[i].timestamp + "\n");
    }

    // Store data of policeDB
    QString policeData;
    for (int i = 0; i < pCount; i++)
    {
        policeData += (policeDB[i].policeStationID + " " + policeDB[i].password + "\n");
    }

    // Store data of firDB
    QString firData;
    for (int i = 0; i < fCount; i++)
    {
        firData += (firDB[i].firID + " " + firDB[i].complaintID + " " + firDB[i].policeStationID + " " + firDB[i].details + " " + firDB[i].status + " " + firDB[i].timestamp + "\n");
    }

    // Combine all data
    QString data = userData + complaintData + policeData + firData;

    // Store data in blockchain
    if (blockchain.empty())
    {
        // Genesis block
        blockchain.push_back(Block(0, getTimestamp(), data, "0"));
    }
    else
    {
        // Add new block
        int index = blockchain.back().index + 1;
        QString previousHash = blockchain.back().hash;
        blockchain.push_back(Block(index, getTimestamp(), data, previousHash));
    }

//    if (blockchain.size() % BLOCK_SIZE == 0)
//    {
//        QMessageBox::information(NULL,"Blockchain Status",QString("Blockchain size is: %1\nData stored in blockchain: \n%2\n").arg(blockchain.size()).arg(data));
//    }
}

void global::retrieveData()
{
    pCount = 0;
    uCount = 0;
    fCount = 0;
    cCount = 0;

    QDir dir = QDir::current();

    QString userPath = dir.filePath("userDB.txt");
    QFile userFile(userPath);
    if (!userFile.open(QFile::ReadOnly | QFile::Text))
        return;
    while (!userFile.atEnd()) {
        QString line = userFile.readLine().trimmed();
        QStringList fields = line.split(",");
        userDB[uCount].userID = fields[0];
        userDB[uCount].password = fields[1];
        uCount++;
    }
    userFile.close();

    QString complaintPath = dir.filePath("complaintDB.txt");
    QFile complaintFile(complaintPath);
    if (!complaintFile.open(QFile::ReadOnly | QFile::Text))
        return;
    while (!complaintFile.atEnd()) {
        QString line = complaintFile.readLine().trimmed();
        QStringList fields = line.split(",");

        complaintDB[cCount].complaintID = fields[0];
        complaintDB[cCount].name = fields[1];
        complaintDB[cCount].details = fields[2];
        complaintDB[cCount].status = fields[3];
        complaintDB[cCount].timestamp = fields[4];
        cCount++;
    }
    complaintFile.close();

    QString policePath = dir.filePath("policeDB.txt");
    QFile policeFile(policePath);
    if (!policeFile.open(QFile::ReadOnly | QFile::Text))
        return;

    while (!policeFile.atEnd()) {
        QString line = policeFile.readLine().trimmed();
        QStringList fields = line.split(",");

        policeDB[pCount].policeStationID = fields[0];
        policeDB[pCount].password = fields[1];
        pCount++;
    }
    policeFile.close();

    QString firPath = dir.filePath("firDB.txt");
    QFile firFile(firPath);
    if (!firFile.open(QFile::ReadOnly | QFile::Text))
        return;
    while (!firFile.atEnd()) {
        QString line = firFile.readLine().trimmed();
        QStringList fields = line.split(",");

        firDB[fCount].firID = fields[0];
        firDB[fCount].complaintID = fields[1];
        firDB[fCount].details = fields[2];
        firDB[fCount].status = fields[3];
        firDB[fCount].timestamp = fields[4];
        fCount++;
    }
    firFile.close();
}
QString global::getTimestamp()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    QString ss;
    QString tm_mon = QString::number(1 + ltm->tm_mon);
    QString tm_year = QString::number(1900 + ltm->tm_year);
    ss = (tm_year + "-" + tm_mon + "-" +
            QString::number(ltm->tm_mday) + " " + QString::number(ltm->tm_hour) + ":" + QString::number(ltm->tm_min) + ":" + QString::number(ltm->tm_sec));
    return ss;
}

User userDB[100];
FIR firDB[100];
Complaint complaintDB[100];
PoliceStation policeDB[100];
int uCount=0, cCount=0, pCount=0, fCount=0;
