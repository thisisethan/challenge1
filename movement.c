#include "movement.h"
#include "config.h"
#include <time.h>


void driveForward(int power)
{
	motor(left_motor_port, power);
	motor(right_motor_port, power);
}

void turnLeft(int power)
{
	motor(left_motor_port, power);
	motor(right_motor_port, -power);
}


void turnRight(int power)
{
	motor(left_motor_port, -power);
	motor(right_motor_port, power);
}

void driveBackward(int power)
{
	motor(left_motor_port, -power);
	motor(right_motor_port, -power);
}

void motorStop(void)

{ 
	motor(left_motor_port, 0);
	motor(right_motor_port, 0);
	
}

void lineFollow(double time)

{
	double sec = 0;
	clock_t start = clock(), diff;
	while (sec <= time)
	{
		if (analog(IR_sensor_port) < 900)
		{
			motor(left_motor_port, 20);
			motor(right_motor_port, 100);
			
		}
		
		else	
		{
				motor(left_motor_port, 100);
				motor(right_motor_port, 20);
		}
		diff = clock() - start;
		sec = diff * 10 / CLOCKS_PER_SEC;
	printf("seconds_running: %li\n", sec);
		}
}
