# PIDX Library (PIDX)

This library make calcule PID to use in your projects with code easy of to use;


# Installation

To install, download and extract to the folder 'libraries' of arduino(C:\Program Files (x86)\Arduino\libraries\), done; 

# Comands

Instance: PIDX MYPID(double, double, double, double); Instance with: kP(constans of proporcion), kI(constans of integracion),
kD(constans of Derivation), TargetPoint;

*-> name of reference like 'MYPID';

To use the library, use comands: 

* *.Process(double); -> (double -> value to be calculate). Return a double;
* *.setConstants(double, double, double); - > Set constants in order(kP, kI, kD);
* *.setOutputLimits(double, double); -> Set limits in value;
* *.setTargetPoint(int); -> Set a value that your want to get;
* *.setNotRange(); -> Remove limits;
 

# Change Log

1.0 - Library finished;
