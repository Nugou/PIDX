#ifndef PIDX_h
#define PIDX_h

class PID{
	public:
		double kP, kI, kD;
		double P, I, D;
		double sampleTime;
		double minRangeOutput, maxRangeOutput;
		
		int setPoint;
		
};
#endif

