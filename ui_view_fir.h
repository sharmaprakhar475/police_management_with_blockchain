/********************************************************************************
** Form generated from reading UI file 'view_fir.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_FIR_H
#define UI_VIEW_FIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_fir
{
public:
    QPushButton *back_police_menu_button;
    QLabel *label;
    QPushButton *check_fir_details_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *fir_id;

    void setupUi(QDialog *View_fir)
    {
        if (View_fir->objectName().isEmpty())
            View_fir->setObjectName("View_fir");
        View_fir->resize(817, 586);
        back_police_menu_button = new QPushButton(View_fir);
        back_police_menu_button->setObjectName("back_police_menu_button");
        back_police_menu_button->setGeometry(QRect(10, 548, 91, 31));
        label = new QLabel(View_fir);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 160, 248, 44));
        check_fir_details_button = new QPushButton(View_fir);
        check_fir_details_button->setObjectName("check_fir_details_button");
        check_fir_details_button->setGeometry(QRect(320, 320, 151, 31));
        widget = new QWidget(View_fir);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 240, 231, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        fir_id = new QLineEdit(widget);
        fir_id->setObjectName("fir_id");

        horizontalLayout->addWidget(fir_id);


        retranslateUi(View_fir);

        QMetaObject::connectSlotsByName(View_fir);
    } // setupUi

    void retranslateUi(QDialog *View_fir)
    {
        View_fir->setWindowTitle(QCoreApplication::translate("View_fir", "Dialog", nullptr));
        back_police_menu_button->setText(QCoreApplication::translate("View_fir", "Back", nullptr));
        label->setText(QCoreApplication::translate("View_fir", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">View FIR Details</span></p></body></html>", nullptr));
        check_fir_details_button->setText(QCoreApplication::translate("View_fir", "Check Details", nullptr));
        label_2->setText(QCoreApplication::translate("View_fir", "<html><head/><body><p><span style=\" font-size:12pt;\">FIR ID</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_fir: public Ui_View_fir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_FIR_H
