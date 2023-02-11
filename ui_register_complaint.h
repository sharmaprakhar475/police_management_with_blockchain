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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register_complaint
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *complaint_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *complaint_description;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *complaint_id;
    QPushButton *register_complaint_button;

    void setupUi(QDialog *Register_complaint)
    {
        if (Register_complaint->objectName().isEmpty())
            Register_complaint->setObjectName("Register_complaint");
        Register_complaint->resize(613, 449);
        horizontalLayout_4 = new QHBoxLayout(Register_complaint);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Register_complaint);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Register_complaint);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        complaint_title = new QLineEdit(Register_complaint);
        complaint_title->setObjectName("complaint_title");

        horizontalLayout->addWidget(complaint_title);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(Register_complaint);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        complaint_description = new QLineEdit(Register_complaint);
        complaint_description->setObjectName("complaint_description");

        horizontalLayout_2->addWidget(complaint_description);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(Register_complaint);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        complaint_id = new QLineEdit(Register_complaint);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout_3->addWidget(complaint_id);


        verticalLayout->addLayout(horizontalLayout_3);

        register_complaint_button = new QPushButton(Register_complaint);
        register_complaint_button->setObjectName("register_complaint_button");

        verticalLayout->addWidget(register_complaint_button);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(Register_complaint);

        QMetaObject::connectSlotsByName(Register_complaint);
    } // setupUi

    void retranslateUi(QDialog *Register_complaint)
    {
        Register_complaint->setWindowTitle(QCoreApplication::translate("Register_complaint", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register_complaint", "Register Complaint", nullptr));
        label_2->setText(QCoreApplication::translate("Register_complaint", "Complaint Title", nullptr));
        label_3->setText(QCoreApplication::translate("Register_complaint", "Complaint Description", nullptr));
        label_4->setText(QCoreApplication::translate("Register_complaint", "Complaint ID", nullptr));
        register_complaint_button->setText(QCoreApplication::translate("Register_complaint", "Register Complaint ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_complaint: public Ui_Register_complaint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_COMPLAINT_H
