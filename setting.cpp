#include "setting.h"
#include "ui_setting.h"
#include "notification.h"
#include "suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "mainwindow.h"
#include "globaldata.h"

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    if(GlobalData::flagl==true){
        ui->label_name->setText("Setting");
        ui->label_name1->setText("Interface style");
        ui->label_name1_2->setText("Language");
        ui->light_button->setText("Purple");
        ui->dark_button->setText("Blue");
        ui->english_button->setText("English");
        ui->chinese_button->setText("Chinese");
        QString welcome = GlobalData::user.getUsername().append((QString)" welcome!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("homepage");
        ui->label_user->setText("user");
        ui->label_work->setText("workspace");
        ui->label_noti->setText("history");
        ui->label_sett->setText("settings");
        ui->label_sugg->setText("instructions");
        ui->pushButton_6->setText("Exit");
        ui->english_button->setChecked(true);
    }else{
        ui->label_name->setText("设置");
        ui->label_name1->setText("外观样式");
        ui->label_name1_2->setText("语言");
        ui->light_button->setText("紫色");
        ui->dark_button->setText("蓝色");
        ui->english_button->setText("英语");
        ui->chinese_button->setText("中文");
        QString welcome = GlobalData::user.getUsername().append((QString)" 欢迎!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("主页");
        ui->label_user->setText("用户信息");
        ui->label_work->setText("工作界面");
        ui->label_noti->setText("历史记录");
        ui->label_sett->setText("设置");
        ui->label_sugg->setText("使用说明");
        ui->pushButton_6->setText("退出");
        ui->chinese_button->setChecked(true);
    }

    if(GlobalData::flag==true){
        ui->label_left->setStyleSheet("QLabel { background-color :qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));; }");
        ui->pushButton_6->setStyleSheet(" QPushButton{ background-color :qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgb(132, 112, 246);border:0px groove gray;border-radius:10px;padding:2px 4px; font: 26pt  'Candara';}");
        ui->light_button->setChecked(true);
    }else{
        ui->label_left->setStyleSheet("QLabel { background-color : qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(89,101,255,1), stop:1 rgba(126,236,255,1)); }");
        ui->pushButton_6->setStyleSheet(" QPushButton{ background-color :qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(107,166,255,1), stop:1 rgba(107,166,255,1)); color: rgb(255, 255, 255, 255);background-color: rgba(107,166,255,1);border:0px groove gray;border-radius:10px;padding:2px 4px; font: 26pt  'Candara';}");
        ui->dark_button->setChecked(true);
    }
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}

void Setting::on_pushButton_5_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}

void Setting::on_pushButton_3_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Setting::on_pushButton_2_clicked()
{
    this->close();
    Work *w = new Work;
    w->show();
}

void Setting::on_pushButton_1_clicked()
{
    this->close();
    principal *pr = new principal;
    pr->show();
}

void Setting::on_pushButton_6_clicked()
{
    // 退出登陆
    this->close();
    MainWindow *p = new MainWindow;
    p->show();
}

void Setting::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Setting::on_dark_button_clicked()
{
    //设置侧边栏的图案，设置背景色为黑色很奇怪
    ui->label_left->setStyleSheet("QLabel { background-color : qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(89,101,255,1), stop:1 rgba(126,236,255,1)); }");
    ui->pushButton_6->setStyleSheet(" QPushButton{ background-color :qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(107,166,255,1), stop:1 rgba(107,166,255,1)); color: rgb(255, 255, 255, 255);background-color: rgba(107,166,255,1);border:0px groove gray;border-radius:10px;padding:2px 4px; font: 26pt  'Candara';}");
    GlobalData::flag = false;
}

void Setting::on_light_button_clicked()
{
    ui->label_left->setStyleSheet("QLabel { background-color :qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));; }");
    ui->pushButton_6->setStyleSheet(" QPushButton{ background-color :qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgb(132, 112, 246);border:0px groove gray;border-radius:10px;padding:2px 4px; font: 26pt  'Candara';}");
    ui->label_name->setText("Setting");
    ui->label_name1->setText("Interface style");
    ui->label_name1_2->setText("Language");
    GlobalData::flag = true;
}

void Setting::on_english_button_clicked()
{
    ui->label_name->setText("Setting");
    ui->label_name1->setText("Interface style");
    ui->label_name1_2->setText("Language");
    ui->light_button->setText("Purple");
    ui->dark_button->setText("Blue");
    ui->english_button->setText("English");
    ui->chinese_button->setText("Chinese");
    QString welcome = GlobalData::user.getUsername().append((QString)" welcome!");
    ui->label_welcome->setText(welcome);
    ui->label_home->setText("homepage");
    ui->label_user->setText("user");
    ui->label_work->setText("workspace");
    ui->label_noti->setText("history");
    ui->label_sett->setText("settings");
    ui->label_sugg->setText("instructions");
    ui->pushButton_6->setText("Exit");
    GlobalData::flagl = true;
}

void Setting::on_chinese_button_clicked()
{
    ui->label_name->setText("设置");
    ui->label_name1->setText("外观样式");
    ui->label_name1_2->setText("语言");
    ui->light_button->setText("紫色");
    ui->dark_button->setText("蓝色");
    ui->english_button->setText("英语");
    ui->chinese_button->setText("中文");
    QString welcome = GlobalData::user.getUsername().append((QString)" 欢迎!");
    ui->label_welcome->setText(welcome);
    ui->label_home->setText("主页");
    ui->label_user->setText("用户信息");
    ui->label_work->setText("工作界面");
    ui->label_noti->setText("历史记录");
    ui->label_sett->setText("设置");
    ui->label_sugg->setText("使用说明");
    ui->pushButton_6->setText("退出");
    GlobalData::flagl = false;
}
