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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Update_complaint_status
{
public:
    QPushButton *back_button;
    QPushButton *check_button;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *complaint_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *new_complaint_status;

    void setupUi(QDialog *Update_complaint_status)
    {
        if (Update_complaint_status->objectName().isEmpty())
            Update_complaint_status->setObjectName("Update_complaint_status");
        Update_complaint_status->resize(747, 581);
        back_button = new QPushButton(Update_complaint_status);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 540, 80, 29));
        check_button = new QPushButton(Update_complaint_status);
        check_button->setObjectName("check_button");
        check_button->setGeometry(QRect(320, 350, 131, 31));
        label = new QLabel(Update_complaint_status);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 130, 388, 44));
        widget = new QWidget(Update_complaint_status);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(210, 220, 351, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        complaint_id = new QLineEdit(widget);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);

        widget1 = new QWidget(Update_complaint_status);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(210, 280, 351, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        new_complaint_status = new QLineEdit(widget1);
        new_complaint_status->setObjectName("new_complaint_status");

        horizontalLayout_2->addWidget(new_complaint_status);


        retranslateUi(Update_complaint_status);

        QMetaObject::connectSlotsByName(Update_complaint_status);
    } // setupUi

    void retranslateUi(QDialog *Update_complaint_status)
    {
        Update_complaint_status->setWindowTitle(QCoreApplication::translate("Update_complaint_status", "Dialog", nullptr));
        back_button->setText(QCoreApplication::translate("Update_complaint_status", "Back", nullptr));
        check_button->setText(QCoreApplication::translate("Update_complaint_status", "Update Status", nullptr));
        label->setText(QCoreApplication::translate("Update_complaint_status", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Update Complaint Status</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Update_complaint_status", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint ID</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Update_complaint_status", "<html><head/><body><p><span style=\" font-size:12pt;\">New Complaint Status</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_complaint_status: public Ui_Update_complaint_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_COMPLAINT_STATUS_H
