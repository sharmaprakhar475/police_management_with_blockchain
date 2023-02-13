/********************************************************************************
** Form generated from reading UI file 'register_fir.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_FIR_H
#define UI_REGISTER_FIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_fir
{
public:
    QPushButton *pushButton;
    QPushButton *register_fir;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *complaint_id;

    void setupUi(QDialog *Register_fir)
    {
        if (Register_fir->objectName().isEmpty())
            Register_fir->setObjectName("Register_fir");
        Register_fir->resize(786, 599);
        pushButton = new QPushButton(Register_fir);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 560, 80, 29));
        register_fir = new QPushButton(Register_fir);
        register_fir->setObjectName("register_fir");
        register_fir->setGeometry(QRect(320, 300, 131, 31));
        label = new QLabel(Register_fir);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 150, 185, 44));
        widget = new QWidget(Register_fir);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(250, 230, 291, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        complaint_id = new QLineEdit(widget);
        complaint_id->setObjectName("complaint_id");

        horizontalLayout->addWidget(complaint_id);


        retranslateUi(Register_fir);

        QMetaObject::connectSlotsByName(Register_fir);
    } // setupUi

    void retranslateUi(QDialog *Register_fir)
    {
        Register_fir->setWindowTitle(QCoreApplication::translate("Register_fir", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Register_fir", "Back", nullptr));
        register_fir->setText(QCoreApplication::translate("Register_fir", "Register", nullptr));
        label->setText(QCoreApplication::translate("Register_fir", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Register FIR</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Register_fir", "<html><head/><body><p><span style=\" font-size:12pt;\">Complaint ID</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_fir: public Ui_Register_fir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FIR_H
