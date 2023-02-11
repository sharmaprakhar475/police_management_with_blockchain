/********************************************************************************
** Form generated from reading UI file 'police_register_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICE_REGISTER_PAGE_H
#define UI_POLICE_REGISTER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Police_register_page
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *police_register_page;
    QHBoxLayout *horizontalLayout;
    QLabel *police_id_label;
    QLineEdit *police_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *police_password_label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *police_password;
    QPushButton *police_register_button;
    QPushButton *back_button;

    void setupUi(QDialog *Police_register_page)
    {
        if (Police_register_page->objectName().isEmpty())
            Police_register_page->setObjectName("Police_register_page");
        Police_register_page->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Police_register_page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        police_register_page = new QLabel(Police_register_page);
        police_register_page->setObjectName("police_register_page");

        verticalLayout->addWidget(police_register_page);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        police_id_label = new QLabel(Police_register_page);
        police_id_label->setObjectName("police_id_label");

        horizontalLayout->addWidget(police_id_label);

        police_id = new QLineEdit(Police_register_page);
        police_id->setObjectName("police_id");

        horizontalLayout->addWidget(police_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        police_password_label = new QLabel(Police_register_page);
        police_password_label->setObjectName("police_password_label");

        horizontalLayout_3->addWidget(police_password_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        police_password = new QLineEdit(Police_register_page);
        police_password->setObjectName("police_password");

        horizontalLayout_2->addWidget(police_password);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        police_register_button = new QPushButton(Police_register_page);
        police_register_button->setObjectName("police_register_button");

        verticalLayout->addWidget(police_register_button);

        back_button = new QPushButton(Police_register_page);
        back_button->setObjectName("back_button");

        verticalLayout->addWidget(back_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Police_register_page);

        QMetaObject::connectSlotsByName(Police_register_page);
    } // setupUi

    void retranslateUi(QDialog *Police_register_page)
    {
        Police_register_page->setWindowTitle(QCoreApplication::translate("Police_register_page", "Dialog", nullptr));
        police_register_page->setText(QCoreApplication::translate("Police_register_page", "Police Register Page", nullptr));
        police_id_label->setText(QCoreApplication::translate("Police_register_page", "Police Id", nullptr));
        police_password_label->setText(QCoreApplication::translate("Police_register_page", "Password", nullptr));
        police_register_button->setText(QCoreApplication::translate("Police_register_page", "Register", nullptr));
        back_button->setText(QCoreApplication::translate("Police_register_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Police_register_page: public Ui_Police_register_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_REGISTER_PAGE_H
