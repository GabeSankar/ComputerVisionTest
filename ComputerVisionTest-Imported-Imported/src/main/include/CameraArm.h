#pragma once
#include "Limelight.h"
#include <frc/Servo.h>
#include <frc/motorcontrol/PWMVictorSPX.h>
#include "Constants.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/smartdashboard/SendableChooser.h>

class CameraMountAimer{
    public:
    LimeLight limelight;
    void autoAimInstructions();
    void rotateCamY();
    void initialCalibration();
    void turnHeadX();
    void OutOfTargetAction();
    void Calibration();
    frc::Servo cameraServo{CameraServoPort}; //Get the servo port
    frc::PWMVictorSPX headTurnMotor{TurretCameraMotor};//get the motor port

    private:
    double servoAngle;

    bool TargetOutOfRange;

};
