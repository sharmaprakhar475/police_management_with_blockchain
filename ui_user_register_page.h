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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_User_register_page
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *user_register_page;
    QHBoxLayout *horizontalLayout;
    QLabel *user_id_label;
    QLineEdit *user_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_password_label;
    QLineEdit *user_password;
    QPushButton *user_register_button;
    QPushButton *back_button;

    void setupUi(QDialog *User_register_page)
    {
        if (User_register_page->objectName().isEmpty())
            User_register_page->setObjectName("User_register_page");
        User_register_page->resize(400, 300);
        horizontalLayout_3 = new QHBoxLayout(User_register_page);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        user_register_page = new QLabel(User_register_page);
        user_register_page->setObjectName("user_register_page");

        verticalLayout->addWidget(user_register_page);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_id_label = new QLabel(User_register_page);
        user_id_label->setObjectName("user_id_label");

        horizontalLayout->addWidget(user_id_label);

        user_id = new QLineEdit(User_register_page);
        user_id->setObjectName("user_id");

        horizontalLayout->addWidget(user_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        user_password_label = new QLabel(User_register_page);
        user_password_label->setObjectName("user_password_label");

        horizontalLayout_2->addWidget(user_password_label);

        user_password = new QLineEdit(User_register_page);
        user_password->setObjectName("user_password");

        horizontalLayout_2->addWidget(user_password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        user_register_button = new QPushButton(User_register_page);
        user_register_button->setObjectName("user_register_button");

        verticalLayout_2->addWidget(user_register_button);

        back_button = new QPushButton(User_register_page);
        back_button->setObjectName("back_button");

        verticalLayout_2->addWidget(back_button);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(User_register_page);

        QMetaObject::connectSlotsByName(User_register_page);
    } // setupUi

    void retranslateUi(QDialog *User_register_page)
    {
        User_register_page->setWindowTitle(QCoreApplication::translate("User_register_page", "Dialog", nullptr));
        user_register_page->setText(QCoreApplication::translate("User_register_page", "User Register Page", nullptr));
        user_id_label->setText(QCoreApplication::translate("User_register_page", "User Id", nullptr));
        user_password_label->setText(QCoreApplication::translate("User_register_page", "Password", nullptr));
        user_register_button->setText(QCoreApplication::translate("User_register_page", "Register", nullptr));
        back_button->setText(QCoreApplication::translate("User_register_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_register_page: public Ui_User_register_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_REGISTER_PAGE_H
