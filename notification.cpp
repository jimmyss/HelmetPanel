#include "notification.h"
#include "ui_notification.h"
#include "suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"


Notification::Notification(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Notification)
{
    ui->setupUi(this);
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
