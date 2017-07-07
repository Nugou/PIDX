#ifndef PIDX_h
#define PIDX_h

class PID{
	private:
		double kP, kI, kD;
		double P, I, D;
		double minRangeOutput, maxRangeOutput;
		double PID;
		double error;
		double realTime, lastTime;
		double lastValue;
		
		int TargetPoint;
		//int sampleTime;
		
		boolean setRange;
	
	public:
		double Process(double value);
		void setConstants(double kP, double kI, double kD);
		//void setSampleTime(int smapleTime);
		void setOutputLimits(double Min, double Max);
		void setTargetPoint(int new_TargetPoint);
		void setNotRange();
};
#endif

