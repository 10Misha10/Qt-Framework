#ifndef WEIGHT_H
#define WEIGHT_H

#include <QObject>
class Weight : public QObject
{
    Q_OBJECT
    int height;
    bool gender;
public:
    explicit Weight(QObject *parent = nullptr);
    int get_height(){
        return height;
    }
    int get_gender(){
        return gender;
    }
    Weight(int h, bool g): height(h), gender(g){}
    int Calculate(){
        if (gender == 1){
            return height - 100;
        }
        else{
            return height - 110;
        }
    }
signals:
    void signalWeightMainWindow(int i);
public slots:
    void slotWeight(bool gender, int height);

};


#endif // WEIGHT_H
