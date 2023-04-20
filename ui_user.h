/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_User
{
public:
    QLabel *label_left;
    QLabel *label;
    QLabel *label_top;
    QLabel *label_welcome;
    QLabel *label_home;
    QLabel *label_work;
    QLabel *label_user;
    QLabel *label_sett;
    QLabel *label_noti;
    QLabel *label_sugg;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *unamelabel;
    QLabel *uphonenumbolabel;
    QLabel *uemaillabel;
    QLabel *label_name;
    QLabel *label_user_name;
    QLabel *label_user_phon;
    QLabel *label_user_email;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_portrait;
    QFrame *line;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
<<<<<<< HEAD
            User->setObjectName(QStringLiteral("User"));
        User->resize(1340, 850);
        label_left = new QLabel(User);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(-1, 0, 301, 851));
        label_left->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label = new QLabel(User);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 70, 1041, 771));
        label->setStyleSheet(QStringLiteral("background-color: rgb(237, 241, 247);"));
        label_top = new QLabel(User);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setGeometry(QRect(300, 0, 1041, 70));
        label_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_welcome = new QLabel(User);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(1010, 10, 271, 41));
        label_welcome->setStyleSheet(QStringLiteral(""));
        label_home = new QLabel(User);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(40, 150, 161, 41));
        label_home->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_work = new QLabel(User);
        label_work->setObjectName(QStringLiteral("label_work"));
        label_work->setGeometry(QRect(40, 210, 181, 41));
        label_work->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_user = new QLabel(User);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 280, 181, 51));
        label_user->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(User);
        label_sett->setObjectName(QStringLiteral("label_sett"));
        label_sett->setGeometry(QRect(40, 400, 161, 41));
        label_sett->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_noti = new QLabel(User);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(40, 460, 171, 61));
        label_noti->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(User);
        label_sugg->setObjectName(QStringLiteral("label_sugg"));
        label_sugg->setGeometry(QRect(40, 510, 211, 91));
        label_sugg->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_3 = new QLabel(User);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 290, 5, 30));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(User);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 290, 161, 31));
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 51);"));
        unamelabel = new QLabel(User);
        unamelabel->setObjectName(QStringLiteral("unamelabel"));
        unamelabel->setGeometry(QRect(320, 200, 40, 40));
        unamelabel->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-image: url(:/icon/user11.jpg);"));
        uphonenumbolabel = new QLabel(User);
        uphonenumbolabel->setObjectName(QStringLiteral("uphonenumbolabel"));
        uphonenumbolabel->setGeometry(QRect(320, 300, 40, 40));
        uphonenumbolabel->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-image: url(:/icon/user22.jpg);"));
        uemaillabel = new QLabel(User);
        uemaillabel->setObjectName(QStringLiteral("uemaillabel"));
        uemaillabel->setGeometry(QRect(320, 400, 40, 40));
        uemaillabel->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-image: url(:/icon/user55.jpg);"));
        label_name = new QLabel(User);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(330, 110, 611, 51));
        label_name->setStyleSheet(QLatin1String("font: 30pt \"ProximaNova\";\n"
"font-weight: bold;"));
        label_user_name = new QLabel(User);
        label_user_name->setObjectName(QStringLiteral("label_user_name"));
        label_user_name->setGeometry(QRect(390, 180, 401, 81));
        label_user_name->setStyleSheet(QLatin1String("font: 20pt \"ProximaNova\";\n"
""));
        label_user_phon = new QLabel(User);
        label_user_phon->setObjectName(QStringLiteral("label_user_phon"));
        label_user_phon->setGeometry(QRect(390, 300, 221, 31));
        label_user_phon->setStyleSheet(QLatin1String("font: 20pt \"ProximaNova\";\n"
""));
        label_user_email = new QLabel(User);
        label_user_email->setObjectName(QStringLiteral("label_user_email"));
        label_user_email->setGeometry(QRect(400, 370, 401, 91));
        label_user_email->setStyleSheet(QLatin1String("font: 20pt \"ProximaNova\";\n"
""));
        pushButton_1 = new QPushButton(User);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 150, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(User);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 220, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(User);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 290, 31, 31));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(User);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 410, 31, 31));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(User);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(7, 540, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(User);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 480, 31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        pushButton_portrait = new QPushButton(User);
        pushButton_portrait->setObjectName(QStringLiteral("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(1280, 10, 40, 40));
        pushButton_portrait->setStyleSheet(QLatin1String("border-width: 1px;\n"
=======
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(780, 520);
        label_left = new QLabel(User);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 651, 481));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 247);"));
        label_top = new QLabel(User);
        label_top->setObjectName(QString::fromUtf8("label_top"));
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_18 = new QLabel(User);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(465, 0, 2, 40));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_19 = new QLabel(User);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(681, 0, 2, 40));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        label_17 = new QLabel(User);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(470, 0, 211, 41));
        label_17->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(User);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 94, 101, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_11 = new QLabel(User);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 134, 101, 21));
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_12 = new QLabel(User);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 178, 101, 21));
        label_12->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_13 = new QLabel(User);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 366, 101, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_14 = new QLabel(User);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 408, 101, 21));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_15 = new QLabel(User);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 450, 101, 21));
        label_15->setStyleSheet(QString::fromUtf8("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_3 = new QLabel(User);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 172, 5, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(5, 172, 129, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 51);"));
        label_21 = new QLabel(User);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(570, 90, 160, 110));
        label_21->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(169,127,255,1), stop:1 rgba(115,109,255,1));\n"
