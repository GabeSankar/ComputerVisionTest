#include "CameraArm.h"


void CameraMountAimer::turnHeadX(){
    //limelight.Update();
    if(limelight.GetXOffset()<-paddingbox){
        headTurnMotor.Set(-rotatexspeed);
    }else if(limelight.GetXOffset()>-paddingbox){
        headTurnMotor.Set(rotatexspeed);
    }else{
        headTurnMotor.Set(0);
    }
    

}
void CameraMountAimer::rotateCamY(){
     //limelight.Update();
    /* servoAngle = cameraServo.GetAngle();
frc::SmartDashboard::PutNumber("Servo Angle", servoAngle);
    if(limelight.GetYOffset()>5){
        cameraServo.SetAngle(servoAngle + ServoDegStep);
    }else if(limelight.GetYOffset()<5){
        cameraServo.SetAngle(servoAngle - ServoDegStep);
    }
    */
    
}
void CameraMountAimer::initialCalibration(){
   
        //manual calibration or search code
    
}
void CameraMountAimer::Calibration(){
    //Add calibration for error
}