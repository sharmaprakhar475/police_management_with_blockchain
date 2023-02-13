/********************************************************************************
** Form generated from reading UI file 'user_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_LOGIN_PAGE_H
#define UI_USER_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_login_page
{
public:
    QLabel *label_3;
    QPushButton *User_login;
    QPushButton *back_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *user_id_label;
    QLineEdit *user_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_password_label;
    QLineEdit *user_password;

    void setupUi(QDialog *User_login_page)
    {
        if (User_login_page->objectName().isEmpty())
            User_login_page->setObjectName("User_login_page");
        User_login_page->resize(773, 598);
        label_3 = new QLabel(User_login_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 140, 249, 44));
        User_login = new QPushButton(User_login_page);
        User_login->setObjectName("User_login");
        User_login->setGeometry(QRect(320, 380, 131, 31));
        back_button = new QPushButton(User_login_page);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 558, 101, 31));
        widget = new QWidget(User_login_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 240, 321, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        user_id_label = new QLabel(widget);
        user_id_label->setObjectName("user_id_label");

        horizontalLayout->addWidget(user_id_label);

        user_id = new QLineEdit(widget);
        user_id->setObjectName("user_id");

        horizontalLayout->addWidget(user_id);

        widget1 = new QWidget(User_login_page);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(220, 310, 321, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        user_password_label = new QLabel(widget1);
        user_password_label->setObjectName("user_password_label");

        horizontalLayout_2->addWidget(user_password_label);

        user_password = new QLineEdit(widget1);
        user_password->setObjectName("user_password");

        horizontalLayout_2->addWidget(user_password);


        retranslateUi(User_login_page);

        QMetaObject::connectSlotsByName(User_login_page);
    } // setupUi

    void retranslateUi(QDialog *User_login_page)
    {
        User_login_page->setWindowTitle(QCoreApplication::translate("User_login_page", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("User_login_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">User Login Page</span></p></body></html>", nullptr));
        User_login->setText(QCoreApplication::translate("User_login_page", "Login ", nullptr));
        back_button->setText(QCoreApplication::translate("User_login_page", "Back", nullptr));
        user_id_label->setText(QCoreApplication::translate("User_login_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Aadhaar Number</span></p></body></html>", nullptr));
        user_password_label->setText(QCoreApplication::translate("User_login_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_login_page: public Ui_User_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGIN_PAGE_H
