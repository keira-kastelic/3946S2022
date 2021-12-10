//
// Created by Keira Kastelic on 12/9/21.
//

#include "../../include/main.h"

void setDrive(int leftPct, int rightPct){
    leftPct = leftPct * 2;
    rightPct = rightPct * 2;
    backLeftDrive.move_velocity(leftPct);
    frontLeftDrive.move_velocity(leftPct);
    backRightDrive.move_velocity(rightPct);
    frontRightDrive.move_velocity(rightPct);
}

void rk8DriverControl(){
    int forward = (mainController.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y)*100)/127;
    int turn = (mainController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X)*100)/127;
    int leftPCT = forward + turn;
    int rightPCT = forward - turn;
    setDrive(leftPCT,rightPCT);
}

void tankDriverControl(){
    int leftPower = (mainController.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y)*100)/127;
    int rightPower = (mainController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y)*100)/127;
    setDrive(leftPower,rightPower);
}