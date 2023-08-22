#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form.h>
#include <form2.h>
#include <weight.h>
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
    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Form* form;
    Weight * weight;
signals:
    void signal(QString, QString, bool, bool, int);
    void signalWeight(bool gender, int height);
public slots:
    void slotForm();
    void slotWeightMainWindow(int i);
};
#endif // MAINWINDOW_H
