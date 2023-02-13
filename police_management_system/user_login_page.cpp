#include "user_login_page.h"
#include "ui_user_login_page.h"
#include "global.h"
#include "mainwindow.h"

User_login_page::User_login_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_login_page)
{
    ui->setupUi(this);
}

User_login_page::~User_login_page()
{
    delete ui;
}

void User_login_page::on_User_login_clicked()
{
    User user;
    user.userID = ui->user_id->text();
    user.password = ui->user_password->text();

    int userIndex = -1;

    global *Global=new global();
    Global->retrieveData();

    for (int i = 0; i < uCount; i++) {
        if (userDB[i].userID == user.userID && userDB[i].password == user.password) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        QMessageBox::information(this,"Status","Invalid User ID or password");
    }

    else{
        hide();
        user_menu_page = new User_menu_page(this);
        user_menu_page->show();
    }
}

void User_login_page::on_back_button_clicked()
{
    hide();
    MainWindow *mainwindow;
    mainwindow = new MainWindow(NULL);
    mainwindow->show();
}

