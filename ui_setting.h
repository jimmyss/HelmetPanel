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
#include <QtWidgets/QFrame>
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
    QRadioButton *light_button;
    QRadioButton *dark_button;
    QGroupBox *horizontalGroupBox_2;
    QLabel *label_name1_2;
    QRadioButton *english_button;
    QRadioButton *chinese_button;
    QPushButton *pushButton_portrait;
    QFrame *line;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(1340, 851);
        Setting->setAutoFillBackground(true);
        label_left = new QLabel(Setting);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(-1, 0, 301, 851));
        label_left->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));\n"
""));
        label_top = new QLabel(Setting);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setGeometry(QRect(300, 0, 1041, 70));
        label_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_botom = new QLabel(Setting);
        label_botom->setObjectName(QStringLiteral("label_botom"));
        label_botom->setGeometry(QRect(300, 70, 1041, 771));
        label_botom->setStyleSheet(QStringLiteral("background-color: rgb(237, 241, 247);"));
        label_welcome = new QLabel(Setting);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(1050, 10, 231, 41));
        label_welcome->setStyleSheet(QStringLiteral(""));
        pushButton_1 = new QPushButton(Setting);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(7, 88, 31, 31));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/icon/homepage.png);"));
        pushButton_2 = new QPushButton(Setting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(7, 140, 31, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/icon/working.png);"));
        pushButton_3 = new QPushButton(Setting);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(7, 190, 31, 31));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/icon/user.png);"));
        pushButton_4 = new QPushButton(Setting);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(7, 410, 31, 31));
        pushButton_4->setStyleSheet(QLatin1String("\n"
"border-image: url(:/icon/setting.png);"));
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(7, 520, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/notice.png);"));
        pushButton_5 = new QPushButton(Setting);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(7, 460, 31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icon/suggestion.png);"));
        label_home = new QLabel(Setting);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(40, 90, 151, 31));
        label_home->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_work = new QLabel(Setting);
        label_work->setObjectName(QStringLiteral("label_work"));
        label_work->setGeometry(QRect(40, 130, 171, 51));
        label_work->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_user = new QLabel(Setting);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(40, 178, 151, 61));
        label_user->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sett = new QLabel(Setting);
        label_sett->setObjectName(QStringLiteral("label_sett"));
        label_sett->setGeometry(QRect(40, 400, 161, 41));
        label_sett->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_noti = new QLabel(Setting);
        label_noti->setObjectName(QStringLiteral("label_noti"));
        label_noti->setGeometry(QRect(40, 450, 151, 51));
        label_noti->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_sugg = new QLabel(Setting);
        label_sugg->setObjectName(QStringLiteral("label_sugg"));
        label_sugg->setGeometry(QRect(40, 500, 181, 61));
        label_sugg->setStyleSheet(QLatin1String("font: 14pt \"ProximaNova\";\n"
"font-weight: bold;\n"
"color: rgb(135, 135, 135);"));
        label_white2 = new QLabel(Setting);
        label_white2->setObjectName(QStringLiteral("label_white2"));
        label_white2->setGeometry(QRect(0, 410, 5, 30));
        label_white2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_white1 = new QLabel(Setting);
        label_white1->setObjectName(QStringLiteral("label_white1"));
        label_white1->setGeometry(QRect(10, 400, 211, 41));
        label_white1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 51);"));
        listWidget = new QListWidget(Setting);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(300, 70, 1041, 781));
        listWidget->setStyleSheet(QStringLiteral(""));
        label_name = new QLabel(Setting);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(310, 70, 401, 51));
        label_name->setStyleSheet(QLatin1String("color: rgb(50, 74, 112);\n"
"font: 27pt \"Poppins\";\n"
"font-weight: bold;"));
        pushButton_6 = new QPushButton(Setting);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 670, 591, 41));
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
        horizontalGroupBox->setGeometry(QRect(260, 150, 1031, 61));
        horizontalGroupBox->setStyleSheet(QLatin1String("border-radius:18px;\n"
""));
        label_name1 = new QLabel(horizontalGroupBox);
        label_name1->setObjectName(QStringLiteral("label_name1"));
        label_name1->setGeometry(QRect(70, 20, 281, 31));
        label_name1->setStyleSheet(QLatin1String("\n"
"font: 17pt \"Poppins\";"));
        light_button = new QRadioButton(horizontalGroupBox);
        light_button->setObjectName(QStringLiteral("light_button"));
        light_button->setGeometry(QRect(440, 20, 141, 31));
        QFont font;
        font.setFamily(QStringLiteral(".AppleSystemUIFont"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        light_button->setFont(font);
        light_button->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        dark_button = new QRadioButton(horizontalGroupBox);
        dark_button->setObjectName(QStringLiteral("dark_button"));
        dark_button->setGeometry(QRect(770, 10, 111, 41));
        dark_button->setFont(font);
        dark_button->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        horizontalGroupBox_2 = new QGroupBox(Setting);
        horizontalGroupBox_2->setObjectName(QStringLiteral("horizontalGroupBox_2"));
        horizontalGroupBox_2->setGeometry(QRect(160, 250, 1091, 61));
        horizontalGroupBox_2->setStyleSheet(QLatin1String("border-radius:18px;\n"
""));
        label_name1_2 = new QLabel(horizontalGroupBox_2);
        label_name1_2->setObjectName(QStringLiteral("label_name1_2"));
        label_name1_2->setGeometry(QRect(170, 10, 231, 41));
        label_name1_2->setStyleSheet(QLatin1String("\n"
"font: 17pt \"Poppins\";"));
        english_button = new QRadioButton(horizontalGroupBox_2);
        english_button->setObjectName(QStringLiteral("english_button"));
        english_button->setGeometry(QRect(540, 10, 151, 41));
        english_button->setFont(font);
        english_button->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        chinese_button = new QRadioButton(horizontalGroupBox_2);
        chinese_button->setObjectName(QStringLiteral("chinese_button"));
        chinese_button->setGeometry(QRect(870, 10, 171, 41));
        chinese_button->setFont(font);
        chinese_button->setStyleSheet(QLatin1String("color: rgb(59, 70, 79);\n"
"font-weight: bold;\n"
"font: 16pt \".AppleSystemUIFont\";"));
        pushButton_portrait = new QPushButton(Setting);
        pushButton_portrait->setObjectName(QStringLiteral("pushButton_portrait"));
        pushButton_portrait->setGeometry(QRect(1290, 10, 40, 40));
        pushButton_portrait->setStyleSheet(QLatin1String("border-width: 1px;\n"
"border-image: url(:/other/photo.jpg);\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0);"));
        line = new QFrame(Setting);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(1020, 0, 20, 71));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Form", Q_NULLPTR));
        label_left->setText(QString());
        label_top->setText(QString());
        label_botom->setText(QString());
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
        light_button->setText(QApplication::translate("Setting", "Purple", Q_NULLPTR));
        dark_button->setText(QApplication::translate("Setting", "Blue", Q_NULLPTR));
        label_name1_2->setText(QApplication::translate("Setting", "Language", Q_NULLPTR));
        english_button->setText(QApplication::translate("Setting", "English", Q_NULLPTR));
        chinese_button->setText(QApplication::translate("Setting", "Chinese", Q_NULLPTR));
        pushButton_portrait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
