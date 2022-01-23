/* #include "LidarLite.h"
#include <math.h>
#include "CameraArm.h"
#define PI 3.14159265

LidarLite::LidarLite(int dioPort):
    lidarCounter(dioPort)
{
    distance = 0.0;
    lidarCounter.SetMaxPeriod(1.0);
    lidarCounter.SetSemiPeriodMode(true);
    lidarCounter.Reset();
}

double LidarLite::GetDistanceRaw() {
    if(lidarCounter.Get()< 1)
        distance = 0.0;
    else{
        distance = (lidarCounter.GetPeriod()*100000+LIDAR_OFFSET);
        lidarCounter.Reset();
    }
    return distance;
}
double LidarLite::GetDistanceFloorwise(){
    double angle = camarm.cameraServo.GetAngle();
    return (cos ( angle*(PI/180)))*GetDistanceRaw();
}
*/