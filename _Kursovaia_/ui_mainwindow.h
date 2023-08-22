/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_7;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(521, 556);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cc/free-icon-calculator-8072290.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow{\n"
"	background-color: rgb(2, 149, 253);\n"
"	background-color: rgb(220, 34, 90);\n"
"	background-color: rgb(24, 24, 24);\n"
"	/*bacground-image: url(:/img/.png);*/\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border: 1px solid black;\n"
"	/*background-color: rgb(167, 255, 99);*/\n"
"	border-radius: 12px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 480, 161, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-family: 13pt \"Simplex_IV25\";\n"
"font: 9pt \"Segoe UI\";\n"
"background-color: rgb(73, 73, 73);\n"
"border-radius: 1em;\n"
"border: 1px solid black;\n"
"color: rgb(185, 185, 185);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 231, 81));
        label_4->setStyleSheet(QString::fromUtf8("font: bold 20pt \"Sitka Small\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 410, 181, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"background-color: rgb(217, 217, 217);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 80, 211, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"background-color: rgb(217, 217, 217);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 0, 151, 91));
        label_2->setStyleSheet(QString::fromUtf8("font: bold 22pt \"Sitka Small\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 310, 331, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: bold 20pt \"Sitka Small\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 320, 241, 71));
        label_8->setStyleSheet(QString::fromUtf8("font: bold 20pt \"Sitka Small\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 201, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"background-color: rgb(217, 217, 217);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 250, 161, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font-family: 13pt \"Simplex_IV25\";\n"
"font: 9pt \"Segoe UI\";\n"
"background-color: rgb(73, 73, 73);\n"
"border-radius: 1em;\n"
"border: 1px solid black;\n"
"color: rgb(185, 185, 185);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 0, 211, 91));
        label->setStyleSheet(QString::fromUtf8("font: bold 22pt \"Sitka Small\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 160, 261, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: bold 25pt \"Sitka Small\";\n"
"font: 30pt \"Segoe UI\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        label_5->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 410, 251, 42));
        label_7->setStyleSheet(QString::fromUtf8("font: bold 25pt \"Sitka Small\";\n"
"font: 30pt \"Segoe UI\";\n"
"color: rgb(19, 25, 7);\n"
"color: rgb(253, 255, 254);\n"
"color: rgb(185, 185, 185);\n"
"/*background-color: rgb(255, 249, 166);\n"
"border-radius: 10%;*/"));
        label_7->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 521, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260\n"
"\320\263\320\270\320\277\320\276\321\202\320\265\320\275\321\203\320\267\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\321\202 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260\n"
"\320\277\321\200\320\270\320\267\320\274\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \321\200\320\265\320\261\320\265\321\200\n"
" \320\277\321\200\320\270\320\267\320\274\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\321\202 2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
