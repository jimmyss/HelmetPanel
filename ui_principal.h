/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QLabel *label_left;
    QLabel *label_top;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_home;
    QLabel *label_work;
    QLabel *label_user;
    QLabel *label_sett;
    QLabel *label_noti;
    QLabel *label_sugg;
    QLabel *label_welcome;
    QLabel *label_name;
    QLabel *homelabelbig;
    QLabel *label_23;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_25;
    QLabel *label_43;
    QPushButton *pushButton_7;
    QLabel *label_user_big;
    QLabel *label_user_inf;
    QPushButton *pushButton_8;
    QLabel *label_sugg_big;
    QLabel *label_sugg_inf;
    QPushButton *pushButton_9;
    QLabel *label_work_big;
    QLabel *label_noti_big;
    QLabel *label_work_inf;
    QLabel *label_noti_inf;
    QPushButton *pushButton_portrait;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;

    void setupUi(QWidget *principal)
    {
        if (principal->objectName().isEmpty())
<<<<<<< HEAD
            principal->setObjectName(QStringLiteral("principal"));
        principal->resize(1340, 850);
        label_left = new QLabel(principal);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(-1, 0, 301, 851));
        label_left->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(principal);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setGeometry(QRect(300, 0, 1041, 70));
        label_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(principal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 70, 1041, 771));
        label->setStyleSheet(QStringLiteral("background-color: rgb(237, 241, 247);"));
        label_2 = new QLabel(principal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 201, 41));
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 51);"));
        label_3 = new QLabel(principal);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 100, 5, 30));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_home = new QLabel(principal);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(40, 100, 161, 41));
        label_home->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_work = new QLabel(principal);
        label_work->setObjectName(QStringLiteral("label_work"));
        label_work->setGeometry(QRect(40, 160, 171, 41));
        label_work->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_user = new QLabel(principal);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 210, 141, 51));
        label_user->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(principal);
        label_sett->setObjectName(QStringLiteral("label_sett"));
        label_sett->setGeometry(QRect(40, 450, 141, 41));
        label_sett->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_noti = new QLabel(principal);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(40, 510, 201, 51));
        label_noti->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(principal);
        label_sugg->setObjectName(QStringLiteral("label_sugg"));
        label_sugg->setGeometry(QRect(40, 570, 201, 51));
        label_sugg->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_welcome = new QLabel(principal);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(1030, 0, 251, 61));
        label_welcome->setStyleSheet(QStringLiteral(""));
        label_name = new QLabel(principal);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(310, 80, 371, 51));
        label_name->setStyleSheet(QLatin1String("font: 30pt \"ProximaNova\";\n"
"font-weight: bold;"));
        homelabelbig = new QLabel(principal);
        homelabelbig->setObjectName(QStringLiteral("homelabelbig"));
        homelabelbig->setGeometry(QRect(350, 240, 381, 201));
        homelabelbig->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(169,127,255,1), stop:1 rgba(115,109,255,1));\n"
"border-radius:15px"));
        label_23 = new QLabel(principal);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(860, 240, 411, 201));
        label_23->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(249,180,189,1), stop:1 rgba(149,115,219,1));\n"
"border-radius:15px"));
        pushButton_1 = new QPushButton(principal);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 100, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(principal);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 170, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(principal);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 220, 31, 31));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(principal);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 460, 31, 31));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(principal);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(7, 580, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(principal);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 520, 31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        pushButton_6 = new QPushButton(principal);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 250, 61, 61));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
        label_25 = new QLabel(principal);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(350, 560, 381, 201));
        label_25->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(255,136,134,1), stop:1 rgba(247,197,152,1));\n"
"border-radius:15px"));
        label_43 = new QLabel(principal);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(860, 560, 401, 201));
        label_43->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(68,222,197,1), stop:1 rgba(78,188,250,1));\n"
