#ifndef USER_REGISTER_PAGE_H
#define USER_REGISTER_PAGE_H

#include <QDialog>
#include "user_login_page.h"

namespace Ui {
class User_register_page;
}

class User_register_page : public QDialog
{
    Q_OBJECT

public:
    explicit User_register_page(QWidget *parent = nullptr);
    ~User_register_page();

private slots:
    void on_user_register_button_clicked();

    void on_back_button_clicked();

private:
    Ui::User_register_page *ui;
    User_login_page *user_login_page;
};

#endif // USER_REGISTER_PAGE_H
