//
// Created by Keira Kastelic on 12/9/21.
//

#include "../../include/main.h"

//Drive Motors
pros::Motor frontRightDrive(4,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_DEGREES);
 pros::Motor backRightDrive(5,pros::E_MOTOR_GEARSET_18,false,pros::E_MOTOR_ENCODER_DEGREES);
 pros::Motor frontLeftDrive(1,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
 pros::Motor backLeftDrive(2,pros::E_MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
//Other Motors
//Lifts should be red/100rpm
//Conveyor should be blue/600
 pros::Motor leftLift(8,pros::E_MOTOR_GEARSET_36,false,pros::E_MOTOR_ENCODER_DEGREES);
 pros::Motor rightLift(10,pros::E_MOTOR_GEARSET_36,true,pros::E_MOTOR_ENCODER_DEGREES);
 pros::Motor conveyor(9,pros::E_MOTOR_GEARSET_06,false,pros::E_MOTOR_ENCODER_DEGREES);
//Controllers
 pros::Controller mainController(pros::E_CONTROLLER_MASTER);
 pros::Controller partnerController(pros::E_CONTROLLER_PARTNER);
