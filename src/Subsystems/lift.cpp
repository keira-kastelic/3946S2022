//
// Created by Keira Kastelic on 12/9/21.
//
#include "../../include/main.h"

// setting the height for where to stop for the motors to the lift
void setLiftHeight(){
    leftLift.move_absolute(-561,100);
    rightLift.move_absolute(-561,100);
}
void lift(int liftPwr){
    liftPwr = liftPwr * 2;
    leftLift.move_velocity(liftPwr);
    rightLift.move_velocity(liftPwr);
}
// setting the motors equal to buttons on the remote
void liftControl(){
    int raise = (partnerController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y)*100)/127;
    lift(raise);
}