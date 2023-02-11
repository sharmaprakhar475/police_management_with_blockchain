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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_View_complaint_status
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *complaint_id;

    void setupUi(QDialog *View_complaint_status)
    {
        if (View_complaint_status->objectName().isEmpty())
            View_complaint_status->setObjectName("View_complaint_status");
        View_complaint_status->resize(496, 426);
        verticalLayout_3 = new QVBoxLayout(View_complaint_status);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(View_complaint_status);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(View_complaint_status);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        complaint_id = new QLineEdit(View_complaint_status);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(View_complaint_status);

        QMetaObject::connectSlotsByName(View_complaint_status);
    } // setupUi

    void retranslateUi(QDialog *View_complaint_status)
    {
        View_complaint_status->setWindowTitle(QCoreApplication::translate("View_complaint_status", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("View_complaint_status", "View Complaint Status", nullptr));
        label->setText(QCoreApplication::translate("View_complaint_status", "Complaint Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_complaint_status: public Ui_View_complaint_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_COMPLAINT_STATUS_H
