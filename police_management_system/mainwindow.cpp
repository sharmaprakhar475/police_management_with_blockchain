#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    user_login_page = new User_login_page(this);
    user_login_page->show();
}

void MainWindow::on_police_button_clicked()
{
    hide();
    police_login_page = new Police_login_page(this);
    police_login_page->show();
}


void MainWindow::on_user_register_button_clicked()
{
    hide();
    user_register_page = new User_register_page(this);
    user_register_page->show();
}


void MainWindow::on_police_register_button_clicked()
{
    hide();
    police_register_page = new Police_register_page(this);
    police_register_page->show();
}


void MainWindow::on_pushButton_clicked()
{
    exit(1);
}




