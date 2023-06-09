#pragma once
#ifndef CAMERA_H
#define CAMERA_H

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
	class Camera;
}

class Camera : public QWidget
{
	Q_OBJECT

public:
	explicit Camera(QWidget* parent = nullptr);
	~Camera();

private slots:
	void on_loadfile_button_clicked();

	void on_runButton_clicked();

	void on_stopButton_clicked();

	void on_slider_sliderMoved(int position);

	void on_choosemodel_button_clicked();

private:
	Ui::Camera* ui;

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

#endif