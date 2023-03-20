#include "suggestion.h"
#include "ui_suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"
#include "notification.h"

Suggestion::Suggestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Suggestion)
{
    ui->setupUi(this);
}

Suggestion::~Suggestion()
{
    delete ui;
}

void Suggestion::on_pushButton_4_clicked()
{
    this->close();
    Setting *se = new Setting;
    se->show();
}

void Suggestion::on_pushButton_3_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}

void Suggestion::on_pushButton_2_clicked()
{
    this->close();
    Work *w = new Work;
    w->show();
}

void Suggestion::on_pushButton_1_clicked()
{
    this->close();
    principal *pr = new principal;
    pr->show();
}

void Suggestion::on_pushButton_5_clicked()
{
    this->close();
    Notification *n = new Notification;
    n->show();
}

void Suggestion::on_pushButton_portrait_clicked()
{
    this->close();
    User *u = new User;
    u->show();
}
