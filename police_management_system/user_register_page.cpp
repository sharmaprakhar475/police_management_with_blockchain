#include "user_register_page.h"
#include "ui_user_register_page.h"
#include "global.h"
#include "mainwindow.h"
#include <bits/stdc++.h>
using namespace std;

User_register_page::User_register_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_register_page)
{
    ui->setupUi(this);
}

User_register_page::~User_register_page()
{
    delete ui;
}

void User_register_page::on_user_register_button_clicked()
{
    User newUser;
    newUser.userID = ui->user_id->text();
    newUser.password = ui->user_password->text();

    global *Global=new global();
    Global->retrieveData();

    userDB[uCount].userID = newUser.userID;
    userDB[uCount].password = newUser.password;
    uCount++;

    QDir dir = QDir::current();
    QString userPath = dir.filePath("userDB.txt");

    QFile userFile(userPath);
    if (userFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream userStream(&userFile);
        for (int i = 0; i < uCount; i++)
        {
            userStream << userDB[i].userID << "," << userDB[i].password << "\n";
        }
        userFile.close();
    }

    QMessageBox::information(this,"Status","User registered successfully");

    Global->storeDataInBlockchain();

    hide();
    user_login_page = new User_login_page(this);
    user_login_page->show();
}


void User_register_page::on_back_button_clicked()
{
    hide();
    MainWindow *mainwindow;
    mainwindow = new MainWindow(NULL);
    mainwindow->show();
}

