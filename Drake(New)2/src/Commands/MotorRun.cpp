// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "MotorRun.h"

MotorRun::MotorRun() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motorControl);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void MotorRun::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MotorRun::Execute() {
	if(Robot::oi->getXbox()->GetY() >= 0.1) {
	Robot::motorControl->Forward(Robot::oi->getXbox()->GetY());
	}
	else if(Robot::oi->getXbox()->GetY() <= -0.1) {
	Robot::motorControl->Backward(Robot::oi->getXbox()->GetY());
	}
	if (Robot::oi->getXbox()->GetX() >= 0.1) {
	Robot::motorControl->Left(Robot::oi->getXbox()->GetX());
	}
	else if (Robot::oi->getXbox()->GetX() <= -0.1) {
	Robot::motorControl->Right(Robot::oi->getXbox()->GetX());
	}
}

// Make this return true when this Command no longer needs to run execute()
bool MotorRun::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MotorRun::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MotorRun::Interrupted() {

}
