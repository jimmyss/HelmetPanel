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
    QByteArray username = "2063217709@qq.com";//���ͷ�����
    QByteArray password = "gkfjvkzdxxoucfhh";//��Ȩ��
    QByteArray mailfrom = "mail from:<";
    QByteArray rcptto = "rcpt to:<";
    QByteArray prefrom = "from:";
    QByteArray preto = "to:";
    QByteArray presubject = "subject:";
    QByteArray recvaddr;//���շ�����
    QString subject;//�ʼ�����
    QString content; //��������
    QByteArray recvdata;//���յ�������
};

