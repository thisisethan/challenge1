#include <time.h>
#include "movement.h"

int main()
{
	lineFollow(4.0);
		
	turnLeft(100);
	msleep(500);
	
	//go forward until sense black
	while (analog(IR_sensor_port) < 900)
	{
		driveForward(100);
	}
	
	msleep(1000);
	
	turnRight(100);
	msleep(2000);
	
	driveForward(100);
	msleep(3000);

	//go backwards until sense black
	if (digital(IR_sensor_port) == 1){

		while (analog(6) < 900)
		{
		driveBackward(100);
		}
		
	}
	
	motorStop();
	
	return 0;
}
