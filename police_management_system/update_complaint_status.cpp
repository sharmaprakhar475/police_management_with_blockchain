#include "update_complaint_status.h"
#include "ui_update_complaint_status.h"
#include "police_menu_page.h"
#include "global.h"

Update_complaint_status::Update_complaint_status(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update_complaint_status)
{
    ui->setupUi(this);
}

Update_complaint_status::~Update_complaint_status()
{
    delete ui;
}

void Update_complaint_status::on_back_button_clicked()
{
    hide();
    Police_menu_page *police_menu_page = new Police_menu_page();
    police_menu_page->show();
}


void Update_complaint_status::on_check_button_clicked()
{
    QString complaintID = ui->complaint_id->text();
    QString new_status = ui->new_complaint_status->text();

    global *Global=new global();
    Global->retrieveData();

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
        QMessageBox::information(this,"Complaint Status","Complaint not found");
        return;
    }

    complaintDB[complaintIndex].status = new_status;

    QDir dir = QDir::current();
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

    Global->storeDataInBlockchain();

    QMessageBox::information(this,"Complaint Status","The status of the Complaint has been updated successfully.");

    hide();
    Police_menu_page *police_menu_page = new Police_menu_page();
    police_menu_page->show();
}

