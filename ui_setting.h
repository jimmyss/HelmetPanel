/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QLabel *label_left;
    QLabel *label_top;
    QLabel *label_botom;
    QLabel *label_line1;
    QLabel *label_line2;
    QLabel *label_welcome;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QLabel *label_home;
    QLabel *label_work;
    QLabel *label_user;
    QLabel *label_sett;
    QLabel *label_noti;
    QLabel *label_sugg;
    QLabel *label_white2;
    QLabel *label_white1;
    QListWidget *listWidget;
    QLabel *label_name;
    QPushButton *pushButton_6;
    QGroupBox *horizontalGroupBox;
    QLabel *label_name1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QGroupBox *horizontalGroupBox_2;
    QLabel *label_name1_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_portrait;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(780, 520);
        label_left = new QLabel(Setting);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(-1, 0, 140, 520));
        label_left->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));"));
        label_top = new QLabel(Setting);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setGeometry(QRect(130, 0, 650, 40));
        label_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_botom = new QLabel(Setting);
        label_botom->setObjectName(QStringLiteral("label_botom"));
        label_botom->setGeometry(QRect(130, 40, 651, 481));
        label_botom->setStyleSheet(QStringLiteral("background-color: rgb(237, 241, 247);"));
        label_line1 = new QLabel(Setting);
        label_line1->setObjectName(QStringLiteral("label_line1"));
        label_line1->setGeometry(QRect(465, 0, 2, 40));
        label_line1->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 238);"));
        label_line2 = new QLabel(Setting);
        label_line2->setObjectName(QStringLiteral("label_line2"));
        label_line2->setGeometry(QRect(681, 0, 2, 40));
        label_line2->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 238);"));
        label_welcome = new QLabel(Setting);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(480, 0, 211, 41));
        label_welcome->setStyleSheet(QStringLiteral(""));
        pushButton_1 = new QPushButton(Setting);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 88, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(Setting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 130, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(Setting);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 172, 31, 31));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(Setting);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 360, 31, 31));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(7, 444, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(Setting);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 402, 31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        label_home = new QLabel(Setting);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(40, 94, 101, 21));
        label_home->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_work = new QLabel(Setting);
        label_work->setObjectName(QStringLiteral("label_work"));
        label_work->setGeometry(QRect(40, 134, 101, 21));
        label_work->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_user = new QLabel(Setting);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 178, 101, 21));
        label_user->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(Setting);
        label_sett->setObjectName(QStringLiteral("label_sett"));
        label_sett->setGeometry(QRect(40, 366, 101, 21));
        label_sett->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_noti = new QLabel(Setting);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(40, 408, 101, 21));
        label_noti->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Setting);
        label_sugg->setObjectName(QStringLiteral("label_sugg"));
        label_sugg->setGeometry(QRect(40, 450, 101, 21));
        label_sugg->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_white2 = new QLabel(Setting);
        label_white2->setObjectName(QStringLiteral("label_white2"));
        label_white2->setGeometry(QRect(0, 362, 5, 30));
        label_white2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_white1 = new QLabel(Setting);
        label_white1->setObjectName(QStringLiteral("label_white1"));
        label_white1->setGeometry(QRect(5, 362, 126, 30));
        label_white1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 51);"));
        listWidget = new QListWidget(Setting);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(140, 50, 631, 461));
        label_name = new QLabel(Setting);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(160, 60, 351, 31));
        label_name->setStyleSheet(QLatin1String("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_6 = new QPushButton(Setting);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 440, 591, 41));
        pushButton_6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(110,102,162,1), \n"
"stop:1 rgba(110,102,162,1));\n"
"color: rgb(255, 255, 255, 255);\n"
" \n"
"background-color: rgb(132, 112, 246);\n"
"border:0px groove gray;border-radius:\n"
"10px;padding:2px 4px;\n"
"font: 26pt \"Candara\";\n"
"\n"
""));
        horizontalGroupBox = new QGroupBox(Setting);
        horizontalGroupBox->setObjectName(QStringLiteral("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(160, 110, 591, 61));
        horizontalGroupBox->setStyleSheet(QLatin1String("border-radius:18px;\n"
""));
        label_name1 = new QLabel(horizontalGroupBox);
        label_name1->setObjectName(QStringLiteral("label_name1"));
        label_name1->setGeometry(QRect(20, 10, 231, 41));
        label_name1->setStyleSheet(QLatin1String("\n"
"font: 17pt \"Poppins\";"));
        radioButton_2 = new QRadioButton(horizontalGroupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(290, 10, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral(".AppleSystemUIFont"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        radioButton_2->setFont(font);
        radioButton_2->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        radioButton = new QRadioButton(horizontalGroupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(440, 10, 111, 41));
        radioButton->setFont(font);
        radioButton->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        horizontalGroupBox_2 = new QGroupBox(Setting);
        horizontalGroupBox_2->setObjectName(QStringLiteral("horizontalGroupBox_2"));
        horizontalGroupBox_2->setGeometry(QRect(160, 190, 591, 61));
        horizontalGroupBox_2->setStyleSheet(QLatin1String("border-radius:18px;\n"
""));
        label_name1_2 = new QLabel(horizontalGroupBox_2);
        label_name1_2->setObjectName(QStringLiteral("label_name1_2"));
        label_name1_2->setGeometry(QRect(20, 10, 231, 41));
        label_name1_2->setStyleSheet(QLatin1String("\n"
"font: 17pt \"Poppins\";"));
        radioButton_3 = new QRadioButton(horizontalGroupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(290, 10, 111, 41));
        radioButton_3->setFont(font);
        radioButton_3->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        radioButton_4 = new QRadioButton(horizontalGroupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(440, 10, 111, 41));
        radioButton_4->setFont(font);
        radioButton_4->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        pushButton_portrait = new QPushButton(Setting);
        pushButton_portrait->setObjectName(QStringLiteral("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(710, 0, 40, 40));
        pushButton_portrait->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Form", Q_NULLPTR));
        label_left->setText(QString());
        label_top->setText(QString());
        label_botom->setText(QString());
        label_line1->setText(QString());
        label_line2->setText(QString());
        label_welcome->setText(QApplication::translate("Setting", "USER NAME,welcome back !", Q_NULLPTR));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        label_home->setText(QApplication::translate("Setting", "homepage", Q_NULLPTR));
        label_work->setText(QApplication::translate("Setting", "workspace", Q_NULLPTR));
        label_user->setText(QApplication::translate("Setting", "user", Q_NULLPTR));
        label_sett->setText(QApplication::translate("Setting", "settings", Q_NULLPTR));
        label_noti->setText(QApplication::translate("Setting", "history", Q_NULLPTR));
        label_sugg->setText(QApplication::translate("Setting", "instructions", Q_NULLPTR));
        label_white2->setText(QString());
        label_white1->setText(QString());
        label_name->setText(QApplication::translate("Setting", "Settings", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Setting", "Exit", Q_NULLPTR));
        label_name1->setText(QApplication::translate("Setting", "Interface style", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Setting", "Dark", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Setting", "Light", Q_NULLPTR));
        label_name1_2->setText(QApplication::translate("Setting", "Interface style", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Setting", "Dark", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Setting", "Light", Q_NULLPTR));
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
