#include "police_menu_page.h"
#include "ui_police_menu_page.h"
#include "mainwindow.h"
#include "global.h"

Police_menu_page::Police_menu_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Police_menu_page)
{
    ui->setupUi(this);
}

Police_menu_page::~Police_menu_page()
{
    delete ui;
}


void Police_menu_page::on_police_update_complaint_status_button_clicked()
{
    hide();
    update_complaint_status = new Update_complaint_status(this);
    update_complaint_status->show();
}


void Police_menu_page::on_police_register_fir_button_clicked()
{
    hide();
    register_fir = new Register_fir(this);
    register_fir->show();
}


void Police_menu_page::on_police_view_fir_button_clicked()
{
    hide();
    view_fir = new View_fir(this);
    view_fir->show();
}


void Police_menu_page::on_police_update_fir_status_button_clicked()
{
    hide();
    update_fir_status = new Update_fir_status(this);
    update_fir_status->show();
}


void Police_menu_page::on_police_logout_button_clicked()
{
    hide();
    MainWindow* mainwindow;
    mainwindow = new MainWindow(NULL);
    mainwindow->show();
}


void Police_menu_page::on_police_view_complaint_button_clicked()
{
    QString data = "";
    global *Global = new global();
    Global->retrieveData();
    for (int i = 0; i < cCount; i++)
    {
        data = data + "Complaint ID: " + complaintDB[i].complaintID + "\nComplaint Title: " +
                complaintDB[i].name+"\nDescription: " + complaintDB[i].details+"\nStatus: " +
                complaintDB[i].status+"\nTime: " + complaintDB[i].timestamp+"\n\n";
    }
    QMessageBox::information(this,"List of Complaints", QString("%1").arg(data));
}

