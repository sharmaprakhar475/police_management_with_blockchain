#ifndef POLICE_MENU_PAGE_H
#define POLICE_MENU_PAGE_H

#include <QDialog>
#include "update_complaint_status.h"
#include "register_fir.h"
#include "view_fir.h"
#include "update_fir_status.h"

namespace Ui {
class Police_menu_page;
}

class Police_menu_page : public QDialog
{
    Q_OBJECT

public:
    explicit Police_menu_page(QWidget *parent = nullptr);
    ~Police_menu_page();

private slots:
    void on_police_update_complaint_status_button_clicked();

    void on_police_register_fir_button_clicked();

    void on_police_view_fir_button_clicked();

    void on_police_update_fir_status_button_clicked();

    void on_police_logout_button_clicked();

    void on_police_view_complaint_button_clicked();

private:
    Ui::Police_menu_page *ui;
    Update_complaint_status *update_complaint_status;
    Register_fir *register_fir;
    View_fir *view_fir;
    Update_fir_status *update_fir_status;
};

#endif // POLICE_MENU_PAGE_H
