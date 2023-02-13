#ifndef VIEW_COMPLAINT_STATUS_H
#define VIEW_COMPLAINT_STATUS_H

#include <QDialog>

namespace Ui {
class View_complaint_status;
}

class View_complaint_status : public QDialog
{
    Q_OBJECT

public:
    explicit View_complaint_status(QWidget *parent = nullptr);
    ~View_complaint_status();

private slots:
    void on_check_complaint_details_button_clicked();

    void on_back_user_menu_button_clicked();

private:
    Ui::View_complaint_status *ui;
};

#endif // VIEW_COMPLAINT_STATUS_H
