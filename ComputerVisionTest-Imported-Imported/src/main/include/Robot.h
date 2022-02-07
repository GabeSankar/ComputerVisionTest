
#pragma once
#include <string>
#include <frc/TimedRobot.h>
#include <units/time.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "Limelight.h"
#include "CameraArm.h"
#include "LidarLite.h"
#include "Constants.h"
#include <frc/Timer.h>
#include <frc/Joystick.h>



class Robot : public frc::TimedRobot {
 public:
  Robot();
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  LidarLite lidar;
  CameraMountAimer cam;
  frc::Joystick stick{JoystickPort};
  units::second_t delay{0.000000002};

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  //LidarLite lidar;
  frc::SmartDashboard * dash;
};
