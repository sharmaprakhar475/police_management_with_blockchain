#ifndef UPDATE_FIR_STATUS_H
#define UPDATE_FIR_STATUS_H

#include <QDialog>

namespace Ui {
class Update_fir_status;
}

class Update_fir_status : public QDialog
{
    Q_OBJECT

public:
    explicit Update_fir_status(QWidget *parent = nullptr);
    ~Update_fir_status();

private slots:
    void on_back_button_clicked();

    void on_update_status_button_clicked();

private:
    Ui::Update_fir_status *ui;
};

#endif // UPDATE_FIR_STATUS_H
