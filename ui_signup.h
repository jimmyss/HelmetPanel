/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_image;
    QLabel *label_2_back;
    QLabel *label_2;
    QLineEdit *lineEdit_id1;
    QLineEdit *lineEdit_id1_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_id1_3;
    QLineEdit *lineEdit_id1_4;
    QPushButton *Cancel_B;
    QPushButton *Cancel_B_2;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
<<<<<<< HEAD
            Signup->setObjectName(QStringLiteral("Signup"));
        Signup->resize(1340, 850);
        label_image = new QLabel(Signup);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(-1, -5, 1361, 861));
        label_image->setStyleSheet(QStringLiteral("border-image: url(:/background/register.jpg);"));
        label_2_back = new QLabel(Signup);
        label_2_back->setObjectName(QStringLiteral("label_2_back"));
        label_2_back->setGeometry(QRect(150, 160, 461, 641));
        label_2_back->setStyleSheet(QLatin1String("border-radius:18px;\n"
=======
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(780, 520);
        label = new QLabel(Signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-1, -5, 781, 531));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/background/register.jpg);"));
        label_2_back = new QLabel(Signup);
        label_2_back->setObjectName(QString::fromUtf8("label_2_back"));
        label_2_back->setGeometry(QRect(150, 130, 271, 341));
        label_2_back->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"background-color: rgb(255, 255, 255);\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
"\n"
"\n"
""));
        label_2 = new QLabel(Signup);
<<<<<<< HEAD
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 190, 171, 51));
        label_2->setStyleSheet(QLatin1String("font: 18pt \"SourceHanSansSC\";\n"
"color: rgba(0,0,0,1);"));
        lineEdit_id1 = new QLineEdit(Signup);
        lineEdit_id1->setObjectName(QStringLiteral("lineEdit_id1"));
        lineEdit_id1->setGeometry(QRect(190, 270, 311, 61));
=======
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 150, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"SourceHanSansSC\";\n"
"color: rgba(0,0,0,1);"));
        lineEdit_id1 = new QLineEdit(Signup);
        lineEdit_id1->setObjectName(QString::fromUtf8("lineEdit_id1"));
        lineEdit_id1->setGeometry(QRect(180, 200, 211, 31));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
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
        lineEdit_id1_2 = new QLineEdit(Signup);
<<<<<<< HEAD
        lineEdit_id1_2->setObjectName(QStringLiteral("lineEdit_id1_2"));
        lineEdit_id1_2->setGeometry(QRect(190, 370, 311, 51));
=======
        lineEdit_id1_2->setObjectName(QString::fromUtf8("lineEdit_id1_2"));
        lineEdit_id1_2->setGeometry(QRect(180, 250, 211, 31));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        lineEdit_id1_2->setFont(font);
        lineEdit_id1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id1_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Signup);
<<<<<<< HEAD
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 650, 181, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
=======
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 420, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"15px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));
        lineEdit_id1_3 = new QLineEdit(Signup);
<<<<<<< HEAD
        lineEdit_id1_3->setObjectName(QStringLiteral("lineEdit_id1_3"));
        lineEdit_id1_3->setGeometry(QRect(190, 460, 311, 51));
=======
        lineEdit_id1_3->setObjectName(QString::fromUtf8("lineEdit_id1_3"));
        lineEdit_id1_3->setGeometry(QRect(180, 300, 211, 31));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        lineEdit_id1_3->setFont(font);
        lineEdit_id1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        lineEdit_id1_3->setEchoMode(QLineEdit::Normal);
        lineEdit_id1_4 = new QLineEdit(Signup);
<<<<<<< HEAD
        lineEdit_id1_4->setObjectName(QStringLiteral("lineEdit_id1_4"));
        lineEdit_id1_4->setGeometry(QRect(190, 550, 221, 41));
=======
        lineEdit_id1_4->setObjectName(QString::fromUtf8("lineEdit_id1_4"));
        lineEdit_id1_4->setGeometry(QRect(180, 350, 121, 31));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        lineEdit_id1_4->setFont(font);
        lineEdit_id1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 12pt \"Candara\";\n"
"\n"
""));
        Cancel_B = new QPushButton(Signup);
<<<<<<< HEAD
        Cancel_B->setObjectName(QStringLiteral("Cancel_B"));
        Cancel_B->setGeometry(QRect(420, 650, 141, 51));
        Cancel_B->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
=======
        Cancel_B->setObjectName(QString::fromUtf8("Cancel_B"));
        Cancel_B->setGeometry(QRect(300, 420, 101, 31));
        Cancel_B->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
"background-color: rgb(219, 210, 216);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"15px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));
        Cancel_B_2 = new QPushButton(Signup);
<<<<<<< HEAD
        Cancel_B_2->setObjectName(QStringLiteral("Cancel_B_2"));
        Cancel_B_2->setGeometry(QRect(430, 550, 101, 41));
        Cancel_B_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
=======
        Cancel_B_2->setObjectName(QString::fromUtf8("Cancel_B_2"));
        Cancel_B_2->setGeometry(QRect(310, 350, 81, 31));
        Cancel_B_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
"background-color: rgb(78, 62, 158);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"10px;padding:2px 4px;\n"
"font: 18pt \"Candara\";\n"
"\n"
""));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
<<<<<<< HEAD
        Signup->setWindowTitle(QApplication::translate("Signup", "Form", Q_NULLPTR));
        label_image->setText(QString());
=======
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label->setText(QString());
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        label_2_back->setText(QString());
        label_2->setText(QCoreApplication::translate("Signup", "Register", nullptr));
        lineEdit_id1->setText(QString());
<<<<<<< HEAD
        lineEdit_id1->setPlaceholderText(QApplication::translate("Signup", "Please enter your username", Q_NULLPTR));
=======
        lineEdit_id1->setPlaceholderText(QCoreApplication::translate("Signup", "Please enter your mobile number", nullptr));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        lineEdit_id1_2->setText(QString());
        lineEdit_id1_2->setPlaceholderText(QCoreApplication::translate("Signup", "Please input a password", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "Register", nullptr));
        lineEdit_id1_3->setText(QString());
<<<<<<< HEAD
        lineEdit_id1_3->setPlaceholderText(QApplication::translate("Signup", "Please input a mail", Q_NULLPTR));
=======
        lineEdit_id1_3->setPlaceholderText(QCoreApplication::translate("Signup", "Please input a password again", nullptr));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        lineEdit_id1_4->setText(QString());
        lineEdit_id1_4->setPlaceholderText(QCoreApplication::translate("Signup", "Verification Code", nullptr));
        Cancel_B->setText(QCoreApplication::translate("Signup", "Cancel", nullptr));
        Cancel_B_2->setText(QCoreApplication::translate("Signup", "Gain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
