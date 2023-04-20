#pragma once

#include <QMainWindow>
#include "qtcpsocket.h"
#include <qhostaddress.h>
#include "qdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void recvMsg();
    void errMsg(int errNo);
    void on_Register_B_clicked();

private:
    bool isUserVaild(QString const username, QString const password);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;
    quint16 port = 2023;
    QString addr = "101.43.129.195";

};

