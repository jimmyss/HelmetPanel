#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "principal.h"
#include "SqlConnection.h"
#include "globaldata.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //语言的替换
    if(GlobalData::flagl==true){
        ui->pushButton->setText("Login");
        ui->Register_B->setText("Register");
        ui->label->setText("Login");
        ui->lineEdit_id1->setPlaceholderText("Please enter your username");
        ui->lineEdit_id2->setPlaceholderText("Please input a password");
        ui->label_title2->setText("Helmet Testing");
        ui->label_title3->setText("The server obtains the data of the client for detection.");
    }else{
        ui->pushButton->setText("登录");
        ui->Register_B->setText("注册");
        ui->label->setText("登录");
        ui->lineEdit_id1->setPlaceholderText("请输入您的用户名");
        ui->lineEdit_id2->setPlaceholderText("请输入您的密码");
        ui->label_title2->setText("安全帽检测");
        ui->label_title3->setText("服务器获取客户端的数据进行检测");
    }
    //颜色的替换
    if(GlobalData::flag==true){
        ui->pushButton->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1),stop:1 rgba(110,102,162,1));color: rgb(255, 255, 255, 255);border:0px groove gray;border-radius:15px;padding:2px 4px;font: 18pt 'Candara';}");
        ui->Register_B->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgb(215, 188, 201); border:0px groove gray;border-radius:15px;padding:2px 4px; font: 18pt 'Candara';}");
    }else{
        ui->pushButton->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(107,166,255,1), stop:1 rgba(107,166,255,1));color: rgb(255, 255, 255, 255);border:0px groove gray;border-radius:15px;padding:2px 4px;font: 18pt 'Candara';}");
        ui->Register_B->setStyleSheet("QPushButton{background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(110,102,162,1), stop:1 rgba(110,102,162,1)); color: rgb(255, 255, 255, 255);background-color: rgba(167,226,250,1); border:0px groove gray;border-radius:15px;padding:2px 4px; font: 18pt 'Candara';}");
    }
    //背景的替换
    if(GlobalData::flag==true && GlobalData::flagl==true){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/login.jpg);background-repeat: no repeat;}");
    }else if(GlobalData::flag==false && GlobalData::flagl==true){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/login1.jpg);background-repeat: no repeat;}");
    }else if(GlobalData::flag==true && GlobalData::flagl==false){
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/login2.jpg);background-repeat: no repeat;}");
    }else {
        ui->label_image->setStyleSheet("QLabel{border-image: url(:/background/login3.jpg);background-repeat: no repeat;}");
    }
    this->tcpSocket = new QTcpSocket(this);
    //connect(tcpSocket, SIGNAL(QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error)), this, SLOT(errMsg(int)));
    connect(tcpSocket, SIGNAL(QTcpSocket::readyRead()), this, SLOT(recvMsg()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // 登陆
    QString const username = (QString const)ui->lineEdit_id1->text();
    QString const password = (QString const)ui->lineEdit_id2->text();
    //tcpSocket->abort();
    //tcpSocket->connectToHost(QHostAddress(this->addr), this->port);
    ////waitForConnected的参数是超时时间

    //if (!tcpSocket->waitForConnected(10000)) {
    //    tcpSocket->disconnectFromHost();
    //    return;
    //}
    //QString str = username;//发送登录以及自己的账号给服务器
    //tcpSocket->write(str.toUtf8().data());
   /* QTextStream out(tcpSocket);
    out << username << endl;*/
    if (isUserVaild(username, password)) {
        GlobalData::user.setUsername(username);
        GlobalData::user.setPassword(password);
        this->close();
        principal* p = new principal;
        p->show();
    }
}

void MainWindow::on_Register_B_clicked()
{
    //注册
    this->close();
    Signup *s = new Signup;
    s->show();
}

bool MainWindow::isUserVaild(QString const username, QString const password)
{
    //建立数据库连接
    if (createConnection()) {
        QSqlDatabase db = QSqlDatabase::database("connection1");
        QSqlQuery query(db);
        // 准备SQL语句
        query.prepare("select * from user where username= ? ");
        query.addBindValue(username);
        //执行判断
        if (!query.exec()) {
            QMessageBox::critical(0, "Failed",
                "database query failed!", QMessageBox::Cancel);
            db.close();
            db.removeDatabase("connection1");
            return false;
        }
        else {
            while (query.next()) {
                if (username == query.value(0).toString() && password == query.value(1).toString()) {
                    GlobalData::user.setEmail(query.value(2).toString());
                    QMessageBox::information(this, "Success",
                        "login success !!");
                    db.close();
                    db.removeDatabase("connection1");
                    return true;
                }
                else {
                    QMessageBox::critical(0, "Query Failed",
                        "username or password failed!", QMessageBox::Cancel);
                    db.close();
                    db.removeDatabase("connection1");
                    return false;
                }
            }
                    }
    }
    else {
        return false;
    }

}

void MainWindow::recvMsg()
{
    QString res;

    res += tcpSocket->readAll();
    QMessageBox::critical(0, "success",
        res, QMessageBox::Cancel);
    tcpSocket->disconnectFromHost();
}

void MainWindow::errMsg(int errNo)
{
    qWarning("this is err!!!!");
}
