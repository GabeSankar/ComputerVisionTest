#include "LidarLite.h"

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