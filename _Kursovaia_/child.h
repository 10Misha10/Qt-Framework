#ifndef CHILD_H
#define CHILD_H

#include <QObject>
#include <parent.h>
class Child : public Parent
{
    //нету QOBJECT поэтому он не может работать с сигналами и слотами
    double c;
public:
    explicit Child(Parent *parent = nullptr);
    Parent * par;//создаем объект родительского класса
    Child(double a1, double b1, double c1)//конструктор принимает наши 3 параметра
        :Parent(a1, b1), c(c1){}
    double Sum()
    {
        return c*3 + get_b()*2 + get_a()*2 + Gipotenuza()*2;
    }
};

#endif // CHILD_H
