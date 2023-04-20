#pragma once
#include<QByteArray>
#include<QString>
#include<QTcpSocket>

class Smtp
{
public:
    Smtp(QByteArray username, QByteArray password);
    Smtp();
    void send(QByteArray recvaddr, QString subject, QString content);
    ~Smtp();
private:
    QTcpSocket* clientsocket;
    QByteArray username = "2063217709@qq.com";//发送方邮箱
    QByteArray password = "gkfjvkzdxxoucfhh";//授权码
    QByteArray mailfrom = "mail from:<";
    QByteArray rcptto = "rcpt to:<";
    QByteArray prefrom = "from:";
    QByteArray preto = "to:";
    QByteArray presubject = "subject:";
    QByteArray recvaddr;//接收方邮箱
    QString subject;//邮件标题
    QString content; //发送内容
    QByteArray recvdata;//接收到的数据
};

