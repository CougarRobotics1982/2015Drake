
#ifndef CAMERA_H
#define CAMERA_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Camera: public Command{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	AxisCamera *camera;
	Camera();

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
