#pragma once

#include <QWidget>

namespace Ui {
class Setting;
}

class Setting : public QWidget
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_portrait_clicked();

    void on_dark_button_clicked();

    void on_light_button_clicked();

    void on_english_button_clicked();

    void on_chinese_button_clicked();

private:
    Ui::Setting *ui;
};

