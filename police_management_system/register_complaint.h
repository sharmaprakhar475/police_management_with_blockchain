#ifndef REGISTER_COMPLAINT_H
#define REGISTER_COMPLAINT_H

#include <QDialog>
namespace Ui {
class Register_complaint;
}

class Register_complaint : public QDialog
{
    Q_OBJECT

public:
    explicit Register_complaint(QWidget *parent = nullptr);
    ~Register_complaint();

private slots:
    void on_register_complaint_button_clicked();

    void on_back_user_menu_button_clicked();

private:
    Ui::Register_complaint *ui;
};

#endif // REGISTER_COMPLAINT_H