"border-radius:15px"));
        label_23 = new QLabel(User);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(570, 230, 160, 110));
        label_23->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(249,180,189,1), stop:1 rgba(149,115,219,1));\n"
"border-radius:15px"));
        label_24 = new QLabel(User);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(570, 370, 160, 110));
        label_24->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(68,222,197,1), stop:1 rgba(78,188,250,1));\n"
"border-radius:15px"));
        label_25 = new QLabel(User);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(580, 100, 40, 40));
        label_25->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user1.jpg);"));
        label_26 = new QLabel(User);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(580, 240, 40, 40));
        label_26->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user2.jpg);"));
        label_27 = new QLabel(User);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(580, 380, 40, 40));
        label_27->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user3.jpg);"));
        label_32 = new QLabel(User);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(630, 110, 101, 21));
        label_32->setStyleSheet(QString::fromUtf8("font: 10pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_33 = new QLabel(User);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(630, 250, 101, 21));
        label_33->setStyleSheet(QString::fromUtf8("font: 10pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_34 = new QLabel(User);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(630, 390, 101, 21));
        label_34->setStyleSheet(QString::fromUtf8("font: 10pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_35 = new QLabel(User);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(570, 145, 160, 1));
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_36 = new QLabel(User);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(570, 285, 160, 1));
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_37 = new QLabel(User);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(570, 425, 160, 1));
        label_37->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_38 = new QLabel(User);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(580, 160, 141, 21));
        label_38->setStyleSheet(QString::fromUtf8("font: 16pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_38->setAlignment(Qt::AlignCenter);
        label_39 = new QLabel(User);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(580, 300, 141, 21));
        label_39->setStyleSheet(QString::fromUtf8("font: 16pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_39->setAlignment(Qt::AlignCenter);
        label_40 = new QLabel(User);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(580, 440, 141, 21));
        label_40->setStyleSheet(QString::fromUtf8("font: 16pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(255, 255, 255);"));
        label_40->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(User);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(150, 130, 40, 40));
        label_28->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user11.jpg);"));
        label_29 = new QLabel(User);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(150, 240, 40, 40));
        label_29->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user22.jpg);"));
        label_41 = new QLabel(User);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(150, 350, 40, 40));
        label_41->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"border-image: url(:/icon/user55.jpg);"));
        label_20 = new QLabel(User);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(150, 40, 371, 51));
        label_20->setStyleSheet(QString::fromUtf8("font: 30pt \"ProximaNova\";\n"
"font-weight: bold;"));
        label_43 = new QLabel(User);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(210, 133, 181, 31));
        label_43->setStyleSheet(QString::fromUtf8("font: 20pt \"ProximaNova\";\n"
""));
        label_44 = new QLabel(User);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(210, 243, 181, 31));
        label_44->setStyleSheet(QString::fromUtf8("font: 20pt \"ProximaNova\";\n"
""));
        label_47 = new QLabel(User);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(210, 353, 181, 31));
        label_47->setStyleSheet(QString::fromUtf8("font: 20pt \"ProximaNova\";\n"
""));
        pushButton_1 = new QPushButton(User);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 86, 31, 31));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(User);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(User);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(User);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(User);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(7, 444, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(User);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 402, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/suggestion.png);"));
        pushButton_portrait = new QPushButton(User);
        pushButton_portrait->setObjectName(QString::fromUtf8("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(710, 0, 40, 40));
        pushButton_portrait->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        line = new QFrame(User);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(980, 0, 16, 71));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        label_left->setText(QString());
        label->setText(QString());
        label_top->setText(QString());
<<<<<<< HEAD
        label_welcome->setText(QApplication::translate("User", "USER NAME,welcome  !", Q_NULLPTR));
        label_home->setText(QApplication::translate("User", "homepage", Q_NULLPTR));
        label_work->setText(QApplication::translate("User", "workspace", Q_NULLPTR));
        label_user->setText(QApplication::translate("User", "user", Q_NULLPTR));
        label_sett->setText(QApplication::translate("User", "settings", Q_NULLPTR));
        label_noti->setText(QApplication::translate("User", "history", Q_NULLPTR));
        label_sugg->setText(QApplication::translate("User", "instructions", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QString());
        unamelabel->setText(QString());
        uphonenumbolabel->setText(QString());
        uemaillabel->setText(QString());
        label_name->setText(QApplication::translate("User", "Personal Center", Q_NULLPTR));
        label_user_name->setText(QApplication::translate("User", "USER NAME", Q_NULLPTR));
        label_user_phon->setText(QApplication::translate("User", "USER PHONENUMBER", Q_NULLPTR));
        label_user_email->setText(QApplication::translate("User", "USER EMAIL", Q_NULLPTR));
=======
        label_18->setText(QString());
        label_19->setText(QString());
        label_17->setText(QCoreApplication::translate("User", "USER NAME,welcome back !", nullptr));
        label_4->setText(QCoreApplication::translate("User", "homepage", nullptr));
        label_11->setText(QCoreApplication::translate("User", "workspace", nullptr));
        label_12->setText(QCoreApplication::translate("User", "user", nullptr));
        label_13->setText(QCoreApplication::translate("User", "settings", nullptr));
        label_14->setText(QCoreApplication::translate("User", "history", nullptr));
        label_15->setText(QCoreApplication::translate("User", "instructions", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label_21->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_32->setText(QCoreApplication::translate("User", "Data to be tested ", nullptr));
        label_33->setText(QCoreApplication::translate("User", "Tested data today", nullptr));
        label_34->setText(QCoreApplication::translate("User", "Total test data", nullptr));
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QCoreApplication::translate("User", "2019", nullptr));
        label_39->setText(QCoreApplication::translate("User", "2019", nullptr));
        label_40->setText(QCoreApplication::translate("User", "2019", nullptr));
        label_28->setText(QString());
        label_29->setText(QString());
        label_41->setText(QString());
        label_20->setText(QCoreApplication::translate("User", "Personal Center", nullptr));
        label_43->setText(QCoreApplication::translate("User", "USER NAME", nullptr));
        label_44->setText(QCoreApplication::translate("User", "USER PHONENUMBER", nullptr));
        label_47->setText(QCoreApplication::translate("User", "USER EMAIL", nullptr));
>>>>>>> cf1a10674dc41e9c8b1372498b62d36f46539caf
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
