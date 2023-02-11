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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_User_login_page
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *user_id_label;
    QLineEdit *user_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_password_label;
    QLineEdit *user_password;
    QPushButton *User_login;
    QPushButton *back_button;

    void setupUi(QDialog *User_login_page)
    {
        if (User_login_page->objectName().isEmpty())
            User_login_page->setObjectName("User_login_page");
        User_login_page->resize(521, 416);
        horizontalLayout_3 = new QHBoxLayout(User_login_page);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(User_login_page);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_id_label = new QLabel(User_login_page);
        user_id_label->setObjectName("user_id_label");

        horizontalLayout->addWidget(user_id_label);

        user_id = new QLineEdit(User_login_page);
        user_id->setObjectName("user_id");

        horizontalLayout->addWidget(user_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        user_password_label = new QLabel(User_login_page);
        user_password_label->setObjectName("user_password_label");

        horizontalLayout_2->addWidget(user_password_label);

        user_password = new QLineEdit(User_login_page);
        user_password->setObjectName("user_password");

        horizontalLayout_2->addWidget(user_password);


        verticalLayout->addLayout(horizontalLayout_2);

        User_login = new QPushButton(User_login_page);
        User_login->setObjectName("User_login");

        verticalLayout->addWidget(User_login);

        back_button = new QPushButton(User_login_page);
        back_button->setObjectName("back_button");

        verticalLayout->addWidget(back_button);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(User_login_page);

        QMetaObject::connectSlotsByName(User_login_page);
    } // setupUi

    void retranslateUi(QDialog *User_login_page)
    {
        User_login_page->setWindowTitle(QCoreApplication::translate("User_login_page", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("User_login_page", "Login for User", nullptr));
        user_id_label->setText(QCoreApplication::translate("User_login_page", "User Id", nullptr));
        user_password_label->setText(QCoreApplication::translate("User_login_page", "Password", nullptr));
        User_login->setText(QCoreApplication::translate("User_login_page", "Login ", nullptr));
        back_button->setText(QCoreApplication::translate("User_login_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_login_page: public Ui_User_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGIN_PAGE_H
