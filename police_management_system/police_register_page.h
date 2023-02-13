#ifndef POLICE_REGISTER_PAGE_H
#define POLICE_REGISTER_PAGE_H

#include <QDialog>
#include "police_login_page.h"

namespace Ui {
class Police_register_page;
}

class Police_register_page : public QDialog
{
    Q_OBJECT

public:
    explicit Police_register_page(QWidget *parent = nullptr);
    ~Police_register_page();

private slots:
    void on_police_register_button_clicked();

    void on_back_button_clicked();

private:
    Ui::Police_register_page *ui;
    Police_login_page *police_login_page;
};

#endif // POLICE_REGISTER_PAGE_H
