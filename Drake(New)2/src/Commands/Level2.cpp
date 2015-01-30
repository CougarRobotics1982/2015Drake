// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Level2.h"

Level2::Level2() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::motorControl);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void Level2::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void Level2::Execute() {
	Robot::motorControl->hindRight->Set(.5);
	printf("%i\n",Robot::sensors->encoder->Get());
}

// Make this return true when this Command no longer needs to run execute()
bool Level2::IsFinished() {
	int z;
	z = Robot::sensors->encoder->Get();
	bool x;
	if (z <= 600 and z >= 400) {
		x = true;
	}
	return x;
}

// Called once after isFinished returns true
void Level2::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Level2::Interrupted() {

}
