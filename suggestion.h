#ifndef SUGGESTION_H
#define SUGGESTION_H

#include <QWidget>

namespace Ui {
class Suggestion;
}

class Suggestion : public QWidget
{
    Q_OBJECT

public:
    explicit Suggestion(QWidget *parent = nullptr);
    ~Suggestion();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_portrait_clicked();

private:
    Ui::Suggestion *ui;
};

#endif // SUGGESTION_H
