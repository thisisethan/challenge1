// Created on Thu May 7 2015

// Replace FILE with your file's name
#ifndef _MOVEMENT_H_
#define _MOVEMENT_H_
#include <time.h>

void driveForward(int power);

void turnLeft(int power);

void turnRight(int power);

void driveBackward(int power);

void motorStop(void);

void lineFollow(double time);


#endif
