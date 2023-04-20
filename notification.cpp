#include "notification.h"
#include "ui_notification.h"
#include "suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"
#include "globaldata.h"


Notification::Notification(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Notification)
{
    ui->setupUi(this);
    if(GlobalData::flagl==true){
        ui->label_name->setText("History");
        QString welcome = GlobalData::user.getUsername().append((QString)" welcome!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("homepage");
        ui->label_user->setText("user");
        ui->label_work->setText("workspace");
        ui->label_noti->setText("history");
        ui->label_sett->setText("settings");
        ui->label_sugg->setText("instructions");
    }else{
        ui->label_name->setText("历史记录");
        QString welcome = GlobalData::user.getUsername().append((QString)" 欢迎!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("主页");
        ui->label_user->setText("用户信息");
        ui->label_work->setText("工作界面");
        ui->label_noti->setText("历史记录");
        ui->label_sett->setText("设置");
        ui->label_sugg->setText("使用说明");
    }
    if (GlobalData::flag == true){
        ui->label_left->setStyleSheet("QLabel { background-color :qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));; }");
    }else{
        ui->label_left->setStyleSheet("QLabel { background-color : qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(89,101,255,1), stop:1 rgba(126,236,255,1)); }");
    }
}

Notification::~Notification()
{
    delete ui;
}

void Notification::on_pushButton_4_clicked()
{
    this->close();
    Setting *se = new Setting;
    se->show();
}

void Notification::on_pushButton_3_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Notification::on_pushButton_2_clicked()
{
    this->close();
    Work *w = new Work;
    w->show();
}

void Notification::on_pushButton_1_clicked()
{
    this->close();
    principal *pr = new principal;
    pr->show();
}

void Notification::on_pushButton_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}



void Notification::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}
