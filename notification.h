#pragma once

#include <QWidget>

namespace Ui {
class Notification;
}

class Notification : public QWidget
{
    Q_OBJECT

public:
    explicit Notification(QWidget *parent = nullptr);
    ~Notification();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_clicked();

    void on_pushButton_portrait_clicked();

private:
    Ui::Notification *ui;
};
