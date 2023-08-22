#ifndef BODY_TYPPE_H
#define BODY_TYPPE_H
#include <weight.h>
#include <QObject>

class Body_typpe : public Weight
{
    double wrist_girth;
public:
    explicit Body_typpe(Weight *parent = nullptr);
    Weight*weightt;
    Body_typpe(int h, bool g,  int w): Weight(h, g), wrist_girth(w){}
    double last_Calculate(){
        if (get_gender() == 1){
            if (wrist_girth < 17){
                return Calculate() * 0.9;
            }
            else if (wrist_girth >= 17 && wrist_girth <= 20){
                return Calculate();
            }
            else{
                return Calculate() * 1.1;
            }
        }
        else{
            if (wrist_girth < 16){
                return Calculate() * 0.9;
            }
            else if (wrist_girth >= 16 && wrist_girth <= 18){
                return Calculate();
            }
            else{
                return Calculate() * 1.1;
            }
        }
    }
/*public slots:
    void slot_from_form2_(bool genderr, int slider, int hei);\
signals:
    void signal_from_body_typpe(QString str);*/

};

#endif // BODY_TYPPE_H
