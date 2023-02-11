/********************************************************************************
** Form generated from reading UI file 'police_menu_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICE_MENU_PAGE_H
#define UI_POLICE_MENU_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Police_menu_page
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *police_view_complaint_button;
    QPushButton *police_update_complaint_status_button;
    QPushButton *police_register_fir_button;
    QPushButton *police_view_fir_button;
    QPushButton *police_update_fir_status_button;
    QPushButton *police_logout_button;

    void setupUi(QDialog *Police_menu_page)
    {
        if (Police_menu_page->objectName().isEmpty())
            Police_menu_page->setObjectName("Police_menu_page");
        Police_menu_page->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Police_menu_page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Police_menu_page);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        police_view_complaint_button = new QPushButton(Police_menu_page);
        police_view_complaint_button->setObjectName("police_view_complaint_button");

        verticalLayout->addWidget(police_view_complaint_button);

        police_update_complaint_status_button = new QPushButton(Police_menu_page);
        police_update_complaint_status_button->setObjectName("police_update_complaint_status_button");

        verticalLayout->addWidget(police_update_complaint_status_button);

        police_register_fir_button = new QPushButton(Police_menu_page);
        police_register_fir_button->setObjectName("police_register_fir_button");

        verticalLayout->addWidget(police_register_fir_button);

        police_view_fir_button = new QPushButton(Police_menu_page);
        police_view_fir_button->setObjectName("police_view_fir_button");

        verticalLayout->addWidget(police_view_fir_button);

        police_update_fir_status_button = new QPushButton(Police_menu_page);
        police_update_fir_status_button->setObjectName("police_update_fir_status_button");

        verticalLayout->addWidget(police_update_fir_status_button);

        police_logout_button = new QPushButton(Police_menu_page);
        police_logout_button->setObjectName("police_logout_button");

        verticalLayout->addWidget(police_logout_button);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Police_menu_page);

        QMetaObject::connectSlotsByName(Police_menu_page);
    } // setupUi

    void retranslateUi(QDialog *Police_menu_page)
    {
        Police_menu_page->setWindowTitle(QCoreApplication::translate("Police_menu_page", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Police_menu_page", "Police Menu", nullptr));
        police_view_complaint_button->setText(QCoreApplication::translate("Police_menu_page", "View Complaints", nullptr));
        police_update_complaint_status_button->setText(QCoreApplication::translate("Police_menu_page", "Update Complaint Status", nullptr));
        police_register_fir_button->setText(QCoreApplication::translate("Police_menu_page", "Register FIR", nullptr));
        police_view_fir_button->setText(QCoreApplication::translate("Police_menu_page", "View FIR", nullptr));
        police_update_fir_status_button->setText(QCoreApplication::translate("Police_menu_page", "Update FIR Status", nullptr));
        police_logout_button->setText(QCoreApplication::translate("Police_menu_page", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Police_menu_page: public Ui_Police_menu_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_MENU_PAGE_H
