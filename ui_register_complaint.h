/********************************************************************************
** Form generated from reading UI file 'register_complaint.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_COMPLAINT_H
#define UI_REGISTER_COMPLAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_complaint
{
public:
    QPushButton *register_complaint_button;
    QPushButton *back_user_menu_button;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *complaint_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *complaint_title;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *complaint_description;

    void setupUi(QDialog *Register_complaint)
    {
        if (Register_complaint->objectName().isEmpty())
            Register_complaint->setObjectName("Register_complaint");
        Register_complaint->resize(853, 573);
        register_complaint_button = new QPushButton(Register_complaint);
        register_complaint_button->setObjectName("register_complaint_button");
        register_complaint_button->setGeometry(QRect(360, 430, 181, 31));
        back_user_menu_button = new QPushButton(Register_complaint);
        back_user_menu_button->setObjectName("back_user_menu_button");
        back_user_menu_button->setGeometry(QRect(10, 530, 80, 29));
        label = new QLabel(Register_complaint);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 130, 296, 44));
        widget = new QWidget(Register_complaint);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 230, 331, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        complaint_id = new QLineEdit(widget);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);

        widget1 = new QWidget(Register_complaint);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(280, 290, 331, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        complaint_title = new QLineEdit(widget1);
        complaint_title->setObjectName("complaint_title");

        horizontalLayout_2->addWidget(complaint_title);

        widget2 = new QWidget(Register_complaint);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(280, 350, 330, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        complaint_description = new QLineEdit(widget2);
        complaint_description->setObjectName("complaint_description");

        horizontalLayout_3->addWidget(complaint_description);


        retranslateUi(Register_complaint);

        QMetaObject::connectSlotsByName(Register_complaint);
    } // setupUi

    void retranslateUi(QDialog *Register_complaint)
    {
        Register_complaint->setWindowTitle(QCoreApplication::translate("Register_complaint", "Dialog", nullptr));
        register_complaint_button->setText(QCoreApplication::translate("Register_complaint", "Register Complaint ", nullptr));
        back_user_menu_button->setText(QCoreApplication::translate("Register_complaint", "Back", nullptr));
        label->setText(QCoreApplication::translate("Register_complaint", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Register Complaint</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Register_complaint", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint ID</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Register_complaint", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint Title</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Register_complaint", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint Description</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_complaint: public Ui_Register_complaint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_COMPLAINT_H
