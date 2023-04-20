#include "principal.h"
#include "ui_principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"
#include "notification.h"
#include "suggestion.h"
#include "globaldata.h"


principal::principal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    if(GlobalData::flagl==true){
        ui->label_name->setText("Homepage");
        QString welcome = GlobalData::user.getUsername().append((QString)" welcome!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("homepage");
        ui->label_user->setText("user");
        ui->label_work->setText("workspace");
        ui->label_noti->setText("history");
        ui->label_sett->setText("settings");
        ui->label_sugg->setText("instructions");
        ui->label_user_big->setText("user");
        ui->label_work_big->setText("workspace");
        ui->label_noti_big->setText("history");
        ui->label_sugg_big->setText("instructions");
        ui->label_user_inf->setText("View personal information");
        ui->label_work_inf->setText("Work operation interface");
        ui->label_noti_inf->setText("History of use");
        ui->label_sugg_inf->setText("Product instructions and precautions");
    }else{
        ui->label_name->setText("主页");
        QString welcome = GlobalData::user.getUsername().append((QString)" 欢迎!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("主页");
        ui->label_user->setText("用户信息");
        ui->label_work->setText("工作界面");
        ui->label_noti->setText("历史记录");
        ui->label_sett->setText("设置");
        ui->label_sugg->setText("使用说明");
        ui->label_user_big->setText("用户信息");
        ui->label_work_big->setText("工作界面");
        ui->label_noti_big->setText("历史记录");
        ui->label_sugg_big->setText("使用说明");
        ui->label_user_inf->setText("查看个人信息");
        ui->label_work_inf->setText("工作操作界面");
        ui->label_noti_inf->setText("用户的使用记录");
        ui->label_sugg_inf->setText("产品说明和注意事项");
    }
    if (GlobalData::flag == true){
        ui->label_left->setStyleSheet("QLabel { background-color :qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(113,109,255,1), stop:1 rgba(164,125,255,1));; }");
        ui->homelabelbig->setStyleSheet("QLabel { background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(169,127,255,1), stop:1 rgba(115,109,255,1));border-radius:15px }");
    }else{
        ui->label_left->setStyleSheet("QLabel { background-color : qlineargradient(spread:pad, x1:0.512438, y1:0.159091, x2:0.497512, y2:0.971591, stop:0.19403 rgba(89,101,255,1), stop:1 rgba(126,236,255,1)); }");
        ui->homelabelbig->setStyleSheet("QLabel { background-color: qlineargradient(spread:pad, x1:0.144279, y1:0.130682, x2:1, y2:1, stop:0.263682 rgba(127,165,255,1), stop:1 rgba(109,228,255,1));border-radius:15px }");
    }
}

principal::~principal()
{
    delete ui;
}

void principal::on_pushButton_2_clicked()
{
    this->close();
    Work *p = new Work;
    p->show();
}

void principal::on_pushButton_5_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}


void principal::on_pushButton_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}

void principal::on_pushButton_4_clicked()
{
    this->close();
    Setting *se = new Setting;
    se->show();
}

void principal::on_pushButton_3_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void principal::on_pushButton_6_clicked()
{
    this->close();
    Work *p = new Work;
    p->show();
}

void principal::on_pushButton_7_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void principal::on_pushButton_9_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}

void principal::on_pushButton_8_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}

void principal::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}
