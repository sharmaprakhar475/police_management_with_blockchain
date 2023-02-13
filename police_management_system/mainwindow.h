#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user_login_page.h"
#include "police_login_page.h"
#include "user_register_page.h"
#include "police_register_page.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_police_button_clicked();

    void on_user_register_button_clicked();

    void on_police_register_button_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    User_login_page *user_login_page;
    Police_login_page *police_login_page;
    User_register_page *user_register_page;
    Police_register_page *police_register_page;
};
#endif // MAINWINDOW_H
