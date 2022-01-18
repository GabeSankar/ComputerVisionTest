#pragma once
#include "Limelight.h"
#include <frc/Servo.h>
#include <frc/PWMVictorSPX.h>
class CameraMountAimer{
    public:
    LimeLight limelight;
    void autoAimInstructions();
    void rotateCamY();
    void initialCalibration();
    void turnHeadX();
    void OutOfTargetAction();
    frc::Servo cameraServo{1}; //Get the servo port
    frc::PWMVictorSPX headTurnMotor{2};//get the motor port

    private:
    double servoAngle;
    double rotatexspeed = 1;
    double servodegstep;
    bool TargetOutOfRange;

};
