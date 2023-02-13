#include "user_menu_page.h"
#include "ui_user_menu_page.h"
#include "mainwindow.h"

User_menu_page::User_menu_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_menu_page)
{
    ui->setupUi(this);
}

User_menu_page::~User_menu_page()
{
    delete ui;
}

void User_menu_page::on_user_logout_button_clicked()
{
    hide();
    MainWindow* mainwindow;
    mainwindow = new MainWindow(NULL);
    mainwindow->show();
}

void User_menu_page::on_user_register_complaint_button_clicked()
{
    hide();
    register_complaint = new Register_complaint(this);
    register_complaint->show();
}


void User_menu_page::on_user_view_complaint_status_button_clicked()
{
    hide();
    view_complaint_status = new View_complaint_status(this);
    view_complaint_status->show();
}

