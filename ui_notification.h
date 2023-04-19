/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notification
{
public:
    QLabel *label_white1;
    QLabel *label_sugg;
    QLabel *label_left;
    QLabel *label_top;
    QLabel *label_user;
    QLabel *label_line1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_work;
    QLabel *label_botom;
    QLabel *label_noti;
    QLabel *label_home;
    QLabel *label_sett;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QLabel *label_line2;
    QLabel *label_welcome;
    QLabel *label_white2;
    QPushButton *pushButton;
    QLabel *label_name1_5;
    QTextEdit *textEdit;
    QLabel *label_name;
    QPushButton *pushButton_portrait;

    void setupUi(QWidget *Notification)
    {
        if (Notification->objectName().isEmpty())
            Notification->setObjectName(QString::fromUtf8("Notification"));
        Notification->resize(780, 520);
        label_white1 = new QLabel(Notification);
        label_white1->setObjectName(QString::fromUtf8("label_white1"));
        label_white1->setGeometry(QRect(5, 404, 126, 30));
        label_white1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        label_sugg = new QLabel(Notification);
        label_sugg->setObjectName(QString::fromUtf8("label_sugg"));
        label_sugg->setGeometry(QRect(40, 450, 101, 21));
        label_sugg->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_left = new QLabel(Notification);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(Notification);
        label_top->setObjectName(QString::fromUtf8("label_top"));
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_user = new QLabel(Notification);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(40, 178, 101, 21));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_line1 = new QLabel(Notification);
        label_line1->setObjectName(QString::fromUtf8("label_line1"));
        label_line1->setGeometry(QRect(465, 0, 2, 40));
        label_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        pushButton_5 = new QPushButton(Notification);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 402, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        pushButton_3 = new QPushButton(Notification);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(Notification);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        label_work = new QLabel(Notification);
        label_work->setObjectName(QString::fromUtf8("label_work"));
        label_work->setGeometry(QRect(40, 134, 101, 21));
        label_work->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_botom = new QLabel(Notification);
        label_botom->setObjectName(QString::fromUtf8("label_botom"));
        label_botom->setGeometry(QRect(130, 40, 651, 481));
        label_botom->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        label_noti = new QLabel(Notification);
        label_noti->setObjectName(QString::fromUtf8("label_noti"));
        label_noti->setGeometry(QRect(40, 408, 101, 21));
        label_noti->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_home = new QLabel(Notification);
        label_home->setObjectName(QString::fromUtf8("label_home"));
        label_home->setGeometry(QRect(40, 94, 101, 21));
        label_home->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(Notification);
        label_sett->setObjectName(QString::fromUtf8("label_sett"));
        label_sett->setGeometry(QRect(40, 366, 101, 21));
        label_sett->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_1 = new QPushButton(Notification);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 88, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(Notification);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        label_line2 = new QLabel(Notification);
        label_line2->setObjectName(QString::fromUtf8("label_line2"));
        label_line2->setGeometry(QRect(681, 0, 2, 40));
        label_line2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_welcome = new QLabel(Notification);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(480, 0, 211, 41));
        label_welcome->setStyleSheet(QString::fromUtf8(""));
        label_white2 = new QLabel(Notification);
        label_white2->setObjectName(QString::fromUtf8("label_white2"));
        label_white2->setGeometry(QRect(0, 404, 5, 30));
        label_white2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Notification);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(7, 444, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        label_name1_5 = new QLabel(Notification);
        label_name1_5->setObjectName(QString::fromUtf8("label_name1_5"));
        label_name1_5->setGeometry(QRect(190, 100, 351, 31));
        label_name1_5->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 25pt \"Poppins\";"));
        textEdit = new QTextEdit(Notification);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 110, 591, 391));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        label_name = new QLabel(Notification);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(160, 58, 351, 31));
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_portrait = new QPushButton(Notification);
        pushButton_portrait->setObjectName(QString::fromUtf8("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(710, 0, 40, 40));
        pushButton_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        label_left->raise();
        label_top->raise();
        label_user->raise();
        label_line1->raise();
        pushButton_5->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_work->raise();
        label_botom->raise();
        label_noti->raise();
        label_home->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        label_line2->raise();
        label_welcome->raise();
        label_white2->raise();
        pushButton->raise();
        label_sett->raise();
        label_sugg->raise();
        label_white1->raise();
        label_name1_5->raise();
        textEdit->raise();
        label_name->raise();
        pushButton_portrait->raise();

        retranslateUi(Notification);

        QMetaObject::connectSlotsByName(Notification);
    } // setupUi

    void retranslateUi(QWidget *Notification)
    {
        Notification->setWindowTitle(QCoreApplication::translate("Notification", "Form", nullptr));
        label_white1->setText(QString());
        label_sugg->setText(QCoreApplication::translate("Notification", "Instructions", nullptr));
        label_left->setText(QString());
        label_top->setText(QString());
        label_user->setText(QCoreApplication::translate("Notification", "user", nullptr));
        label_line1->setText(QString());
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_work->setText(QCoreApplication::translate("Notification", "workspace", nullptr));
        label_botom->setText(QString());
        label_noti->setText(QCoreApplication::translate("Notification", "<html><head/><body><p>history</p></body></html>", nullptr));
        label_home->setText(QCoreApplication::translate("Notification", "homepage", nullptr));
        label_sett->setText(QCoreApplication::translate("Notification", "settings", nullptr));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        label_line2->setText(QString());
        label_welcome->setText(QCoreApplication::translate("Notification", "USER NAME,welcome back !", nullptr));
        label_white2->setText(QString());
        pushButton->setText(QString());
        label_name1_5->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Notification", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">The work records used by users are recorded here, which is convenient for users to review historical operations.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    1. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    2.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    3.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    4. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    5.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; "
                        "text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    6.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    7. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    8.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    9.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    10. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    11.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    12.</span></p></body></html>", nullptr));
        label_name->setText(QCoreApplication::translate("Notification", "history", nullptr));
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Notification: public Ui_Notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
