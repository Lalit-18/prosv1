#include "main.h"
#include "pros/misc.h"

//HELPER FUNCTIONS
void setIntake(int power) {
    intakeLeft = power;
    intakeRight = power; 
}

//DRIVER CONTROL FUNCTION
void setIntakeMotors() {
//bottom trigger intakes, top trigger outtakes
    int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
    setIntake(intakePower);
}