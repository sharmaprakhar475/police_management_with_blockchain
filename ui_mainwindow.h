/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *police_button;
    QPushButton *user_register_button;
    QPushButton *police_register_button;
    QMenuBar *menubar;
    QMenu *menuPolice_Management;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(843, 599);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 100, 603, 44));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 510, 91, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 210, 151, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        police_button = new QPushButton(layoutWidget);
        police_button->setObjectName("police_button");
        police_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(police_button);

        user_register_button = new QPushButton(layoutWidget);
        user_register_button->setObjectName("user_register_button");

        verticalLayout->addWidget(user_register_button);

        police_register_button = new QPushButton(layoutWidget);
        police_register_button->setObjectName("police_register_button");

        verticalLayout->addWidget(police_register_button);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 843, 25));
        menuPolice_Management = new QMenu(menubar);
        menuPolice_Management->setObjectName("menuPolice_Management");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPolice_Management->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Welcome to Police Management Portal</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Login as User", nullptr));
        police_button->setText(QCoreApplication::translate("MainWindow", "Login as Police", nullptr));
        user_register_button->setText(QCoreApplication::translate("MainWindow", "Register as User", nullptr));
        police_register_button->setText(QCoreApplication::translate("MainWindow", "Register as Police", nullptr));
        menuPolice_Management->setTitle(QCoreApplication::translate("MainWindow", "Police Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
