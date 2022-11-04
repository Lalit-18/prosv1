#include "main.h"

//HELPER FUNCTIONS
void setLift(int power) {
    lift = power;
}

//DRIVER CONTROL FUNCTION
void setLiftMotors() {
//bottom trigger intakes, top trigger outtakes
    int liftPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1));
    setLift(liftPower);
}