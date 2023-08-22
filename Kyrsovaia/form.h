#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <form2.h>
#include <weight.h>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_horizontalSlider_3_valueChanged(int value);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    Form2 *form2;

public slots:
    void slot(QString i, QString i2, bool gender, bool unit, int height);
    void slotForm2();
signals:
    void signalForm();
    void signalFormForm2(bool gender, int slider, int heig);
};

#endif // FORM_H
