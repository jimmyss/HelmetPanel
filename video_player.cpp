//#undef slots
//#include <torch/torch.h>
//#define slots Q_SLOTS
//using torch::jit::script::Module;

#include "video_player.h"

void align_center(QImage img, QLabel* label)
{
    QPixmap pix_img = QPixmap::fromImage(img);
    pix_img = pix_img.scaled(label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按照label尺寸缩放
    label->setAlignment(Qt::AlignCenter);  // 居中
    label->setPixmap(pix_img); // 在label中显示
}

QImage cvMat_2_QImage(const cv::Mat& mat)
{
    cvtColor(mat, mat, COLOR_BGR2RGB);
    QImage qim((const unsigned char*)mat.data, mat.cols, mat.rows, mat.step,
        QImage::Format_RGB888);
    return qim;
}

bool Video_Player::Is_Video_play = false;
Video_Player::Video_Player(QSlider* slider, QLabel* video_label, QLabel* label_pos, QLabel* label_total)
{
    //构造函数
    this->slider = slider;
    this->video_label = video_label;
    this->label_pos = label_pos;
    this->label_total = label_total;

}

void Video_Player::show_img(Mat frame, QLabel* label) {

    /*cv::cvtColor(image, image, CV_BGR2RGB);
    QImage img = QImage((const unsigned char*)(image.data), image.cols, image.rows,
        image.cols * image.channels(),
        QImage::Format_RGB888).scaled(label->width(), label->height());
    label->clear();
    label->setPixmap(QPixmap::fromImage(img));*/


    //clock_t start_name = clock();
    /*if (frame.empty() || ui->end_video->isDown())
    {
        my_video.close_video();
        ui->display->clear();
        break;
    }*/
    float confThreshold = 0.5;
    float iouThreshold = 0.5;
    std::vector<std::string> class_names = yolo_utils::loadNames("D:\\University\\junior\\PROJECTS\\HelmetDetection\\Helmet\\helmet.names");

    auto result = yolo.detect(frame, confThreshold, iouThreshold);
    yolo_utils::visualizeDetection(frame, result, class_names,
        true, true);

    //clock_t end_time = clock();
    /*if (ui->FPS_dispaly->isChecked())
    {
        auto text = "FPS: " + std::to_string(1 / ((double)(end_time - start_name) / CLOCKS_PER_SEC));
        qDebug() << "Frame time: " << (double)(end_time - start_name) / CLOCKS_PER_SEC;
        cv::putText(frame, text, cv::Point(3, 25), cv::FONT_ITALIC, 0.8, cv::Scalar(0, 0, 255), 2);
    }*/

    align_center(cvMat_2_QImage(frame), this->video_label);
    cv::waitKey(1);

}
void Video_Player::play(QString path) {
    Stop_Play = false;
    capture.open(path.toStdString());
    slider->setRange(0, capture.get(7));
    this->label_total->setText(QString::number(capture.get(7)));

    //先展示第一帧画面
    /*bool ret = capture.read(frame);
    long i = capture.get(1);

    show_img(frame, video_label);*/
    //      Is_Video_play==true;
    //      Stop_Play=false;
}
void Video_Player::Stop() {
    //停止播放
    Stop_Play = true;
}
int Video_Player::Faster() {

    if (speed > 5) {
        speed -= 5;
        return speed;
    }
    else {
        return 5;
    }


}
int Video_Player::Slower() {
    if (speed < 1000) {
        speed += 20;

        return speed;
    }
    else {
        return 1000;
    }

}

void Video_Player::Start() {
    //打开播放锁
    Stop_Play = false;
}
void Video_Player::Pase() {
    //暂停

    Is_Pase = true;

}
void Video_Player::PaseOrStart() {
    //暂停
    if (Is_Pase == true)
    {
        Is_Pase = false;
    }
    else {
        Is_Pase = true;
    }

}
double Video_Player::get_current_pos() {
    return (capture.get(0));
}

void Video_Player::Set_postion(long po) {
    //根据frame进行设置位置
    this->pos = po;
}
void Video_Player::setModelPath(std::string model_path)
{
    this->model_path = model_path;
    yolo = YOLO(model_path, true, cv::Size(640, 640));
}

void Video_Player::run() {
    //player的线程函数
    while (true) {
        //点击进度条响应 变化起始位置
        if (pos != -1) {
            capture.set(1, pos);
            pos = -1;
            Is_Pase = true;
        }
        //暂停响应
        if (!Is_Pase) {
            bool ret = capture.read(frame);
            long i = capture.get(1);
            if (Stop_Play) {
                break;
            }
            if (!ret) {
                continue;
            }
            show_img(frame, video_label);
            QMetaObject::invokeMethod(slider, "setValue", Qt::QueuedConnection, Q_ARG(int, i));
            QMetaObject::invokeMethod(label_pos, "setText", Qt::QueuedConnection, Q_ARG(QString, QString::number(i)));
            //QTest::qSleep(speed);
        }
        //是否退出视频
        else if(Stop_Play) {
            break;
        }

    }
}
