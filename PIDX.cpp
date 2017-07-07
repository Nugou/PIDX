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


PID::PID(double _kP, double _kI, double _kD, int _setPoint){
	kP = _kP;
	kI = _kI;
	kD = _kD;
	setPoint = _setPoint;
}

double PID::Process(){
	
	return ;
}


void PID::setConstants(double _kP, double _kI, double _kD){
	
}


void PID::setSampleTime(int NewSampleTime){
   if (NewSampleTime > 0){
	   
   }else{  
	   sampleTime = 0;
   }
}

void PID::SetOutputLimits(double Min, double Max){
	
}


