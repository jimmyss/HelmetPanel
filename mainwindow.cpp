#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "principal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // 登陆
    this->close();
    principal *p = new principal;
    p->show();
}

void MainWindow::on_Register_B_clicked()
{
    //注册
    this->close();
    Signup *s = new Signup;
    s->show();
}