"border-radius:15px"));
        pushButton_7 = new QPushButton(principal);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(870, 250, 61, 61));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        label_user_big = new QLabel(principal);
        label_user_big->setObjectName(QStringLiteral("label_user_big"));
        label_user_big->setGeometry(QRect(940, 250, 211, 51));
        label_user_big->setStyleSheet(QLatin1String("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_user_inf = new QLabel(principal);
        label_user_inf->setObjectName(QStringLiteral("label_user_inf"));
        label_user_inf->setGeometry(QRect(880, 350, 421, 71));
        label_user_inf->setStyleSheet(QLatin1String("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(principal);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(860, 560, 61, 61));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        label_sugg_big = new QLabel(principal);
        label_sugg_big->setObjectName(QStringLiteral("label_sugg_big"));
        label_sugg_big->setGeometry(QRect(920, 570, 311, 41));
        label_sugg_big->setStyleSheet(QLatin1String("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_sugg_inf = new QLabel(principal);
        label_sugg_inf->setObjectName(QStringLiteral("label_sugg_inf"));
        label_sugg_inf->setGeometry(QRect(880, 650, 361, 121));
        label_sugg_inf->setStyleSheet(QLatin1String("font: 17pt \"ProximaNova\";\n"
=======
            principal->setObjectName(QString::fromUtf8("principal"));
        principal->resize(780, 520);
        label_left = new QLabel(principal);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(principal);
        label_top->setObjectName(QString::fromUtf8("label_top"));
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(principal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 651, 481));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        label_2 = new QLabel(principal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(5, 90, 126, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        label_3 = new QLabel(principal);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 90, 5, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(principal);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 94, 101, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_11 = new QLabel(principal);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 134, 101, 21));
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_12 = new QLabel(principal);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 178, 101, 21));
        label_12->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_13 = new QLabel(principal);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 366, 101, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_14 = new QLabel(principal);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 408, 101, 21));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_15 = new QLabel(principal);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 450, 101, 21));
        label_15->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_17 = new QLabel(principal);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(470, 0, 211, 41));
        label_17->setStyleSheet(QString::fromUtf8(""));
        label_18 = new QLabel(principal);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(465, 0, 2, 40));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_19 = new QLabel(principal);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(681, 0, 2, 40));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_20 = new QLabel(principal);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(140, 50, 371, 51));
        label_20->setStyleSheet(QString::fromUtf8("font: 30pt \"ProximaNova\";\n"
"font-weight: bold;"));
        label_21 = new QLabel(principal);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(160, 120, 240, 161));
        label_21->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(169,127,255,1), stop:1 rgba(115,109,255,1));\n"
"border-radius:15px"));
        label_23 = new QLabel(principal);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(460, 120, 241, 161));
        label_23->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(249,180,189,1), stop:1 rgba(149,115,219,1));\n"
"border-radius:15px"));
        label_33 = new QLabel(principal);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(160, 199, 240, 2));
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35 = new QLabel(principal);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(460, 199, 240, 2));
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_1 = new QPushButton(principal);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 86, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(principal);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(principal);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(principal);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(principal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(7, 444, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(principal);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 402, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        pushButton_6 = new QPushButton(principal);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 130, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        label_25 = new QLabel(principal);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(160, 320, 241, 161));
        label_25->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(255,136,134,1), stop:1 rgba(247,197,152,1));\n"
"border-radius:15px"));
        label_43 = new QLabel(principal);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(460, 320, 241, 161));
        label_43->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(68,222,197,1), stop:1 rgba(78,188,250,1));\n"
