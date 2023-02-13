#ifndef VIEW_FIR_H
#define VIEW_FIR_H

#include <QDialog>

namespace Ui {
class View_fir;
}

class View_fir : public QDialog
{
    Q_OBJECT

public:
    explicit View_fir(QWidget *parent = nullptr);
    ~View_fir();

private slots:
    void on_back_police_menu_button_clicked();

    void on_check_fir_details_button_clicked();

private:
    Ui::View_fir *ui;
};

#endif // VIEW_FIR_H
