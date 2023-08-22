#ifndef PARENT_H
#define PARENT_H

#include <QObject>

class Parent : public QObject
{
    Q_OBJECT//только если есть эта строчка, можно с сигналами и слотами работать в классе
    double a;
    double b;
public:
    explicit Parent(QObject *parent = nullptr);
    Parent(double a1, double b1)
        :a(a1), b(b1){}
    double get_a()
    {
        return a;
    }
    double get_b()
    {
        return b;
    }
    double Gipotenuza()
    {
        return sqrt(a*a + b*b);
    }
signals:
 void signal_to_MainWindow(double n2);//сигнал в главное окно из класса
public slots:
 void slot_from_Main_Window(double n, double n1);//слот для принятия значений из главного окна
};

#endif // PARENT_H
