#include "police_login_page.h"
#include "ui_police_login_page.h"
#include "global.h"
#include "mainwindow.h"

Police_login_page::Police_login_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Police_login_page)
{
    ui->setupUi(this);
}

Police_login_page::~Police_login_page()
{
    delete ui;
}

void Police_login_page::on_police_login_clicked()
{
    PoliceStation police;
    police.policeStationID = ui->police_id->text();
    police.password = ui->police_password->text();

    int policeIndex = -1;

    global *Global=new global();
    Global->retrieveData();

    for (int i = 0; i < uCount; i++) {
        if (policeDB[i].policeStationID == police.policeStationID && policeDB[i].password == police.password) {
            policeIndex = i;
            break;
        }
    }

    if (policeIndex == -1) {
        QMessageBox::information(this,"Status","Invalid Police ID or password");
    }

    else{
        hide();
        police_menu_page = new Police_menu_page(this);
        police_menu_page->show();
    }
}


void Police_login_page::on_back_button_clicked()
{
    hide();
    MainWindow *mainwindow;
    mainwindow = new MainWindow(NULL);
    mainwindow->show();
}

