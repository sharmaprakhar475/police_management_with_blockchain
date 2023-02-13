#ifndef POLICE_LOGIN_PAGE_H
#define POLICE_LOGIN_PAGE_H

#include <QDialog>
#include "police_menu_page.h"

namespace Ui {
class Police_login_page;
}

class Police_login_page : public QDialog
{
    Q_OBJECT

public:
    explicit Police_login_page(QWidget *parent = nullptr);
    ~Police_login_page();

private slots:
    void on_police_login_clicked();

    void on_back_button_clicked();

private:
    Ui::Police_login_page *ui;
    Police_menu_page *police_menu_page;
};

#endif // POLICE_LOGIN_PAGE_H
