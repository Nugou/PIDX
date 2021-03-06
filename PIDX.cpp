/**********************************************************************************************
 * Arduino PID Library - Version 0.1
 * by Alessandro Vinicius <alessandro.vncs@gmail.com>
 *
 **********************************************************************************************/

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <PIDX.h>


PIDX::PIDX(double _kP, double _kI, double _kD, double _TargetPoint){
	kP = _kP;
	kI = _kI;
	kD = _kD;
	TargetPoint = _TargetPoint;
	lastValue = 0.0;
	lastTime = 0;
	setRange = false;
}

double PIDX::Process(double value){
	error = TargetPoint - value;
	
	realTime = (millis() - lastTime)/1000.0;
	lastTime = millis();
	
	P = error * kP;
	I = I + (error * kI);
	D = (value - lastValue) * kD / realTime;
	
	lastValue = value;
	
	PID = P + I + D;
	
	if(PID > maxRangeOutput && setRange){
		PID = maxRangeOutput;
	}else if(PID < minRangeOutput && setRange){
		PID = minRangeOutput;
	}
	
	return PID;
}


void PIDX::setConstants(double new_kP, double new_kI, double new_kD){
	kP = new_kP;
	kI = new_kI;
	kD = new_kD;
}

void PIDX::setOutputLimits(double Min, double Max){
	minRangeOutput = Min;
	maxRangeOutput = Max;
	setRange = true;
}

void PIDX::setTargetPoint(int new_TargetPoint){
	TargetPoint = new_TargetPoint;
}

void PIDX::setNotRange(){
	setRange = false;
}


