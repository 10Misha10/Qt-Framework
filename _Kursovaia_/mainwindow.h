#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <parent.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Parent * p;//обязательно
signals:
    void signal_to_class(double n, double n1);//сигнал который отправится в класс
public slots:
    void slot_from_class(double n2);//слот принимает значение из класса
};
#endif // MAINWINDOW_H
