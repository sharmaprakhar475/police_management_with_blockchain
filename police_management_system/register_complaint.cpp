#include "register_complaint.h"
#include "ui_register_complaint.h"
#include "global.h"
#include "user_menu_page.h"

Register_complaint::Register_complaint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_complaint)
{
    ui->setupUi(this);
}

Register_complaint::~Register_complaint()
{
    delete ui;
}

void Register_complaint::on_register_complaint_button_clicked()
{
    global *Global=new global();
    complaintDB[cCount].name = ui->complaint_title->text();
    complaintDB[cCount].details = ui->complaint_description->text();
    complaintDB[cCount].complaintID = ui->complaint_id->text();
    complaintDB[cCount].status = "Pending";
    complaintDB[cCount].timestamp = Global->getTimestamp();
    cCount++;

    Global->storeDataInBlockchain();

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
        QMessageBox::information(this,"Status","Complaint registered successfully");
        hide();
        User_menu_page *user_menu_page = new User_menu_page(this);
        user_menu_page->show();
    }
    else
    {
        QMessageBox::information(this,"Status","Unable to open the file.");
    }
}


void Register_complaint::on_back_user_menu_button_clicked()
{
    hide();
    User_menu_page *user_menu_page = new User_menu_page(this);
    user_menu_page->show();
}

