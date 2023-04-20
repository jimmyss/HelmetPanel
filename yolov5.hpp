#pragma once

#include <onnxruntime_cxx_api.h>
#include <opencv2/opencv.hpp>
#include <utility>

#include "utils.hpp"

class YOLO
{
public:
    YOLO();
    explicit YOLO(std::nullptr_t){};
    YOLO(const std::string &modelPath,
                 const bool &isGPU,
                 const cv::Size &inputSize);

    std::vector<Detection> detect(cv::Mat& image, const float& confThreshold,
        const float& iouThreshold);

private:
    Ort::Env env{nullptr};
    Ort::SessionOptions sessionOptions{nullptr};
    Ort::Session session{nullptr};
    /*Ort::AllocatedStringPtr inputNamePtr;
    Ort::AllocatedStringPtr outputNamePtr;*/
    void preprocessing(cv::Mat &image, float *&blob, std::vector<int64_t> &inputTensorShape);
    std::vector<Detection> postprocessing(const cv::Size &resizedImageShape,
                                          const cv::Size &originalImageShape,
                                          std::vector<Ort::Value> &outputTensors,
                                          const float &confThreshold, const float &iouThreshold);

    static void getBestClassInfo(std::vector<float>::iterator it, const int &numClasses,
                                 float &bestConf, int &bestClassId);

    std::vector<const char *> inputNames;
    std::vector<const char *> outputNames;
    bool isDynamicInputShape{};
    cv::Size2f inputImageShape; std::vector<Ort::Value> outputTensors;
};
