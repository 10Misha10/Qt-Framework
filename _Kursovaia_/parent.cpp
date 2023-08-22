#include "parent.h"
#include <QDebug>
Parent::Parent(QObject *parent)
    : QObject{parent}
{

}

void Parent::slot_from_Main_Window(double n, double n1)
{
    Parent par(n, n1);//создаем объект с нашими переданными значениями
    double res = par.Gipotenuza();//писвоили в переменную значенме, которое нам вернула функия Degrees
    emit signal_to_MainWindow(res);//отправляем сигналом в главное окно наше значение результата
}
