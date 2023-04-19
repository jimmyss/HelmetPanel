/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_image;
    QLabel *label_title2;
    QLabel *label_title3;
    QLineEdit *lineEdit_id1;
    QLineEdit *lineEdit_id2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2_back;
    QPushButton *Register_B;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 520);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, 0, 780, 520));
        label_image->setStyleSheet(QString::fromUtf8("border-image: url(:/background/login.jpg);\n"
"background-repeat: no repeat;\n"
"\n"
""));
        label_title2 = new QLabel(centralwidget);
        label_title2->setObjectName(QString::fromUtf8("label_title2"));
        label_title2->setGeometry(QRect(410, 180, 311, 51));
        label_title2->setStyleSheet(QString::fromUtf8("font: 28pt \"SourceHanSansSC\";\n"
"color: rgba(96,96,96,1);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_title3 = new QLabel(centralwidget);
        label_title3->setObjectName(QString::fromUtf8("label_title3"));
        label_title3->setGeometry(QRect(410, 250, 361, 51));
        label_title3->setStyleSheet(QString::fromUtf8("font: 14pt \"SourceHanSansSC\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(82,82,82,1);"));
        lineEdit_id1 = new QLineEdit(centralwidget);
        lineEdit_id1->setObjectName(QString::fromUtf8("lineEdit_id1"));
        lineEdit_id1->setGeometry(QRect(100, 230, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Candara"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit_id1->setFont(font);
        lineEdit_id1->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id2 = new QLineEdit(centralwidget);
        lineEdit_id2->setObjectName(QString::fromUtf8("lineEdit_id2"));
        lineEdit_id2->setGeometry(QRect(100, 290, 211, 31));
        lineEdit_id2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 350, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"15px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 150, 71, 31));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"SourceHanSansSC\";\n"
"color: rgba(0,0,0,1);"));
        label_2_back = new QLabel(centralwidget);
        label_2_back->setObjectName(QString::fromUtf8("label_2_back"));
        label_2_back->setGeometry(QRect(70, 110, 271, 311));
        label_2_back->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"\n"
"\n"
""));
        Register_B = new QPushButton(centralwidget);
        Register_B->setObjectName(QString::fromUtf8("Register_B"));
        Register_B->setGeometry(QRect(220, 350, 101, 31));
        Register_B->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
"background-color: rgb(215, 188, 201);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"15px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        label_image->raise();
        label_2_back->raise();
        label_title2->raise();
        label_title3->raise();
        lineEdit_id1->raise();
        lineEdit_id2->raise();
        pushButton->raise();
        label->raise();
        Register_B->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_image->setText(QString());
        label_title2->setText(QCoreApplication::translate("MainWindow", "Helmet Testing", nullptr));
        label_title3->setText(QCoreApplication::translate("MainWindow", "The server obtains the data of the client for detection.", nullptr));
        lineEdit_id1->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter your mobile number", nullptr));
        lineEdit_id2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please input a password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2_back->setText(QString());
        Register_B->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
