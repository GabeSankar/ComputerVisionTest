//Finding distance with the limelight needs hight of target hight of camera and angle of camera
//Hight of camera and hight of target are both constants that need to be defined
//the angle can be found from the camera arm code
//then you just need to do the math and push the variables to the needed places

#include "Constants.h"
#include "math.h"
#include "Limelight.h"


double horizontalDistance = (TargetHight-CameraHight) / tan(a1+a2);

//a2 is the y angle to the target (reflective tape)
//a1 is the mounting angle
//a2 can be found with LimeL I think
//a1 can be found with CameraArm
//coming back to this later once i ask gabe about those two variables
