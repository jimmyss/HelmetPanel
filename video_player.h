#pragma once
#ifndef VIDEO_PLAYER_H
#define VIDEO_PLAYER_H
#undef slots
#include <torch/script.h>
#include <torch/torch.h>
#define slots Q_SLOTS
#include <QThreadPool>
#include <QProgressBar>
#include <QThread>
#include <QDebug>
#include <string.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QSlider>
#include <QLabel>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>
#include "yolov5.hpp"

using namespace cv;

class Video_Player : public QRunnable
{
public:
    Video_Player(QSlider* slider, QLabel* video_label, QLabel* label_pos, QLabel* label_total);
    void play(QString path);
    void run();
    void Stop();
    void Start();
    int Faster();
    int Slower();
    void Pase();
    void PaseOrStart();
    void Set_postion(long po);
    void setModelPath(std::string model_path);
    double get_current_pos();
    static bool Is_Video_play;

private:
    QSlider* slider;
    QString Video_Path;
    QLabel* video_label;
    QLabel* label_pos;
    QLabel* label_total;
    VideoCapture capture;
    void show_img(Mat src, QLabel* label);
    Mat frame;
    bool Stop_Play = false;
    bool Is_Pase = true;
    int speed = 30;
    int pos = -1;
    std::string model_path;
    YOLO yolo;
    std::vector<std::string> class_names= yolo_utils::loadNames("D:\\University\\junior\\PROJECTS\\HelmetDetection\\Helmet\\person.names");
};

#endif // VIDEO_PLAYER_H