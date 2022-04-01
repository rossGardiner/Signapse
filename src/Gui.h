//
// Created by ross on 01/04/2022.
//

#ifndef SIGNAPSE_GUI_H
#define SIGNAPSE_GUI_H
#include <QCoreApplication>
#include "qtGenGui.h"
#include "stdlib.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>


#include "SignapseUtils.h"
#include "SceneCallback.h"

#define testFolder "test/asl_alphabet_test/"

/*
 * A class to wrap the QT generated header file and handle GUI functionality
 */
class Gui : public QWidget, public SceneCallback{
public:
    virtual void nextScene(Scene next);
    Gui();
    void SetVisible(bool visible);
    void SetTargetImage(int target);
    void SetTargetImage(std::string target);
    void ButtonPressed();


private:
    QMainWindow *widget;
    Ui_MainWindow *ui;
    void setDemoImage(cv::Mat img);
    void setTaskText(std::string letter);
    void makeConnections();
};


#endif //SIGNAPSE_GUI_H
