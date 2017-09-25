// filename -- Fan.h
// This file contains the definition for the Fan class
// header files
#include <string>
using namespace std;
#ifndef CLASS_FAN_
#define CLASS_FAN_
class Fan
{
	private:
		bool is_on;
		bool timer_on;
		int speed;
		int duration;

	public:
		Fan();  //default contructor
		Fan(const Fan&);
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
#endif








