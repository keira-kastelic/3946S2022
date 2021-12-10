//
// Created by Keira Kastelic on 12/9/21.
//

#include "../../include/main.h"

//Drive Motors
extern pros::Motor frontRightDrive(0,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_DEGREES);
extern pros::Motor backRightDrive(0,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_DEGREES);
extern pros::Motor frontLeftDrive(0,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
extern pros::Motor backLeftDrive(0,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
//Other Motors
//Lifts should be red/100rpm
//Conveyor should be blue/600
extern pros::Motor leftLift(0,pros::E_MOTOR_GEARSET_36,false,pros::E_MOTOR_ENCODER_DEGREES);
extern pros::Motor rightLift(0,pros::E_MOTOR_GEARSET_36,true,pros::E_MOTOR_ENCODER_DEGREES);
extern pros::Motor conveyor(0,pros::E_MOTOR_GEARSET_06,false,pros::E_MOTOR_ENCODER_DEGREES);
//Controllers
extern pros::Controller mainController(pros::E_CONTROLLER_MASTER);
extern pros::Controller partnerController(pros::E_CONTROLLER_PARTNER);
