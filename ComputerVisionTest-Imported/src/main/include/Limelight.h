#pragma once

#include <memory>
#include <vector>

#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableInstance.h"


class LimeLight{
public:
    LimeLight();
    void Update();

    double targetIsFound(); //tv value is double not bool

    double GetArea();
//for XY centering
    double GetXOffset();
    double GetYOffset();

    double GetWidth();
    double GetHeight();
    void SetVisionMode(bool visionMode);

private:
    std::shared_ptr<NetworkTable> Table;
    double tv;
    double X;
    double Y;
    double Width;
    double Height;
    double area;
    unsigned int resolutionX;
    unsigned int resolutionY;
    unsigned int FullImgArea;
    bool found; //find out what to do with this

};