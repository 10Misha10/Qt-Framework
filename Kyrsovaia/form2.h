#ifndef FORM2_H
#define FORM2_H
#include <body_typpe.h>
#include <weight.h>
#include <QWidget>
namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

private:
    Ui::Form2 *ui;
    //Weight * w;
    //Body_typpe * body;
signals:
    void signalForm2();
    //void signal_to_body_typpe(bool genderr, int slider, int hei);
private slots:
    void on_pushButton_2_clicked();
public slots:
    void slotForm2Form(bool gender, int slider, int hei);
    //void slot_from_body_typpe(QString str);
};

#endif // FORM2_H
