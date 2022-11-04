#include "main.h"
#include "pros/misc.h"

//HELPER FUNCTIONS
void setDrive(int left, int right){
driveLeftBack = left;
driveLeftFront = left;
driveRightBack = right;
driveRightFront = right;
}

//DRIVER CONTROL FUNCTIONS
void setDriveMotors(){
setDrive(0,0);
int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
if(abs(leftJoystick)>10)
    leftJoystick = 0;
if(abs(rightJoystick)>10)
    rightJoystick = 0;
setDrive(leftJoystick, rightJoystick); 
}