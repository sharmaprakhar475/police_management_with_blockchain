/********************************************************************************
** Form generated from reading UI file 'police_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICE_LOGIN_PAGE_H
#define UI_POLICE_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Police_login_page
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *police_password_label;
    QLineEdit *police_password;
    QHBoxLayout *horizontalLayout;
    QLabel *police_id_label;
    QLineEdit *police_id;
    QPushButton *police_login;
    QPushButton *back_button;

    void setupUi(QDialog *Police_login_page)
    {
        if (Police_login_page->objectName().isEmpty())
            Police_login_page->setObjectName("Police_login_page");
        Police_login_page->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(Police_login_page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(Police_login_page);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        police_password_label = new QLabel(Police_login_page);
        police_password_label->setObjectName("police_password_label");

        horizontalLayout_2->addWidget(police_password_label);

        police_password = new QLineEdit(Police_login_page);
        police_password->setObjectName("police_password");

        horizontalLayout_2->addWidget(police_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        police_id_label = new QLabel(Police_login_page);
        police_id_label->setObjectName("police_id_label");

        horizontalLayout->addWidget(police_id_label);

        police_id = new QLineEdit(Police_login_page);
        police_id->setObjectName("police_id");

        horizontalLayout->addWidget(police_id);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        police_login = new QPushButton(Police_login_page);
        police_login->setObjectName("police_login");

        verticalLayout_2->addWidget(police_login);


        verticalLayout_3->addLayout(verticalLayout_2);

        back_button = new QPushButton(Police_login_page);
        back_button->setObjectName("back_button");

        verticalLayout_3->addWidget(back_button);


        retranslateUi(Police_login_page);

        QMetaObject::connectSlotsByName(Police_login_page);
    } // setupUi

    void retranslateUi(QDialog *Police_login_page)
    {
        Police_login_page->setWindowTitle(QCoreApplication::translate("Police_login_page", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Police_login_page", "Police Login Page", nullptr));
        police_password_label->setText(QCoreApplication::translate("Police_login_page", "Password", nullptr));
        police_id_label->setText(QCoreApplication::translate("Police_login_page", "Police Id", nullptr));
        police_login->setText(QCoreApplication::translate("Police_login_page", "Login", nullptr));
        back_button->setText(QCoreApplication::translate("Police_login_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Police_login_page: public Ui_Police_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_LOGIN_PAGE_H
