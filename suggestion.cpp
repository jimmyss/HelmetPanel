#include "suggestion.h"
#include "ui_suggestion.h"
#include "principal.h"
#include "work.h"
#include "user.h"
#include "setting.h"
#include "notification.h"
#include "globaldata.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>

Suggestion::Suggestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Suggestion)
{
    ui->setupUi(this);
    if(GlobalData::flagl==true){
        ui->label_name->setText("Instructions");
        QString welcome = GlobalData::user.getUsername().append((QString)" welcome!");
        ui->label_welcome->setText(welcome);
        ui->label_home->setText("homepage");
        ui->label_user->setText("user");
        ui->label_work->setText("workspace");
        ui->label_noti->setText("history");
        ui->label_sett->setText("settings");
        ui->label_sugg->setText("instructions");
    }else{
        ui->label_name->setText("使用说明");
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
    readFile();
}

Suggestion::~Suggestion()
{
    delete ui;
}

bool Suggestion::readFile()
{
    QString fileAddr = "instruction.txt";
    QFile qfile(fileAddr);
    if (qfile.exists()) {
        if (qfile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&qfile);
            ui->textEdit->setPlainText("");
            while (!in.atEnd())
            {
                QString line = in.readLine().append("\n");      //整行读取
                ui->textEdit->insertPlainText(line);
            }
            return true;
        }
        else {
            QMessageBox::critical(0, "Failed",
                "file open failed!", QMessageBox::Cancel);
            return false;
        }
    }
    else {
        QMessageBox::critical(0, "Failed",
            "file not exist!", QMessageBox::Cancel);
        return false;
    }
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
