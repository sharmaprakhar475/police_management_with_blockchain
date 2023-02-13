#include "view_complaints.h"
#include "ui_view_complaints.h"

View_complaints::View_complaints(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::View_complaints)
{
    ui->setupUi(this);
}

View_complaints::~View_complaints()
{
    delete ui;
}