"border-radius:15px"));
        label_44 = new QLabel(principal);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(160, 399, 241, 2));
        label_44->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_45 = new QLabel(principal);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(460, 399, 241, 2));
        label_45->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(principal);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 130, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        label_46 = new QLabel(principal);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(550, 140, 121, 41));
        label_46->setStyleSheet(QString::fromUtf8("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_47 = new QLabel(principal);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(470, 210, 221, 51));
        label_47->setStyleSheet(QString::fromUtf8("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(principal);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 330, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        label_48 = new QLabel(principal);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(550, 340, 121, 41));
        label_48->setStyleSheet(QString::fromUtf8("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_49 = new QLabel(principal);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(470, 410, 221, 51));
        label_49->setStyleSheet(QString::fromUtf8("font: 17pt \"ProximaNova\";\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_sugg_inf->setWordWrap(true);
        pushButton_9 = new QPushButton(principal);
<<<<<<< HEAD
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(350, 560, 61, 61));
        pushButton_9->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        label_work_big = new QLabel(principal);
        label_work_big->setObjectName(QStringLiteral("label_work_big"));
        label_work_big->setGeometry(QRect(450, 250, 271, 61));
        label_work_big->setStyleSheet(QLatin1String("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_noti_big = new QLabel(principal);
        label_noti_big->setObjectName(QStringLiteral("label_noti_big"));
        label_noti_big->setGeometry(QRect(420, 570, 201, 41));
        label_noti_big->setStyleSheet(QLatin1String("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_work_inf = new QLabel(principal);
        label_work_inf->setObjectName(QStringLiteral("label_work_inf"));
        label_work_inf->setGeometry(QRect(370, 330, 351, 101));
        label_work_inf->setStyleSheet(QLatin1String("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_noti_inf = new QLabel(principal);
        label_noti_inf->setObjectName(QStringLiteral("label_noti_inf"));
        label_noti_inf->setGeometry(QRect(370, 670, 301, 51));
        label_noti_inf->setStyleSheet(QLatin1String("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        pushButton_portrait = new QPushButton(principal);
        pushButton_portrait->setObjectName(QStringLiteral("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(1280, 10, 40, 40));
        pushButton_portrait->setStyleSheet(QLatin1String("border-width: 1px;\n"
=======
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(170, 330, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        label_50 = new QLabel(principal);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(250, 140, 131, 41));
        label_50->setStyleSheet(QString::fromUtf8("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_51 = new QLabel(principal);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(250, 340, 131, 41));
        label_51->setStyleSheet(QString::fromUtf8("font: 24pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_52 = new QLabel(principal);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(170, 210, 221, 51));
        label_52->setStyleSheet(QString::fromUtf8("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_53 = new QLabel(principal);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(170, 410, 221, 51));
        label_53->setStyleSheet(QString::fromUtf8("font: 17pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        pushButton_portrait = new QPushButton(principal);
        pushButton_portrait->setObjectName(QString::fromUtf8("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(710, 0, 40, 40));
        pushButton_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        line = new QFrame(principal);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(860, 640, 401, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(principal);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(350, 640, 381, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(principal);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(860, 330, 411, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(principal);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(350, 330, 381, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(principal);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(1000, -30, 20, 101));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label->raise();
        label_top->raise();
        label_left->raise();
        pushButton_3->raise();
        label_3->raise();
        pushButton_1->raise();
        pushButton_portrait->raise();
        label_23->raise();
        label_25->raise();
        homelabelbig->raise();
        label_name->raise();
        label_work_inf->raise();
        pushButton->raise();
        label_work->raise();
        label_welcome->raise();
        pushButton_7->raise();
        label_noti_big->raise();
        label_noti_inf->raise();
        pushButton_9->raise();
        label_user_inf->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        label_sugg->raise();
        label_sett->raise();
        label_user->raise();
        label_noti->raise();
        label_home->raise();
        label_43->raise();
        label_work_big->raise();
        label_2->raise();
        pushButton_2->raise();
        pushButton_5->raise();
        label_sugg_big->raise();
        label_sugg_inf->raise();
        label_user_big->raise();
        pushButton_8->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();

        retranslateUi(principal);

        QMetaObject::connectSlotsByName(principal);
    } // setupUi

    void retranslateUi(QWidget *principal)
    {
        principal->setWindowTitle(QCoreApplication::translate("principal", "Form", nullptr));
        label_left->setText(QString());
        label_top->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
<<<<<<< HEAD
        label_home->setText(QApplication::translate("principal", "homepage", Q_NULLPTR));
        label_work->setText(QApplication::translate("principal", "workspace", Q_NULLPTR));
        label_user->setText(QApplication::translate("principal", "user", Q_NULLPTR));
        label_sett->setText(QApplication::translate("principal", "settings", Q_NULLPTR));
        label_noti->setText(QApplication::translate("principal", "history", Q_NULLPTR));
        label_sugg->setText(QApplication::translate("principal", "instructions", Q_NULLPTR));
        label_welcome->setText(QApplication::translate("principal", "USER NAME,welcome back !", Q_NULLPTR));
        label_name->setText(QApplication::translate("principal", "Homepage", Q_NULLPTR));
        homelabelbig->setText(QString());
=======
        label_4->setText(QCoreApplication::translate("principal", "homepage", nullptr));
        label_11->setText(QCoreApplication::translate("principal", "workspace", nullptr));
        label_12->setText(QCoreApplication::translate("principal", "user", nullptr));
        label_13->setText(QCoreApplication::translate("principal", "settings", nullptr));
        label_14->setText(QCoreApplication::translate("principal", "history", nullptr));
        label_15->setText(QCoreApplication::translate("principal", "instructions", nullptr));
        label_17->setText(QCoreApplication::translate("principal", "USER NAME,welcome back !", nullptr));
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QCoreApplication::translate("principal", "Real time Message Data", nullptr));
        label_21->setText(QString());
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        label_23->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_25->setText(QString());
        label_43->setText(QString());
        pushButton_7->setText(QString());
<<<<<<< HEAD
        label_user_big->setText(QApplication::translate("principal", "user", Q_NULLPTR));
        label_user_inf->setText(QApplication::translate("principal", "View personal\n"
" information", Q_NULLPTR));
        pushButton_8->setText(QString());
        label_sugg_big->setText(QApplication::translate("principal", "instructions", Q_NULLPTR));
        label_sugg_inf->setText(QApplication::translate("principal", "<html><head/><body><p>Product instructions and precautions</p></body></html>", Q_NULLPTR));
        pushButton_9->setText(QString());
        label_work_big->setText(QApplication::translate("principal", "workspace", Q_NULLPTR));
        label_noti_big->setText(QApplication::translate("principal", "history", Q_NULLPTR));
        label_work_inf->setText(QApplication::translate("principal", "Work operation \n"
" interface", Q_NULLPTR));
        label_noti_inf->setText(QApplication::translate("principal", "History of use", Q_NULLPTR));
=======
        label_46->setText(QCoreApplication::translate("principal", "user", nullptr));
        label_47->setText(QCoreApplication::translate("principal", "View personal information", nullptr));
        pushButton_8->setText(QString());
        label_48->setText(QCoreApplication::translate("principal", "instructions", nullptr));
        label_49->setText(QCoreApplication::translate("principal", "<html><head/><body><p>Product instructions and</p><p>precautions</p></body></html>", nullptr));
        pushButton_9->setText(QString());
        label_50->setText(QCoreApplication::translate("principal", "workspace", nullptr));
        label_51->setText(QCoreApplication::translate("principal", "history", nullptr));
        label_52->setText(QCoreApplication::translate("principal", "Work operation interface", nullptr));
        label_53->setText(QCoreApplication::translate("principal", "History of use", nullptr));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
