#pragma once
#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
	class Camera;
}

class Camera : public QWidget
{
	Q_OBJECT

public:
	explicit Camera(QWidget* parent = nullptr);
	~Camera();

private:
	Ui::Camera* ui;
};

#endif