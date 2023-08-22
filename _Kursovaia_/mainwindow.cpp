#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <child.h>//ОБЯЗАТЕЛЬНО чтобы обект дочернего создать
#include <QMessageBox>
#include <cmath>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    p = new Parent(this);//так надо по правиллам
    connect(this, &MainWindow::signal_to_class, p, &Parent::slot_from_Main_Window);//связали сигнал из гглавного окна с слотом класса
    connect(p, &Parent::signal_to_MainWindow, this, &MainWindow::slot_from_class);//СВЯЗАЛИ СИГНАЛ ИЗ КЛАССА С ГЛАВНЫМ ОКНОМ
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//обработка события клика
{
    if(ui->lineEdit->text().toDouble() && ui->lineEdit_2->text().toDouble() && ui->lineEdit->text().toDouble() > 0 && ui->lineEdit_2->text().toDouble() > 0)//проверка на числа, больше нуля
    {
        double n = ui->lineEdit->text().toDouble();//перевод в дабл первое значение
        double n1 = ui->lineEdit_2->text().toDouble();//перевод в дабл второго
        emit signal_to_class(n, n1);//отправили сигнал с этими двумя значениями
    }
    else
    {
        QMessageBox::information(this, "Calculate", "Введите положительные числа!");//окно с сообением об ошибке
    }
}
void MainWindow::slot_from_class(double n2)//слот который мы приняли от класса с переменной результатом
{
    QString str = QString::number(n2);//присваиваем в переменную str переведенное в стринг округленного значения n2
    ui->label_5->setText(str);
}

void MainWindow::on_pushButton_2_clicked()
{
    if((ui->lineEdit->text().toDouble() && ui->lineEdit_2->text().toDouble() && ui->lineEdit_3->text().toDouble()) && (ui->lineEdit->text().toDouble() > 0 && ui->lineEdit_2->text().toDouble() > 0 && ui->lineEdit_3->text().toDouble() > 0))//проверка на числа, больше нуля
    {
            double n = ui->lineEdit->text().toDouble();//перевод в дабл наших всех полей если все условия соблюдены
            double n1 = ui->lineEdit_2->text().toDouble();
            double n2 = ui->lineEdit_3->text().toDouble();
            Child ch(n, n1, n2);//создание объекта дочернего класса
            double res = ch.Sum();//присвоили в переменную значение, которое нам вернкла функция Perimetr
            QString str = QString::number(res);//присваиваем в строковую переменную результата
            ui->label_7->setText(str);//вставляем наше строковое значение в label_7
    }
    else
    {
        QMessageBox::information(this, "Calculate", "Введите положительные числа!");//вывод сообщения о ошибке если неправильный ввод
    }
}

