#include "movement.h"
#include <time.h>

void driveForward(int power)
{
	motor(0, power);
	motor(3, power);
}

void turnLeft(int power)
{
	motor(0, power);
	motor(3, -power);
}


void turnRight(int power)
{
	motor(0, -power);
	motor(3, power);
}

void driveBackward(int power)
{
	motor(0, -power);
	motor(3, -power);
}

void motorStop(void)

{ 
	motor(0, 0);
	motor(3, 0);
	
}

void lineFollow(double time)

{
	double sec = 0;
	clock_t start = clock(), diff;
	while (sec <= time)
	{
		if (analog(6) < 900)
		{
			motor(0, 20);
			motor(3, 100);
			
		}
		
		else	
		{
				motor(0, 100);
				motor(3, 20);
		}
		diff = clock() - start;
		sec = diff * 10 / CLOCKS_PER_SEC;
	printf("seconds_running: %li\n", sec);
		}
}
