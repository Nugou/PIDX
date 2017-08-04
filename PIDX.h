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
		
		bool setRange;
	
	public:
		PIDX(double, double, double, double);
		double Process(double);
		void setConstants(double, double, double);
		void setOutputLimits(double, double);
		void setTargetPoint(int);
		void setNotRange();
};
#endif

