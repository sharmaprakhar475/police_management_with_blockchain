#include "register_fir.h"
#include "ui_register_fir.h"
#include "global.h"
#include "police_menu_page.h"

Register_fir::Register_fir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_fir)
{
    ui->setupUi(this);
}

Register_fir::~Register_fir()
{
    delete ui;
}

void Register_fir::on_register_fir_clicked()
{
    QString complaintID=ui->complaint_id->text();
    int complaintIndex = -1;
    for (int i = 0; i < cCount; i++)
    {
        if (complaintDB[i].complaintID == complaintID)
        {
            complaintIndex = i;
            break;
        }
    }
    if (complaintIndex == -1)
    {
        QMessageBox::information(this,"FIR status","Invalid complaint ID");
        return;
    }

    if (complaintDB[complaintIndex].status != "Pending" && complaintDB[complaintIndex].status != "Progress" )
    {
        QMessageBox::information(this,"FIR status","This complaint has already been resolved or an FIR has been registered for it");
        return;
    }
    global *Global=new global();
    firDB[fCount].firID = QString::number(fCount + 1);
    firDB[fCount].complaintID = complaintID;
    firDB[fCount].details= complaintDB[complaintIndex].details;
    firDB[fCount].status = "Pending";
    firDB[fCount].timestamp = Global->getTimestamp();
    fCount++;

    Global->storeDataInBlockchain();

    QDir dir = QDir::current();
    QString firPath = dir.filePath("firDB.txt");
    QFile firFile(firPath);
    if (firFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream firStream(&firFile);
        for (int i = 0; i < fCount; i++)
        {
            QString data = firDB[i].firID + "," + firDB[i].complaintID + "," + firDB[i].details
                    + "," + firDB[i].status + "," + firDB[i].timestamp + "\n";
            firStream << data;
        }
        firFile.close();
    }

    complaintDB[complaintIndex].status = "FIR Registered";

    QString complaintPath = dir.filePath("complaintDB.txt");

    QFile file(complaintPath);
    if (file.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream complaintStream(&file);
        for (int i = 0; i < cCount; i++)
        {
            complaintStream << complaintDB[i].complaintID << "," << complaintDB[i].name << ","
                             << complaintDB[i].details << "," << complaintDB[i].status << ","
                             << complaintDB[i].timestamp << "\n";
        }
        file.close();
    }

    QMessageBox::information(this,"FIR status",QString("FIR has been registered successfully with FIR ID: %1").arg(firDB[fCount-1].firID));

    hide();
    Police_menu_page *police_menu_page=new Police_menu_page(this);
    police_menu_page->show();
}


void Register_fir::on_pushButton_clicked()
{
    hide();
    Police_menu_page *police_menu_page=new Police_menu_page(this);
    police_menu_page->show();
}

