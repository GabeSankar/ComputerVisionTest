#include "CameraArm.h"


void CameraMountAimer::turnHeadX(){
    limelight.Update();
    if(limelight.GetXOffset()<0){
        headTurnMotor.Set(rotatexspeed);
    }else if(limelight.GetXOffset()>0){
        headTurnMotor.Set(-rotatexspeed);
    }
}
void CameraMountAimer::rotateCamY(){
    limelight.Update();
    servoAngle = cameraServo.GetAngle();
    if(limelight.GetYOffset()>0){
        cameraServo.SetAngle(servoAngle + servodegstep);
    }else if(limelight.GetYOffset()<0){
        cameraServo.SetAngle(servoAngle + servodegstep);
    }
    
}
void CameraMountAimer::initialCalibration(){
    while(limelight.tv = 0){
        //manual calibration or search code
    }
}