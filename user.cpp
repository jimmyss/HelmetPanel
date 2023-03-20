#include "user.h"
#include "ui_user.h"
#include "setting.h"
#include "notification.h"
#include "suggestion.h"
#include "principal.h"
#include "work.h"


User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::on_pushButton_4_clicked()
{
    this->close();
    Setting *se = new Setting;
    se->show();
}

void User::on_pushButton_5_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}

void User::on_pushButton_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}

void User::on_pushButton_2_clicked()
{
    this->close();
    Work *w = new Work;
    w->show();
}

void User::on_pushButton_1_clicked()
{
    this->close();
    principal *pr = new principal;
    pr->show();
}

void User::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}
