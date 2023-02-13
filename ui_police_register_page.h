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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Police_register_page
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *police_id_label;
    QLineEdit *police_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *police_password_label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *police_password;
    QLabel *police_register_page;
    QPushButton *police_register_button;
    QPushButton *back_button;

    void setupUi(QDialog *Police_register_page)
    {
        if (Police_register_page->objectName().isEmpty())
            Police_register_page->setObjectName("Police_register_page");
        Police_register_page->resize(786, 580);
        widget = new QWidget(Police_register_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 240, 251, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        police_id_label = new QLabel(widget);
        police_id_label->setObjectName("police_id_label");

        horizontalLayout->addWidget(police_id_label);

        police_id = new QLineEdit(widget);
        police_id->setObjectName("police_id");

        horizontalLayout->addWidget(police_id);

        widget1 = new QWidget(Police_register_page);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(280, 310, 251, 32));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        police_password_label = new QLabel(widget1);
        police_password_label->setObjectName("police_password_label");

        horizontalLayout_3->addWidget(police_password_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        police_password = new QLineEdit(widget1);
        police_password->setObjectName("police_password");

        horizontalLayout_2->addWidget(police_password);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        police_register_page = new QLabel(Police_register_page);
        police_register_page->setObjectName("police_register_page");
        police_register_page->setGeometry(QRect(270, 140, 311, 44));
        police_register_button = new QPushButton(Police_register_page);
        police_register_button->setObjectName("police_register_button");
        police_register_button->setGeometry(QRect(330, 390, 141, 31));
        back_button = new QPushButton(Police_register_page);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 538, 91, 31));

        retranslateUi(Police_register_page);

        QMetaObject::connectSlotsByName(Police_register_page);
    } // setupUi

    void retranslateUi(QDialog *Police_register_page)
    {
        Police_register_page->setWindowTitle(QCoreApplication::translate("Police_register_page", "Dialog", nullptr));
        police_id_label->setText(QCoreApplication::translate("Police_register_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Police Id</span></p></body></html>", nullptr));
        police_password_label->setText(QCoreApplication::translate("Police_register_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Password</span></p></body></html>", nullptr));
        police_register_page->setText(QCoreApplication::translate("Police_register_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Police Register Page</span></p></body></html>", nullptr));
        police_register_button->setText(QCoreApplication::translate("Police_register_page", "Register", nullptr));
        back_button->setText(QCoreApplication::translate("Police_register_page", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Police_register_page: public Ui_Police_register_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_REGISTER_PAGE_H
