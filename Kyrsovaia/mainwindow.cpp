#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form = new Form;//инициализация объекта Form
    connect(this, &MainWindow::signal, form, &Form::slot);//соединяем сигнал и слот
    connect(form, &Form::signalForm, this, &MainWindow::slotForm);//соединяем сигнал и слот

    weight = new Weight(this);
    connect(this, &MainWindow::signalWeight, weight, &Weight::slotWeight);
    connect(weight, &Weight::signalWeightMainWindow, this, &MainWindow::slotWeightMainWindow);
    ui->pushButton_3->pressed();
    ui->pushButton_4->pressed();
    ui->horizontalSlider->setMaximum(220);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool Gender, Unit = true;
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if(Unit == true){
        QString label = QString::number(value);
        ui->label->setText(label);
    }
    else{
        QString label = QString::number(value*0.1);
        ui->label->setText(label);
    }
}

void MainWindow::on_pushButton_2_pressed()
{
    QString label = QString::number((ui->horizontalSlider->value())*0.1);
    ui->label->setText(label);
    ui->label_5->setText(" ДM");
    ui->pushButton_2->setStyleSheet("	background-color: rgb(255, 157, 148);color: rgb(255, 255, 255); border: 1px solid gray;border-radius: 20px;font-weight: 650;");
    ui->pushButton_3->setStyleSheet("background-color: rgb(255, 255, 255);color: rgb(255, 157, 148); border-radius: 20px;font-weight: 650;");
    Unit = false;
}


void MainWindow::on_pushButton_3_pressed()
{
    if(Unit == false){
        QString label = QString::number((ui->horizontalSlider->value()));
        ui->label->setText(label);
    }
    ui->label_5->setText("СМ");
    ui->horizontalSlider->setMaximum(220);
    ui->horizontalSlider->setMinimum(120);
    ui->pushButton_3->setStyleSheet("	background-color: rgb(255, 157, 148);color: rgb(255, 255, 255); border: 1px solid gray;border-radius: 20px;font-weight: 650;");
    ui->pushButton_2->setStyleSheet("background-color: rgb(255, 255, 255);color: rgb(255, 157, 148); border-radius: 20px;font-weight: 650;");
    Unit = true;
}


void MainWindow::on_pushButton_4_pressed()
{
    ui->pushButton_4->setStyleSheet("background-color: rgb(255, 157, 148);color: rgb(255, 255, 255); border: 1px solid gray;border-radius: 20px;font-weight: 650;");
    ui->pushButton_5->setStyleSheet("background-color: rgb(255, 255, 255);color: rgb(255, 157, 148); border-radius: 20px;font-weight: 550;");
    Gender = true;
}


void MainWindow::on_pushButton_5_pressed()
{
    ui->pushButton_5->setStyleSheet("	background-color: rgb(255, 157, 148);color: rgb(255, 255, 255); border: 1px solid gray;border-radius: 20px;font-weight: 650;");
    ui->pushButton_4->setStyleSheet("background-color: rgb(255, 255, 255);color: rgb(255, 157, 148); border-radius: 20px;font-weight: 650;");
    Gender = false;
}


void MainWindow::on_pushButton_clicked()
{
    this->setVisible(0);
    emit signalWeight(Gender, ui->horizontalSlider->value());
    form->show();//вывод виджета;
}
void MainWindow::slotForm()
{
    this->setVisible(1);
}
void MainWindow::slotWeightMainWindow(int i)
{
    QString str;
    str.setNum(i);
    emit signal(ui->label_5->text(), str, Gender, Unit, ui->horizontalSlider->value());
}

