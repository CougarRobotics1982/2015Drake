


#include "Camera.h"
//Constructor creates new AxisCamera
Camera::Camera()
{
	camera = new AxisCamera("10.19.82.11");
}

//First function to run when the command runs
//Only runs when you first start the command
void Camera::Initialize()
{

}

//Runs continuously until the command ends
void Camera::Execute()
{

}

//runs when the command is stopped before it is
//properly finished
void Camera::Interrupted()
{

}

//last command to run when IsFinished returns true
void Camera::End()
{

}

//is used to check to see if the command is finished
bool Camera::IsFinished()
{
	return true;
}
