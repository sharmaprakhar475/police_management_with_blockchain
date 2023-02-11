/********************************************************************************
** Form generated from reading UI file 'view_complaints.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_COMPLAINTS_H
#define UI_VIEW_COMPLAINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_View_complaints
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *View_complaints)
    {
        if (View_complaints->objectName().isEmpty())
            View_complaints->setObjectName("View_complaints");
        View_complaints->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(View_complaints);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(View_complaints);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(View_complaints);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(View_complaints);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(View_complaints);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(View_complaints);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(View_complaints);

        QMetaObject::connectSlotsByName(View_complaints);
    } // setupUi

    void retranslateUi(QDialog *View_complaints)
    {
        View_complaints->setWindowTitle(QCoreApplication::translate("View_complaints", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("View_complaints", "List of complaints", nullptr));
        label_2->setText(QCoreApplication::translate("View_complaints", "Complaint Id", nullptr));
        label_3->setText(QCoreApplication::translate("View_complaints", "User Id", nullptr));
        label_4->setText(QCoreApplication::translate("View_complaints", "Complaint", nullptr));
        label_5->setText(QCoreApplication::translate("View_complaints", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_complaints: public Ui_View_complaints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_COMPLAINTS_H
