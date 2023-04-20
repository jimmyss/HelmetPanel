/********************************************************************************
** Form generated from reading UI file 'suggestion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTION_H
#define UI_SUGGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
<<<<<<< HEAD
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
=======
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Suggestion
{
public:
    QLabel *label_user;
    QPushButton *pushButton_5;
    QLabel *label_botom;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label_work;
    QLabel *label_sugg;
    QPushButton *pushButton_4;
    QLabel *label_white1;
    QLabel *label_name;
    QPushButton *pushButton_1;
    QLabel *label_sett;
    QPushButton *pushButton_2;
    QLabel *label_suggest;
    QLabel *label_home;
    QLabel *label_welcome;
    QLabel *label_left;
    QLabel *label_noti;
    QLabel *label_top;
    QLabel *label_white2;
    QTextEdit *textEdit;
    QPushButton *pushButton_portrait;
    QFrame *line;

    void setupUi(QWidget *Suggestion)
    {
        if (Suggestion->objectName().isEmpty())
<<<<<<< HEAD
            Suggestion->setObjectName(QStringLiteral("Suggestion"));
        Suggestion->resize(1340, 850);
        label_user = new QLabel(Suggestion);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 176, 171, 61));
        label_user->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_5 = new QPushButton(Suggestion);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 460, 31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        label_botom = new QLabel(Suggestion);
        label_botom->setObjectName(QStringLiteral("label_botom"));
        label_botom->setGeometry(QRect(300, 70, 1041, 771));
        label_botom->setStyleSheet(QStringLiteral("background-color: rgb(237, 241, 247);"));
        pushButton_3 = new QPushButton(Suggestion);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 190, 31, 31));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        pushButton = new QPushButton(Suggestion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(7, 520, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        label_work = new QLabel(Suggestion);
        label_work->setObjectName(QStringLiteral("label_work"));
        label_work->setGeometry(QRect(40, 132, 171, 41));
        label_work->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Suggestion);
        label_sugg->setObjectName(QStringLiteral("label_sugg"));
        label_sugg->setGeometry(QRect(40, 490, 221, 81));
        label_sugg->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_4 = new QPushButton(Suggestion);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 410, 31, 31));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"border-image: url(:/icon/setting.png);"));
        label_white1 = new QLabel(Suggestion);
        label_white1->setObjectName(QStringLiteral("label_white1"));
        label_white1->setGeometry(QRect(10, 510, 251, 51));
        label_white1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 51);"));
        label_name = new QLabel(Suggestion);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(310, 60, 431, 81));
        label_name->setStyleSheet(QLatin1String("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_1 = new QPushButton(Suggestion);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 80, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/icon/homepage.png);"));
        label_sett = new QLabel(Suggestion);
        label_sett->setObjectName(QStringLiteral("label_sett"));
        label_sett->setGeometry(QRect(40, 400, 171, 41));
        label_sett->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_2 = new QPushButton(Suggestion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 140, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
=======
            Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->resize(780, 520);
        label_user = new QLabel(Suggestion);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(40, 176, 101, 21));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_5 = new QPushButton(Suggestion);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 400, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        label_botom = new QLabel(Suggestion);
        label_botom->setObjectName(QString::fromUtf8("label_botom"));
        label_botom->setGeometry(QRect(130, 38, 651, 481));
        label_botom->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        pushButton_3 = new QPushButton(Suggestion);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 170, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton = new QPushButton(Suggestion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(7, 442, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        label_work = new QLabel(Suggestion);
        label_work->setObjectName(QString::fromUtf8("label_work"));
        label_work->setGeometry(QRect(40, 132, 101, 21));
        label_work->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Suggestion);
        label_sugg->setObjectName(QString::fromUtf8("label_sugg"));
        label_sugg->setGeometry(QRect(40, 448, 101, 21));
        label_sugg->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        pushButton_4 = new QPushButton(Suggestion);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 358, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        label_white1 = new QLabel(Suggestion);
        label_white1->setObjectName(QString::fromUtf8("label_white1"));
        label_white1->setGeometry(QRect(5, 444, 126, 30));
        label_white1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        label_name = new QLabel(Suggestion);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(160, 58, 351, 31));
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_1 = new QPushButton(Suggestion);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 86, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        label_sett = new QLabel(Suggestion);
        label_sett->setObjectName(QString::fromUtf8("label_sett"));
        label_sett->setGeometry(QRect(40, 364, 101, 21));
        label_sett->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_line1 = new QLabel(Suggestion);
        label_line1->setObjectName(QString::fromUtf8("label_line1"));
        label_line1->setGeometry(QRect(465, -2, 2, 40));
        label_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        pushButton_2 = new QPushButton(Suggestion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 128, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        label_suggest = new QLabel(Suggestion);
        label_suggest->setObjectName(QString::fromUtf8("label_suggest"));
        label_suggest->setGeometry(QRect(190, 120, 351, 31));
        label_suggest->setStyleSheet(QString::fromUtf8("color: rgb(134, 111, 180);\n"
"font: 17pt \"Poppins\";"));
        label_home = new QLabel(Suggestion);
<<<<<<< HEAD
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(40, 80, 161, 31));
        label_home->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_welcome = new QLabel(Suggestion);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(1030, 0, 251, 51));
        label_welcome->setStyleSheet(QStringLiteral(""));
        label_left = new QLabel(Suggestion);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(-1, -2, 301, 851));
        label_left->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_noti = new QLabel(Suggestion);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(40, 450, 181, 61));
        label_noti->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_top = new QLabel(Suggestion);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setGeometry(QRect(300, 0, 1041, 70));
        label_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_white2 = new QLabel(Suggestion);
        label_white2->setObjectName(QStringLiteral("label_white2"));
        label_white2->setGeometry(QRect(0, 520, 5, 30));
        label_white2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(Suggestion);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(310, 140, 1031, 721));
        textEdit->setStyleSheet(QLatin1String("border-radius:18px;\n"
=======
        label_home->setObjectName(QString::fromUtf8("label_home"));
        label_home->setGeometry(QRect(40, 92, 101, 21));
        label_home->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_welcome = new QLabel(Suggestion);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(480, -2, 211, 41));
        label_welcome->setStyleSheet(QString::fromUtf8(""));
        label_line2 = new QLabel(Suggestion);
        label_line2->setObjectName(QString::fromUtf8("label_line2"));
        label_line2->setGeometry(QRect(681, -2, 2, 40));
        label_line2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_left = new QLabel(Suggestion);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(-1, -2, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_noti = new QLabel(Suggestion);
        label_noti->setObjectName(QString::fromUtf8("label_noti"));
        label_noti->setGeometry(QRect(40, 406, 101, 21));
        label_noti->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_top = new QLabel(Suggestion);
        label_top->setObjectName(QString::fromUtf8("label_top"));
        label_top->setGeometry(QRect(130, -2, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_white2 = new QLabel(Suggestion);
        label_white2->setObjectName(QString::fromUtf8("label_white2"));
        label_white2->setGeometry(QRect(0, 444, 5, 30));
        label_white2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(Suggestion);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 110, 591, 391));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"border-top: 5px solid qlineargradient(y0:0, y1:1,stop: 0 #ececef, stop: 1 white);\n"
"border-left: 5px solid qlineargradient(x0:0, x1:1,stop: 0 #ececef, stop: 1 white);\n"
" border-bottom: 5px solid qlineargradient(y0:0, y1:1,stop: 0 white, stop: 1  #ececef);\n"
"border-right: 5px solid qlineargradient(x0:0, x1:1,stop:  0 white, stop: 1 #ececef);\n"
""));
        pushButton_portrait = new QPushButton(Suggestion);
<<<<<<< HEAD
        pushButton_portrait->setObjectName(QStringLiteral("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(1280, 10, 40, 40));
        pushButton_portrait->setStyleSheet(QLatin1String("border-width: 1px;\n"
=======
        pushButton_portrait->setObjectName(QString::fromUtf8("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(710, 0, 40, 40));
        pushButton_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        line = new QFrame(Suggestion);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(1000, -10, 20, 81));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_left->raise();
        label_top->raise();
        label_white2->raise();
        label_botom->raise();
        label_home->raise();
        label_noti->raise();
        label_sett->raise();
        label_sugg->raise();
        label_user->raise();
        label_welcome->raise();
        label_white1->raise();
        label_work->raise();
        pushButton->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        label_name->raise();
        label_suggest->raise();
        textEdit->raise();
        pushButton_portrait->raise();
        line->raise();

        retranslateUi(Suggestion);

        QMetaObject::connectSlotsByName(Suggestion);
    } // setupUi

    void retranslateUi(QWidget *Suggestion)
    {
        Suggestion->setWindowTitle(QCoreApplication::translate("Suggestion", "Form", nullptr));
        label_user->setText(QCoreApplication::translate("Suggestion", "user", nullptr));
        pushButton_5->setText(QString());
        label_botom->setText(QString());
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        label_work->setText(QCoreApplication::translate("Suggestion", "workspace", nullptr));
        label_sugg->setText(QCoreApplication::translate("Suggestion", "instructions", nullptr));
        pushButton_4->setText(QString());
        label_white1->setText(QString());
        label_name->setText(QCoreApplication::translate("Suggestion", "Instructions", nullptr));
        pushButton_1->setText(QString());
<<<<<<< HEAD
        label_sett->setText(QApplication::translate("Suggestion", "settings", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_suggest->setText(QString());
        label_home->setText(QApplication::translate("Suggestion", "homepage", Q_NULLPTR));
        label_welcome->setText(QApplication::translate("Suggestion", "USER NAME,welcome back !", Q_NULLPTR));
=======
        label_sett->setText(QCoreApplication::translate("Suggestion", "settings", nullptr));
        label_line1->setText(QString());
        pushButton_2->setText(QString());
        label_suggest->setText(QString());
        label_home->setText(QCoreApplication::translate("Suggestion", "homepage", nullptr));
        label_welcome->setText(QCoreApplication::translate("Suggestion", "USER NAME,welcome back !", nullptr));
        label_line2->setText(QString());
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        label_left->setText(QString());
        label_noti->setText(QCoreApplication::translate("Suggestion", "History", nullptr));
        label_top->setText(QString());
        label_white2->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Suggestion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">The purpose of writing this instruction is to fully express the functions and operating environment that the software can realize, the scope and method of use of the software.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    1.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    2.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    3.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    4.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    5.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    6.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    7.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    8. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    9.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    10. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    11.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\">    12.....</span></p>\n"
<<<<<<< HEAD
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x; font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\"><br /></p></body></html>", Q_NULLPTR));
=======
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600; vertical-align:super;\"><br /></p></body></html>", nullptr));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Suggestion: public Ui_Suggestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTION_H
