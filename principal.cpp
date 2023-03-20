#include "principal.h"
#include "ui_principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"
#include "notification.h"
#include "suggestion.h"


principal::principal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
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
