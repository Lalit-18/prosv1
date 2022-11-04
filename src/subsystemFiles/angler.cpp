#include "main.h"
#include "pros/adi.hpp"
#include "pros/misc.h"

pros::ADIPotentiometer anglerPot('A');

//HELPER FUNCTIONS
void setAngler(int power) {
    angler = power;
}

//DRIVER CONTROL FUNCTION
void setAnglerMotors() {
//bottom trigger intakes, top trigger outtakes
    int anglerPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_UP) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_DOWN));
    setLift(anglerPower);
}