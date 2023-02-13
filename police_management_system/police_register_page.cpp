#include "police_register_page.h"
#include "ui_police_register_page.h"
#include "global.h"
#include "mainwindow.h"

Police_register_page::Police_register_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Police_register_page)
{
    ui->setupUi(this);
}

Police_register_page::~Police_register_page()
{
    delete ui;
}

void Police_register_page::on_police_register_button_clicked()
{
    PoliceStation police;
    police.policeStationID = ui->police_id->text();
    police.password = ui->police_password->text();

    global *Global=new global();
    Global->retrieveData();

    policeDB[pCount].policeStationID = police.policeStationID;
    policeDB[pCount].password = police.password;
    pCount++;

    QDir dir = QDir::current();
    QString policePath = dir.filePath("policeDB.txt");

    QFile policeFile(policePath);

    if (policeFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream policeStream(&policeFile);
        for (int i = 0; i < pCount; i++)
        {
            policeStream << policeDB[i].policeStationID << "," << policeDB[i].password << "\n";
        }
        policeFile.close();
    }

    QMessageBox::information(this,"Status","Police registered successfully");

    Global->storeDataInBlockchain();

    hide();
    police_login_page = new Police_login_page(this);
    police_login_page->show();
}


void Police_register_page::on_back_button_clicked()
{
    hide();
    MainWindow *mainwindow;
    mainwindow= new MainWindow(NULL);
    mainwindow->show();
}

