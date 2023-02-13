#include "view_fir.h"
#include "ui_view_fir.h"
#include "police_menu_page.h"
#include "global.h"

View_fir::View_fir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::View_fir)
{
    ui->setupUi(this);
}

View_fir::~View_fir()
{
    delete ui;
}

void View_fir::on_back_police_menu_button_clicked()
{
    hide();
    Police_menu_page *police_menu_page =new Police_menu_page();
    police_menu_page->show();
}

void View_fir::on_check_fir_details_button_clicked()
{
    QString firID= ui->fir_id->text();
    int firindex = -1;

    global *Global=new global();
    Global->retrieveData();

    for (int i = 0; i < fCount; i++)
    {
        if (firDB[i].firID == firID)
        {
            firindex = i ;
            QMessageBox::information(this,"FIR Details",
                QString("FIR ID: %1 \nComplaint ID: %2 \nFIR Details: %3 \nFIR Status: %4 \nTime: %5\n")
                    .arg(firDB[i].firID)
                    .arg(firDB[i].complaintID)
                    .arg(firDB[i].details)
                    .arg(firDB[i].status)
                    .arg(firDB[i].timestamp));
            break;
        }
    }
    if(firindex==-1){
        QMessageBox::information(this,"FIR Status","FIR not found");
    }
    hide();
    Police_menu_page *police_menu_page =new Police_menu_page();
    police_menu_page->show();
}

