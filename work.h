#ifndef WORK_H
#define WORK_H

#include <QWidget>
#include<QApplication>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QImage>
#include <QTimer>
#include <video_player.h>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

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

    void on_loadfile_button_clicked();

    void on_runButton_clicked();

    void on_stopButton_clicked();

    void on_slider_sliderMoved(int position);

    void on_choosemodel_button_clicked();

private:
    Ui::Work *ui;
    int fps;
    int frame_num;
    QString videofileName;
    std::string sfileName;
    QString modelFileName;
    std::string sModelName;
    VideoCapture video;
    QTimer* timer;
    Video_Player *player=NULL;
};

#endif // WORK_H
