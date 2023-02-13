#ifndef USER_MENU_PAGE_H
#define USER_MENU_PAGE_H

#include <QDialog>
#include "register_complaint.h"
#include "view_complaint_status.h"

namespace Ui {
class User_menu_page;
}

class User_menu_page : public QDialog
{
    Q_OBJECT

public:
    explicit User_menu_page(QWidget *parent = nullptr);
    ~User_menu_page();

private slots:
    void on_user_logout_button_clicked();

    void on_user_register_complaint_button_clicked();

    void on_user_view_complaint_status_button_clicked();

private:
    Ui::User_menu_page *ui;
    Register_complaint *register_complaint;
    View_complaint_status *view_complaint_status;
};

#endif // USER_MENU_PAGE_H
