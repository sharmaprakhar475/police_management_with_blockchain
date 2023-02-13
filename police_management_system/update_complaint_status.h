#ifndef UPDATE_COMPLAINT_STATUS_H
#define UPDATE_COMPLAINT_STATUS_H

#include <QDialog>

namespace Ui {
class Update_complaint_status;
}

class Update_complaint_status : public QDialog
{
    Q_OBJECT

public:
    explicit Update_complaint_status(QWidget *parent = nullptr);
    ~Update_complaint_status();

private slots:
    void on_back_button_clicked();

    void on_check_button_clicked();

private:
    Ui::Update_complaint_status *ui;
};

#endif // UPDATE_COMPLAINT_STATUS_H
