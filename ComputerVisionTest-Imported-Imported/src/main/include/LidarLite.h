/* #pragma once
#include <frc/Counter.h>
#include "Limelight.h"
#include "CameraArm.h"
using namespace frc;
class LidarLite{
    public:
        CameraMountAimer camarm;
        LidarLite(int dioPort);
        // double GetDistance();
        double GetDistanceRaw();
        double GetDistanceFloorwise();
    private:
        Counter lidarCounter;
        double distance;
        double LIDAR_OFFSET = -10;
        // double avgDistance;

};
*/
