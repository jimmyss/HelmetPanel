#include "camera.h"
#include "ui_camera.h"
#include "work.h"

Camera::Camera(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::Camera)
{
	ui->setupUi(this);
}

Camera::~Camera() {
	delete ui;
}
