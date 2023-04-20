#include "camera.h"
#include "ui_camera.h"
#include "work.h"
#include "video_player.h"


Camera::Camera(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::Camera)
{
	ui->setupUi(this);
    //timer = new QTimer(this);
    //ui->Videolabel->setScaledContents(true);//可以使图片完全按QWidget缩放，而不保持原视频比例
    //connect(timer, SIGNAL(timeout()), this, SLOT(readFrame()));

}

Camera::~Camera() {
	delete ui;
}

void Camera::on_runButton_clicked() {
    //当按下运行按钮
    player->PaseOrStart();
    //timer->start(1000 / fps);
}

void Camera::on_stopButton_clicked() {
    //当按下停止按钮
    // 暂停视频并弹出提示框询问是否结束播放
    player->Pase();
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,
        QString::fromUtf8("close the video?"),
        QString::fromUtf8("Do you want to close the video?"),
        QMessageBox::Ok | QMessageBox::Cancel,
        QMessageBox::Ok);

    if (reply == QMessageBox::Cancel) {
        //  若选择否，则返回原视频，保持暂停状态
    }
    else {
        //  若选择是，则播放器关闭，显示等待播放视频
        player->Stop();
        player == NULL;
        //delete player;
        ui->Videolabel->setText("Waiting for new video...");
        ui->slider->setValue(0);
    }

}

void Camera::on_choosemodel_button_clicked() {
    if (player != NULL) {
        //open model file
        modelFileName = QFileDialog::getOpenFileName(
            this, "choose model file(.onnx)",
            ".",
            "model (*.onnx)");
        sModelName = modelFileName.toStdString();
        this->ui->model_edit->setText(modelFileName);
        player->setModelPath(sModelName);
    }
    else {
        //先选择视频才能选择模型
        qDebug() << "please first choose the video!";
    }
    
}

void Camera::on_slider_sliderMoved(int position) {
    player->PaseOrStart();
    player->Set_postion(ui->slider->value());
}

void Camera::on_loadfile_button_clicked() {

    //open video file
    videofileName = QFileDialog::getOpenFileName(
        this, "open video",
        ".",
        "video (*.avi *.mp4 *.flv);;All files (*.*)");
    sfileName = videofileName.toStdString();
    this->ui->file_edit->setText(videofileName);
    video.open(sfileName);

    //check if the file is open
    if (!video.isOpened()) {
        QMessageBox::information(this, tr("提示"), tr("视频没有打开"));
    }
    else {
        if (player == NULL) {
            //当没有视频播放时
            player = new Video_Player(ui->slider, ui->Videolabel, ui->part, ui->total);
            player->play(videofileName);
            //开启线程
            QThreadPool::globalInstance()->start(player);
        }
        else {
            //当有视频播放时
            player->Stop();
            player->play(videofileName);
        }
    }
}