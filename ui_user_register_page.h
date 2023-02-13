/********************************************************************************
** Form generated from reading UI file 'user_register_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_REGISTER_PAGE_H
#define UI_USER_REGISTER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_register_page
{
public:
    QLabel *user_register_page;
    QPushButton *back_button;
    QPushButton *user_register_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *user_id_label;
    QLineEdit *user_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_password_label;
    QLineEdit *user_password;

    void setupUi(QDialog *User_register_page)
    {
        if (User_register_page->objectName().isEmpty())
            User_register_page->setObjectName("User_register_page");
        User_register_page->resize(746, 586);
        user_register_page = new QLabel(User_register_page);
        user_register_page->setObjectName("user_register_page");
        user_register_page->setGeometry(QRect(230, 130, 290, 44));
        back_button = new QPushButton(User_register_page);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 550, 91, 29));
        user_register_button = new QPushButton(User_register_page);
        user_register_button->setObjectName("user_register_button");
        user_register_button->setGeometry(QRect(310, 380, 151, 31));
        widget = new QWidget(User_register_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 230, 281, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        user_id_label = new QLabel(widget);
        user_id_label->setObjectName("user_id_label");

        horizontalLayout->addWidget(user_id_label);

        user_id = new QLineEdit(widget);
        user_id->setObjectName("user_id");

        horizontalLayout->addWidget(user_id);

        widget1 = new QWidget(User_register_page);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(240, 290, 281, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        user_password_label = new QLabel(widget1);
        user_password_label->setObjectName("user_password_label");

        horizontalLayout_2->addWidget(user_password_label);

        user_password = new QLineEdit(widget1);
        user_password->setObjectName("user_password");

        horizontalLayout_2->addWidget(user_password);


        retranslateUi(User_register_page);

        QMetaObject::connectSlotsByName(User_register_page);
    } // setupUi

    void retranslateUi(QDialog *User_register_page)
    {
        User_register_page->setWindowTitle(QCoreApplication::translate("User_register_page", "Dialog", nullptr));
        user_register_page->setText(QCoreApplication::translate("User_register_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">User Register Page</span></p></body></html>", nullptr));
        back_button->setText(QCoreApplication::translate("User_register_page", "Back", nullptr));
        user_register_button->setText(QCoreApplication::translate("User_register_page", "Register", nullptr));
        user_id_label->setText(QCoreApplication::translate("User_register_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Aadhaar Number</span></p></body></html>", nullptr));
        user_password_label->setText(QCoreApplication::translate("User_register_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_register_page: public Ui_User_register_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_REGISTER_PAGE_H
