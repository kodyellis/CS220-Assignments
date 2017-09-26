// file name -- car.h
// This file contains the definition of the Car class

//#ifndef CLASS_CAR_
//#define CLASS_CAR_

// ====================== header files ======================
#include <string>                   // for string class
using namespace std;                // for standard library

class Fan
{
	private:
 		bool is_on;
		bool timer_on;
		int speed;
		int duration;

	public:
		Fan();  //default contructor
		void stopPressed();
		void highPressed();
		void moderatePressed();
		void lowPressed();
		void timerPressed();
		void sixtyPressed();
		void thirtyPressed();
		void fifteenPressed();
		bool getOnState();
		bool getTimeState();
		int getSpeed();
		int getDuration();
		void display();
};

//#endif





/*
//==========================
// filename -- Fan.h
// This file contains the definition for the Fan class

// header files

//#ifndef CLASS_FAN_
//#define CLASS_FAN_

#include <string>
using namespace std;




class Fan
{
	private:
		bool is_on;
		bool timer_on;
		int speed;
		int duration;

	public:
		Fan();  //default contructor
		void stopPressed();
		void highPressed();
		void moderatePressed();
		void lowPressed();
		void timerPressed();
		void sixtyPressed();
		void thirtyPressed();
		void fifteenPressed();
		bool getOnState();
		bool getTimeState();
		int getSpeed();
		int getDuration();
		void display();
}; // class Fan


*/






