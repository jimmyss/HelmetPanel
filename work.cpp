#include "work.h"
#include "ui_work.h"
#include "user.h"
#include "setting.h"
#include "notification.h"
#include "suggestion.h"
#include "principal.h"
#include "camera.h"

Work::Work(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Work)
{
    ui->setupUi(this);
}

Work::~Work()
{
    delete ui;
}

void Work::on_pushButton_3_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Work::on_pushButton_7_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}

void Work::on_pushButton_6_clicked()
{
    this->close();
    Suggestion *su = new Suggestion;
    su->show();
}


void Work::on_pushButton_5_clicked()
{
    this->close();
    Setting *se = new Setting;
    se->show();
}

void Work::on_pushButton_1_clicked()
{
    this->close();
    principal *pr = new principal;
    pr->show();
}

void Work::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Work::on_pushButton_clicked()
{
    this->close();
    Camera* camera = new Camera;
    camera->show();
}
