#include "form2.h"
#include "ui_form2.h"
#include <QDebug>
#include <body_typpe.h>
Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
   /* w = new Weight(this);
    body = new Body_typpe(w);
    connect(this, &Form2::signal_to_body_typpe, body, &Body_typpe::slot_from_form2_);
    connect(body, &Body_typpe::signal_from_body_typpe, this, &Form2::slot_from_body_typpe);*/
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_pushButton_2_clicked()
{
    this->setVisible(0);
    emit signalForm2();
}
void Form2::slotForm2Form(bool genderr, int slider, int hei)
{
   //emit signal_to_body_typpe(hei, genderr, slider);
   Body_typpe body(hei, genderr, slider);
   QString str;
   str.setNum(body.last_Calculate());
   if(str == "9"){ui->label_2->setText(" 9");}
   else{ui->label_2->setText(str);}

}

/*void Form2::slot_from_body_typpe(QString str)
{
    if(str == "9"){ui->label_2->setText(" 9");}
    else{ui->label_2->setText(str);}
}*/

