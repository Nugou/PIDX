#ifndef PIDX_h
#define PIDX_h

class PIDX {
	private:
		double kP, kI, kD;
		double P, I, D;
		double minRangeOutput, maxRangeOutput;
		double PID;
		double error;
		double realTime, lastTime;
		double lastValue;
		double TargetPoint; 
		
		//int sampleTime;
		
		boolean setRange;
	
	public:
		double Process(double);
		void setConstants(double, double, double);
		//void setSampleTime(int smapleTime);
		void setOutputLimits(double, double);
		void setTargetPoint(int);
		void setNotRange();
};
#endif

