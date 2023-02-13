#ifndef REGISTER_FIR_H
#define REGISTER_FIR_H

#include <QDialog>

namespace Ui {
class Register_fir;
}

class Register_fir : public QDialog
{
    Q_OBJECT

public:
    explicit Register_fir(QWidget *parent = nullptr);
    ~Register_fir();

private slots:
    void on_register_fir_clicked();

    void on_pushButton_clicked();

private:
    Ui::Register_fir *ui;
};

#endif // REGISTER_FIR_H
