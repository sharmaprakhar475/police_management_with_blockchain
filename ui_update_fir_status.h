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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Update_fir_status
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *new_fir_status;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fir_id;
    QLabel *label_2;
    QPushButton *update_status_button;
    QPushButton *back_button;

    void setupUi(QDialog *Update_fir_status)
    {
        if (Update_fir_status->objectName().isEmpty())
            Update_fir_status->setObjectName("Update_fir_status");
        Update_fir_status->resize(785, 567);
        widget = new QWidget(Update_fir_status);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 270, 291, 30));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        new_fir_status = new QLineEdit(widget);
        new_fir_status->setObjectName("new_fir_status");

        horizontalLayout_2->addWidget(new_fir_status);

        widget1 = new QWidget(Update_fir_status);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(260, 210, 291, 30));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fir_id = new QLineEdit(widget1);
        fir_id->setObjectName("fir_id");

        horizontalLayout->addWidget(fir_id);

        label_2 = new QLabel(Update_fir_status);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 120, 277, 44));
        update_status_button = new QPushButton(Update_fir_status);
        update_status_button->setObjectName("update_status_button");
        update_status_button->setGeometry(QRect(330, 340, 151, 31));
        back_button = new QPushButton(Update_fir_status);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(10, 528, 91, 31));

        retranslateUi(Update_fir_status);

        QMetaObject::connectSlotsByName(Update_fir_status);
    } // setupUi

    void retranslateUi(QDialog *Update_fir_status)
    {
        Update_fir_status->setWindowTitle(QCoreApplication::translate("Update_fir_status", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Update_fir_status", "<html><head/><body><p><span style=\" font-size:12pt;\">New FIR Status</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Update_fir_status", "<html><head/><body><p><span style=\" font-size:12pt;\">FIR ID</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Update_fir_status", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Update FIR Status</span></p></body></html>", nullptr));
        update_status_button->setText(QCoreApplication::translate("Update_fir_status", "Update Status", nullptr));
        back_button->setText(QCoreApplication::translate("Update_fir_status", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_fir_status: public Ui_Update_fir_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_FIR_STATUS_H
