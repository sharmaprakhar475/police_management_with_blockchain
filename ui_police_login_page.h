/********************************************************************************
** Form generated from reading UI file 'police_login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLICE_LOGIN_PAGE_H
#define UI_POLICE_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Police_login_page
{
public:
    QPushButton *back_button;
    QPushButton *police_login;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *police_id_label;
    QLineEdit *police_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *police_password_label;
    QLineEdit *police_password;

    void setupUi(QDialog *Police_login_page)
    {
        if (Police_login_page->objectName().isEmpty())
            Police_login_page->setObjectName("Police_login_page");
        Police_login_page->resize(858, 576);
        back_button = new QPushButton(Police_login_page);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 530, 80, 29));
        police_login = new QPushButton(Police_login_page);
        police_login->setObjectName("police_login");
        police_login->setGeometry(QRect(349, 340, 111, 29));
        label_3 = new QLabel(Police_login_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 100, 270, 44));
        widget = new QWidget(Police_login_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(301, 190, 207, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        police_id_label = new QLabel(widget);
        police_id_label->setObjectName("police_id_label");

        horizontalLayout->addWidget(police_id_label);

        police_id = new QLineEdit(widget);
        police_id->setObjectName("police_id");

        horizontalLayout->addWidget(police_id);

        widget1 = new QWidget(Police_login_page);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(301, 261, 215, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        police_password_label = new QLabel(widget1);
        police_password_label->setObjectName("police_password_label");

        horizontalLayout_2->addWidget(police_password_label);

        police_password = new QLineEdit(widget1);
        police_password->setObjectName("police_password");

        horizontalLayout_2->addWidget(police_password);


        retranslateUi(Police_login_page);

        QMetaObject::connectSlotsByName(Police_login_page);
    } // setupUi

    void retranslateUi(QDialog *Police_login_page)
    {
        Police_login_page->setWindowTitle(QCoreApplication::translate("Police_login_page", "Dialog", nullptr));
        back_button->setText(QCoreApplication::translate("Police_login_page", "Back", nullptr));
#if QT_CONFIG(whatsthis)
        police_login->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><span style=\" font-weight:700;\">Login</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        police_login->setText(QCoreApplication::translate("Police_login_page", "Login", nullptr));
#if QT_CONFIG(whatsthis)
        label_3->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("Police_login_page", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Police Login Page</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        police_id_label->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        police_id_label->setText(QCoreApplication::translate("Police_login_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Police Id</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        police_id->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        police_password_label->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        police_password_label->setText(QCoreApplication::translate("Police_login_page", "<html><head/><body><p><span style=\" font-size:12pt;\">Password</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        police_password->setWhatsThis(QCoreApplication::translate("Police_login_page", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class Police_login_page: public Ui_Police_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLICE_LOGIN_PAGE_H
