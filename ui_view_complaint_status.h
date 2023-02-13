/********************************************************************************
** Form generated from reading UI file 'view_complaint_status.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_COMPLAINT_STATUS_H
#define UI_VIEW_COMPLAINT_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_complaint_status
{
public:
    QPushButton *check_complaint_details_button;
    QPushButton *back_user_menu_button;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *complaint_id;

    void setupUi(QDialog *View_complaint_status)
    {
        if (View_complaint_status->objectName().isEmpty())
            View_complaint_status->setObjectName("View_complaint_status");
        View_complaint_status->resize(793, 601);
        check_complaint_details_button = new QPushButton(View_complaint_status);
        check_complaint_details_button->setObjectName("check_complaint_details_button");
        check_complaint_details_button->setGeometry(QRect(300, 280, 131, 31));
        back_user_menu_button = new QPushButton(View_complaint_status);
        back_user_menu_button->setObjectName("back_user_menu_button");
        back_user_menu_button->setGeometry(QRect(10, 558, 91, 31));
        label_2 = new QLabel(View_complaint_status);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 130, 350, 44));
        widget = new QWidget(View_complaint_status);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(250, 210, 247, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        complaint_id = new QLineEdit(widget);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);


        retranslateUi(View_complaint_status);

        QMetaObject::connectSlotsByName(View_complaint_status);
    } // setupUi

    void retranslateUi(QDialog *View_complaint_status)
    {
        View_complaint_status->setWindowTitle(QCoreApplication::translate("View_complaint_status", "Dialog", nullptr));
        check_complaint_details_button->setText(QCoreApplication::translate("View_complaint_status", "Check Details", nullptr));
        back_user_menu_button->setText(QCoreApplication::translate("View_complaint_status", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("View_complaint_status", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">View Complaint Status</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("View_complaint_status", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint Id</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_complaint_status: public Ui_View_complaint_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_COMPLAINT_STATUS_H
