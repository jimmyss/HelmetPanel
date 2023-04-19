/*
 * @Author: sun_liqiang
 * @Date: 2022-07-01 19:33:30
 * @LastEditors: sun_liqiang
 * @LastEditTime: 2022-07-05 00:57:04
 * @Description: 
 */

#pragma once

#include <codecvt>
#include <fstream>
#include <opencv2/opencv.hpp>

struct Detection
{
    cv::Rect box;
    float conf{};
    int classId{};
};

namespace yolo_utils
{
    size_t vectorProduct(const std::vector<int64_t> &vector);
    std::wstring charToWstring(const char *str);
    std::vector<std::string> loadNames(const std::string &path);
    void visualizeDetection(cv::Mat &image, std::vector<Detection> &detections,
                            const std::vector<std::string> &classNames, bool box = true, bool coco_class = true);

    void letterbox(const cv::Mat &image, cv::Mat &outImage,
                   const cv::Size &newShape,
                   const cv::Scalar &color,
                   bool auto_,
                   bool scaleFill,
                   bool scaleUp,
                   int stride);

    void scaleCoords(const cv::Size &imageShape, cv::Rect &box, const cv::Size &imageOriginalShape);

    template <typename T>
    T clip(const T &n, const T &lower, const T &upper);
}
