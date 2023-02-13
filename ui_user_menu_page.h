/********************************************************************************
** Form generated from reading UI file 'user_menu_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MENU_PAGE_H
#define UI_USER_MENU_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_menu_page
{
public:
    QLabel *label;
    QPushButton *user_logout_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *user_register_complaint_button;
    QPushButton *user_view_complaint_status_button;

    void setupUi(QDialog *User_menu_page)
    {
        if (User_menu_page->objectName().isEmpty())
            User_menu_page->setObjectName("User_menu_page");
        User_menu_page->resize(769, 586);
        label = new QLabel(User_menu_page);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 140, 169, 44));
        user_logout_button = new QPushButton(User_menu_page);
        user_logout_button->setObjectName("user_logout_button");
        user_logout_button->setGeometry(QRect(10, 548, 91, 31));
        widget = new QWidget(User_menu_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 200, 181, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        user_register_complaint_button = new QPushButton(widget);
        user_register_complaint_button->setObjectName("user_register_complaint_button");

        verticalLayout->addWidget(user_register_complaint_button);

        user_view_complaint_status_button = new QPushButton(widget);
        user_view_complaint_status_button->setObjectName("user_view_complaint_status_button");

        verticalLayout->addWidget(user_view_complaint_status_button);


        retranslateUi(User_menu_page);

        QMetaObject::connectSlotsByName(User_menu_page);
    } // setupUi

    void retranslateUi(QDialog *User_menu_page)
    {
        User_menu_page->setWindowTitle(QCoreApplication::translate("User_menu_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("User_menu_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">User Menu</span></p></body></html>", nullptr));
        user_logout_button->setText(QCoreApplication::translate("User_menu_page", "Logout", nullptr));
        user_register_complaint_button->setText(QCoreApplication::translate("User_menu_page", "Register Complaint", nullptr));
        user_view_complaint_status_button->setText(QCoreApplication::translate("User_menu_page", "View Complaint Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_menu_page: public Ui_User_menu_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MENU_PAGE_H
