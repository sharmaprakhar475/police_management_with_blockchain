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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_fir
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;

    void setupUi(QDialog *View_fir)
    {
        if (View_fir->objectName().isEmpty())
            View_fir->setObjectName("View_fir");
        View_fir->resize(400, 300);
        widget = new QWidget(View_fir);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 50, 111, 157));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        retranslateUi(View_fir);

        QMetaObject::connectSlotsByName(View_fir);
    } // setupUi

    void retranslateUi(QDialog *View_fir)
    {
        View_fir->setWindowTitle(QCoreApplication::translate("View_fir", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("View_fir", "FIR Details", nullptr));
        label_6->setText(QCoreApplication::translate("View_fir", "FIR Id", nullptr));
        label_2->setText(QCoreApplication::translate("View_fir", "Complaint Id", nullptr));
        label_3->setText(QCoreApplication::translate("View_fir", "Police Station Id", nullptr));
        label_5->setText(QCoreApplication::translate("View_fir", "FIR Date", nullptr));
        label_4->setText(QCoreApplication::translate("View_fir", "FIR Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_fir: public Ui_View_fir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_FIR_H
