#include "setting.h"
#include "ui_setting.h"
#include "notification.h"
#include "suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "mainwindow.h"

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
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
