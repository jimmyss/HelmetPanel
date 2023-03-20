#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    // 注册按钮
    this->close();
    MainWindow *p = new MainWindow;
    p->show();
}

void Signup::on_Cancel_B_clicked()
{
    //取消按钮
    this->close();
    MainWindow *p = new MainWindow;
    p->show();
}

void Signup::on_Cancel_B_2_clicked()
{

}
