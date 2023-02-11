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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register_fir
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Register_fir)
    {
        if (Register_fir->objectName().isEmpty())
            Register_fir->setObjectName("Register_fir");
        Register_fir->resize(709, 575);
        verticalLayout_2 = new QVBoxLayout(Register_fir);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Register_fir);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Register_fir);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Register_fir);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Register_fir);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Register_fir);

        QMetaObject::connectSlotsByName(Register_fir);
    } // setupUi

    void retranslateUi(QDialog *Register_fir)
    {
        Register_fir->setWindowTitle(QCoreApplication::translate("Register_fir", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register_fir", "Register FIR", nullptr));
        label_2->setText(QCoreApplication::translate("Register_fir", "Complaint ID", nullptr));
        pushButton->setText(QCoreApplication::translate("Register_fir", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register_fir: public Ui_Register_fir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FIR_H
