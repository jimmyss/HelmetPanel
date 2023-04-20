#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include "Smtp.h"
#include<qmessagebox.h>
#include<QTime>
#include "SqlConnection.h"
#include "globaldata.h"
Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    //语言的替换
    if(GlobalData::flagl==true){
        ui->pushButton->setText("Register");
        ui->Cancel_B->setText("Cancel");
        ui->label_2->setText("Register");
        ui->Cancel_B_2->setText("Gain");
        ui->lineEdit_id1->setPlaceholderText("Please enter your username");
        ui->lineEdit_id1_2->setPlaceholderText("Please input a password");
        ui->lineEdit_id1_3->setPlaceholderText("Please input an email");
        ui->lineEdit_id1_4->setPlaceholderText("Verification Code");
    }else{
        ui->pushButton->setText("注册");
        ui->Cancel_B->setText("取消");
        ui->label_2->setText("注册");
        ui->lineEdit_id1->setPlaceholderText("请输入您用户名");
        ui->lineEdit_id1_2->setPlaceholderText("请输入您的密码");
        ui->lineEdit_id1_3->setPlaceholderText("请输入您的邮箱");
        ui->lineEdit_id1_4->setPlaceholderText("验证码");
        ui->Cancel_B_2->setText("获取");
    }

    //颜色的替换
    if(GlobalData::flag==true){
        ui->pushButton->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1),stop:1 rgba(110,102,162,1));color: rgb(255, 255, 255, 255);border:0px groove gray;border-radius:15px;padding:2px 4px;font: 18pt 'Candara';}");
        ui->Cancel_B->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgb(215, 188, 201); border:0px groove gray;border-radius:15px;padding:2px 4px; font: 18pt 'Candara';}");
        ui->Cancel_B_2->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1));color: rgb(255, 255, 255, 255);background-color: rgb(78, 62, 158);border:0px groove gray;border-radius:10px;padding:2px 4px;font: 18pt 'Candara';}");
    }else{
        ui->pushButton->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(107,166,255,1), stop:1 rgba(107,166,255,1));color: rgb(255, 255, 255, 255);border:0px groove gray;border-radius:15px;padding:2px 4px;font: 18pt 'Candara';}");
        ui->Cancel_B->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgba(167,226,250,1); border:0px groove gray;border-radius:15px;padding:2px 4px; font: 18pt 'Candara';}");
        ui->Cancel_B_2->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1));color: rgb(255, 255, 255, 255);background-color: rgba(35,121,250,1);border:0px groove gray;border-radius:10px;padding:2px 4px;font: 18pt 'Candara';}");

    }
    //背景的替换
    if(GlobalData::flag==true && GlobalData::flagl==true){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/register.jpg);background-repeat: no repeat;}");
    }else if(GlobalData::flag==false && GlobalData::flagl==true){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/register1.jpg);background-repeat: no repeat;}");
    }else if(GlobalData::flag==true && GlobalData::flagl==false){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/register2.jpg);background-repeat: no repeat;}");
    }else {
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/register3.jpg);background-repeat: no repeat;}");
    }
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()
{
    // 注册按钮
    QString username = (QString const)ui->lineEdit_id1->text();
    QString password = (QString const)ui->lineEdit_id1_2->text();
    QString email = (QString const)ui->lineEdit_id1_3->text();
    QString vaildCode = (QString const)ui->lineEdit_id1_4->text();
    if (vaildCode == QString::number(code)) {
        //连接数据库
        if (createConnection()) {
            QSqlDatabase db = QSqlDatabase::database("connection1");
            QSqlQuery query(db);
            // 准备SQL语句
            query.prepare("insert into user(username, password,email) values(?, ?, ?)");
            query.addBindValue(username);
            query.addBindValue(password);
            query.addBindValue(email);
            if (!query.exec()) {
                QMessageBox::warning(this, "Error", "注册失败，请重试！", QMessageBox::Cancel);
            }
            else {
                QMessageBox::information(this, "Success", "注册成功！请登录！");
                db.close();
                db.removeDatabase("connection1");
                this->close();
                MainWindow* p = new MainWindow;
                p->show();
            }
        }
    }
    else {
        QMessageBox::warning(this, "Error", "验证码输入不正确，请重新输入", QMessageBox::Cancel);
    }
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
    QString recvaddr0 = ui->lineEdit_id1_3->text();
    QRegExp re("^[A-Za-z0-9]+([_\\.][A-Za-z0-9]+)*@([A-Za-z0-9\\-]+\\.)+[A-Za-z]{2,6}$");
    if (re.exactMatch(recvaddr0)) {//验证邮箱格式
        QMessageBox::information(this, "提示", "验证码将在30s内发送至您的邮箱，请耐心等待。");
        QTime time = QTime::currentTime();
        qsrand(time.msec() + time.second() * 1000);
        code = 1000 + qrand() % (9999 - 1000);    //产生1000~9999以内的随机数
        Smtp smtp;//实例化一个smtp对象
        QByteArray recvaddr = recvaddr0.toUtf8();//QString转QByteArray
        QString subject = "安全帽检测系统注册验证码";
        QString content = "欢迎注册安全帽检测系统，本次操作的验证码为：" + QString::number(code);
        smtp.send(recvaddr, subject, content);
    }
    else {
        QMessageBox::warning( this, "提示", "邮箱格式不正确，请重新输入。");
    }
}
