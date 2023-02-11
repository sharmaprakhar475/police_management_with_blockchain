/********************************************************************************
** Form generated from reading UI file 'update_complaint_status.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_COMPLAINT_STATUS_H
#define UI_UPDATE_COMPLAINT_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Update_complaint_status
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *complaint_id;
    QPushButton *check_button;

    void setupUi(QDialog *Update_complaint_status)
    {
        if (Update_complaint_status->objectName().isEmpty())
            Update_complaint_status->setObjectName("Update_complaint_status");
        Update_complaint_status->resize(546, 453);
        verticalLayout_2 = new QVBoxLayout(Update_complaint_status);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Update_complaint_status);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Update_complaint_status);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        complaint_id = new QLineEdit(Update_complaint_status);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);


        verticalLayout->addLayout(horizontalLayout);

        check_button = new QPushButton(Update_complaint_status);
        check_button->setObjectName("check_button");

        verticalLayout->addWidget(check_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Update_complaint_status);

        QMetaObject::connectSlotsByName(Update_complaint_status);
    } // setupUi

    void retranslateUi(QDialog *Update_complaint_status)
    {
        Update_complaint_status->setWindowTitle(QCoreApplication::translate("Update_complaint_status", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Update_complaint_status", "Update Complaint Status", nullptr));
        label_2->setText(QCoreApplication::translate("Update_complaint_status", "Complaint ID", nullptr));
        check_button->setText(QCoreApplication::translate("Update_complaint_status", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_complaint_status: public Ui_Update_complaint_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_COMPLAINT_STATUS_H
