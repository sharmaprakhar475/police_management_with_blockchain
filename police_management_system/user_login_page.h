#ifndef USER_LOGIN_PAGE_H
#define USER_LOGIN_PAGE_H

#include <QDialog>
#include "user_menu_page.h"

namespace Ui {
class User_login_page;
}

class User_login_page : public QDialog
{
    Q_OBJECT

public:
    explicit User_login_page(QWidget *parent = nullptr);
    ~User_login_page();

private slots:
    void on_User_login_clicked();

    void on_back_button_clicked();

private:
    Ui::User_login_page *ui;
    User_menu_page *user_menu_page;
};

#endif // USER_LOGIN_PAGE_H
