#ifndef WORK_H
#define WORK_H

#include <QWidget>

namespace Ui {
class Work;
}

class Work : public QWidget
{
    Q_OBJECT

public:
    explicit Work(QWidget *parent = nullptr);
    ~Work();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_portrait_clicked();

private:
    Ui::Work *ui;
};

#endif // WORK_H
