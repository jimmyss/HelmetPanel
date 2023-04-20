/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
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
        User->setWindowTitle(QApplication::translate("User", "Form", Q_NULLPTR));
        label_left->setText(QString());
        label->setText(QString());
        label_top->setText(QString());
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
