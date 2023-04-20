#pragma once
#include <QWidget>

namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_pushButton_clicked();

    void on_Cancel_B_clicked();

    void on_Cancel_B_2_clicked();

private:
    Ui::Signup *ui;
    int code;
};

