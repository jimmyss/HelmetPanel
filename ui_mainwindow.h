/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLabel *label_title2;
    QLabel *label_title3;
    QLineEdit *lineEdit_id1;
    QLineEdit *lineEdit_id2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2_back;
    QPushButton *Register_B;
    QLabel *label_image;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1340, 850);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        label_title2 = new QLabel(centralwidget);
        label_title2->setObjectName(QStringLiteral("label_title2"));
        label_title2->setGeometry(QRect(460, 300, 481, 111));
        label_title2->setStyleSheet(QLatin1String("font: 28pt \"SourceHanSansSC\";\n"
"color: rgba(96,96,96,1);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_title3 = new QLabel(centralwidget);
        label_title3->setObjectName(QStringLiteral("label_title3"));
        label_title3->setGeometry(QRect(460, 420, 871, 131));
        label_title3->setStyleSheet(QLatin1String("font: 14pt \"SourceHanSansSC\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(82,82,82,1);"));
        lineEdit_id1 = new QLineEdit(centralwidget);
        lineEdit_id1->setObjectName(QStringLiteral("lineEdit_id1"));
        lineEdit_id1->setGeometry(QRect(100, 350, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("Candara"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit_id1->setFont(font);
        lineEdit_id1->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id2 = new QLineEdit(centralwidget);
        lineEdit_id2->setObjectName(QStringLiteral("lineEdit_id2"));
        lineEdit_id2->setGeometry(QRect(100, 460, 301, 51));
        lineEdit_id2->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 590, 141, 61));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
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
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 240, 121, 61));
        label->setStyleSheet(QLatin1String("font: 18pt \"SourceHanSansSC\";\n"
"color: rgba(0,0,0,1);"));
        label_2_back = new QLabel(centralwidget);
        label_2_back->setObjectName(QStringLiteral("label_2_back"));
        label_2_back->setGeometry(QRect(60, 200, 371, 541));
        label_2_back->setStyleSheet(QLatin1String("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"\n"
"\n"
""));
        Register_B = new QPushButton(centralwidget);
        Register_B->setObjectName(QStringLiteral("Register_B"));
        Register_B->setGeometry(QRect(260, 590, 151, 61));
        Register_B->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
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
        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(0, 0, 1340, 850));
        label_image->setStyleSheet(QLatin1String("border-image: url(:/background/login.jpg);\n"
"background-repeat: no repeat;\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        label_image->raise();
        label_2_back->raise();
        label_title2->raise();
        label_title3->raise();
        lineEdit_id2->raise();
        pushButton->raise();
        label->raise();
        Register_B->raise();
        lineEdit_id1->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_title2->setText(QApplication::translate("MainWindow", "Helmet Testing", Q_NULLPTR));
        label_title3->setText(QApplication::translate("MainWindow", "The server obtains the data of the client for detection.", Q_NULLPTR));
        lineEdit_id1->setPlaceholderText(QApplication::translate("MainWindow", "Please enter your username", Q_NULLPTR));
        lineEdit_id2->setPlaceholderText(QApplication::translate("MainWindow", "Please input a password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        label_2_back->setText(QString());
        Register_B->setText(QApplication::translate("MainWindow", "Register", Q_NULLPTR));
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
