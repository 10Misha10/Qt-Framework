#include "weight.h"
#include <QDebug>
Weight::Weight(QObject *parent)
    : QObject{parent}
{

}

void Weight::slotWeight(bool gender, int height)
{
   Weight w(height, gender);
   qDebug() << w.Calculate();
   height = w.Calculate();
   emit signalWeightMainWindow(height);
}

