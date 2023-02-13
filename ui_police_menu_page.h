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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Police_menu_page
{
public:
    QPushButton *police_logout_button;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *police_register_fir_button;
    QPushButton *police_view_fir_button;
    QPushButton *police_update_fir_status_button;
    QPushButton *police_view_complaint_button;
    QPushButton *police_update_complaint_status_button;

    void setupUi(QDialog *Police_menu_page)
    {
        if (Police_menu_page->objectName().isEmpty())
            Police_menu_page->setObjectName("Police_menu_page");
        Police_menu_page->resize(875, 591);
        police_logout_button = new QPushButton(Police_menu_page);
        police_logout_button->setObjectName("police_logout_button");
        police_logout_button->setGeometry(QRect(20, 540, 101, 29));
        label = new QLabel(Police_menu_page);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 130, 190, 44));
        widget = new QWidget(Police_menu_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(360, 210, 177, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        police_register_fir_button = new QPushButton(widget);
        police_register_fir_button->setObjectName("police_register_fir_button");

        verticalLayout->addWidget(police_register_fir_button);

        police_view_fir_button = new QPushButton(widget);
        police_view_fir_button->setObjectName("police_view_fir_button");

        verticalLayout->addWidget(police_view_fir_button);

        police_update_fir_status_button = new QPushButton(widget);
        police_update_fir_status_button->setObjectName("police_update_fir_status_button");

        verticalLayout->addWidget(police_update_fir_status_button);

        police_view_complaint_button = new QPushButton(widget);
        police_view_complaint_button->setObjectName("police_view_complaint_button");

        verticalLayout->addWidget(police_view_complaint_button);

        police_update_complaint_status_button = new QPushButton(widget);
        police_update_complaint_status_button->setObjectName("police_update_complaint_status_button");

        verticalLayout->addWidget(police_update_complaint_status_button);


        retranslateUi(Police_menu_page);

        QMetaObject::connectSlotsByName(Police_menu_page);
    } // setupUi

    void retranslateUi(QDialog *Police_menu_page)
    {
        Police_menu_page->setWindowTitle(QCoreApplication::translate("Police_menu_page", "Dialog", nullptr));
        police_logout_button->setText(QCoreApplication::translate("Police_menu_page", "Logout", nullptr));
        label->setText(QCoreApplication::translate("Police_menu_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Police Menu</span></p></body></html>", nullptr));
        police_register_fir_button->setText(QCoreApplication::translate("Police_menu_page", "Register FIR", nullptr));
        police_view_fir_button->setText(QCoreApplication::translate("Police_menu_page", "View FIR", nullptr));
        police_update_fir_status_button->setText(QCoreApplication::translate("Police_menu_page", "Update FIR Status", nullptr));
        police_view_complaint_button->setText(QCoreApplication::translate("Police_menu_page", "View Complaints", nullptr));
        police_update_complaint_status_button->setText(QCoreApplication::translate("Police_menu_page", "Update Complaint Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Police_menu_page: public Ui_Police_menu_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_MENU_PAGE_H
