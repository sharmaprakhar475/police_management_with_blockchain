#include "update_fir_status.h"
#include "ui_update_fir_status.h"
#include "police_menu_page.h"
#include "global.h"

Update_fir_status::Update_fir_status(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update_fir_status)
{
    ui->setupUi(this);
}

Update_fir_status::~Update_fir_status()
{
    delete ui;
}

void Update_fir_status::on_back_button_clicked()
{
    hide();
    Police_menu_page *police_menu_page = new Police_menu_page();
    police_menu_page->show();
}


void Update_fir_status::on_update_status_button_clicked()
{
    QString firID = ui->fir_id->text();
    QString new_status = ui->new_fir_status->text();
    int firIndex = -1;

    global *Global=new global();
    Global->retrieveData();

    for (int i = 0; i < fCount; i++)
    {
        if (firDB[i].firID == firID)
        {
            firIndex = i;
            break;
        }
    }

    if (firIndex == -1)
    {
        QMessageBox::information(this,"FIR Status","Invalid FIR ID");
        return;
    }

    firDB[firIndex].status = new_status;

    QDir dir = QDir::current();
    QString firPath = dir.filePath("firDB.txt");
    QFile firFile(firPath);
    if (firFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream firStream(&firFile);
        for (int i = 0; i <= fCount; i++)
        {
            QString data = firDB[i].firID + "," + firDB[i].complaintID + "," + firDB[i].details
                    + "," + firDB[i].status + "," + firDB[i].timestamp + "\n";
            firStream << data;
        }
        firFile.close();
    }

    QMessageBox::information(this,"FIR Status","The status of the FIR has been updated successfully.");

    Global->storeDataInBlockchain();

    hide();
    Police_menu_page *police_menu_page = new Police_menu_page();
    police_menu_page->show();
}

