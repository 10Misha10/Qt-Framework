#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    form2 = new Form2;
    connect(form2, &Form2::signalForm2, this, &Form::slotForm2);//соединяем сигнал и слот
    connect(this, &Form::signalFormForm2, form2, &Form2::slotForm2Form);

}
bool gen, un;
int hei;
Form::~Form()
{
    delete ui;
}

void Form::on_horizontalSlider_3_valueChanged(int value)
{
    if(un == true){
        QString label = QString::number(value);
        ui->label_8->setText(label);
    }
    else{
        QString label = QString::number(value*0.1);
        ui->label_8->setText(label);
    }

}
void Form::slot(QString i, QString i2, bool genderr, bool unitt, int heig){
    gen = genderr;
    un = unitt;
    hei = heig;
    if(i == "СМ"){
        QString label = QString::number(ui->horizontalSlider_3->value());
        ui->label_8->setText(label);
    }
    else{
        QString label = QString::number(ui->horizontalSlider_3->value()*0.1);
        ui->label_8->setText(label);
    }
    ui->label_9->setText(i);//меняем текст с помощью метода setText, в качестве аргумента используем i
    ui->label_2->setText(i2);
}
void Form::slotForm2()
{
   this->setVisible(1);
}

void Form::on_pushButton_2_clicked()
{
    this->setVisible(0);
    emit signalForm();
}


void Form::on_pushButton_clicked()
{
    this->setVisible(0);
    emit signalFormForm2(gen, ui->horizontalSlider_3->value(), hei);
    form2->show();
}

