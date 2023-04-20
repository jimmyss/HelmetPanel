#pragma once
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QDebug>
#include<iostream>
#include<QSqlError>
static bool createConnection() {
    //���ӵ�һ�����ݿ�
    //QMYSQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "connection1");//��Ҫʹ�õ����ݿ����������콨�������ƣ����㽨��������ݿ����ӡ�ʹ�ò�ͬ�����ݿ�ʱ�����֣�
    db.setHostName("127.0.0.1");//���ӵ�ַ
    db.setUserName("root");//���ݿ��˻�
    db.setPassword("123456");//����
    db.setPort(3306);//�˿�
    //test_majiang.db
    db.setDatabaseName("demo");//��Ҫ�õ������ݿ�

    if (!db.open()) {//������ݿ�����ʧ�ܣ��򵯳�
        //critical(QWidget *parent, const QString &title,
        //const QString &text,
        //QMessageBox::StandardButtons buttons = Ok,
        //QMessageBox::StandardButton defaultButton = NoButton)
        qDebug() << db.lastError().text();
        QMessageBox::critical(0, "Cannot open database",
            "Unable to establish a database connection", QMessageBox::Cancel);
        return false;
    }

    return true;
}



