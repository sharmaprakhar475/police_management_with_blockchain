#include "view_complaint_status.h"
#include "ui_view_complaint_status.h"
#include "global.h"
#include "user_menu_page.h"

View_complaint_status::View_complaint_status(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::View_complaint_status)
{
    ui->setupUi(this);
}

View_complaint_status::~View_complaint_status()
{
    delete ui;
}

void View_complaint_status::on_check_complaint_details_button_clicked()
{
    global *Global=new global();
    Global->retrieveData();
    QString complaintID = ui->complaint_id->text();
    int complaintindex=-1;
    for (int i = 0; i < cCount; i++)
    {
        if (complaintDB[i].complaintID == complaintID)
        {
            complaintindex = i ;
            QMessageBox::information(this,"Complaint Status",
                 QString("Complaint ID: %1 \nDescription: %2 \nStatus: %3 \nTime: %4 \n")
                     .arg(complaintDB[i].complaintID)
                     .arg(complaintDB[i].details)
                     .arg(complaintDB[i].status)
                     .arg(complaintDB[i].timestamp));
            break;
        }
    }
    if(complaintindex==-1){
        QMessageBox::information(this,"Complaint Status","Complaint not found");
    }
    hide();
    User_menu_page *user_menu_page;
    user_menu_page = new User_menu_page(this);
    user_menu_page->show();
}

void View_complaint_status::on_back_user_menu_button_clicked()
{
    hide();
    User_menu_page *user_menu_page = new User_menu_page(this);
    user_menu_page->show();
}

