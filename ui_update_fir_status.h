/********************************************************************************
** Form generated from reading UI file 'update_fir_status.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_FIR_STATUS_H
#define UI_UPDATE_FIR_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Update_fir_status
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Update_fir_status)
    {
        if (Update_fir_status->objectName().isEmpty())
            Update_fir_status->setObjectName("Update_fir_status");
        Update_fir_status->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Update_fir_status);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Update_fir_status);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Update_fir_status);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Update_fir_status);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Update_fir_status);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Update_fir_status);

        QMetaObject::connectSlotsByName(Update_fir_status);
    } // setupUi

    void retranslateUi(QDialog *Update_fir_status)
    {
        Update_fir_status->setWindowTitle(QCoreApplication::translate("Update_fir_status", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Update_fir_status", "Update FIR Status", nullptr));
        label->setText(QCoreApplication::translate("Update_fir_status", "FIR Id", nullptr));
        pushButton->setText(QCoreApplication::translate("Update_fir_status", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_fir_status: public Ui_Update_fir_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_FIR_STATUS_H
