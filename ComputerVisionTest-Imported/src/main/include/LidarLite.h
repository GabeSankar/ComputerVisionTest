#pragma once
#include <frc/Counter.h>

using namespace frc;
class LidarLite{
    public:
        LidarLite(int dioPort);
        // double GetDistance();
        double GetDistanceRaw();
    private:
        Counter lidarCounter;
        double distance;
        // double avgDistance;

};
double LIDAR_OFFSET = -10;