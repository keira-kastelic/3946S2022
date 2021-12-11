//
// Created by Keira Kastelic on 12/9/21.
//

#include "../../include/main.h"
void setIntake(){
    conveyor.move_velocity(600);
}

void intake(int intakePwr){
    intakePwr = intakePwr * 2;
    conveyor.move_velocity(intakePwr);
}

void intakeControl(){
    int run = (partnerController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y)*100)/127;
}
