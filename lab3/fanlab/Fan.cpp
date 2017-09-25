/*
   This file contains the definition of the member functions
   of Fan class
*/

// header files
#include <iostream>
#include <string>
#include <cstring>
#include "Fan.h" // includes code from that


using namespace std;
//===================================================
Fan::Fan() //default contructor
{
	cout << "empty constructor";
}//add stuff
		
void Fan::stopPressed()
/*After this function is called, the fan is turned off, the 
timer is turned off if it is on, both speed and duration are set to zero.*/
{
	if (is_on == true)
		is_on = false;
		if (timer_on == true)
			timer_on = false;
		speed = 0;
		duration = 0;
}

void Fan::highPressed()
{
	if (is_on == true)
		speed == high;          //high 3  med 2  low 1
}

void Fan::moderatePressed()
{
	if (is_on== true)
		speed == moderate;
}

void Fan::lowPressed()
{
	if (is_on == true)
		speed == low;
}
		/*highPressed, moderatePressed and lowPressed functions have no 
		precondition. The fan is changed to the desired speed depending
		on which of these functions is called when the fan is on; 
		otherwise, calling any of these functions has no effect.*/

void Fan::timerPressed()
{
	if (is_on == true)
		if (timer_on == true)
			timer_on == false;
		else if (timer_on ==false)
			timer_on==true;
}
		/*timerPressed function has no precondition. If the fan is 
		on and it is called, the timer changes from ON to OFF if it is
		On; it changes from OFF to ON if it is OFF. If the fan is off,
		 calling this function has no effect.*/
		  
		
void Fan::sixtyPressed()
{
	if (timer_on == true) && (is_on == true)
		duration == 60;
}

void Fan::thirtyPressed()
{
	if (timer_on == true) && (is_on == true)
		duration == 30;
}

void Fan::fifteenPressed()
{
	if (timer_on == true && is_on == true)
		duration == 15;
}
		/*sixtyPressed, thirtyPressed and fifteenPressed functions have 
		no precondition. If both the fan and the timer are on, the 
		duration of the timer is set to one of those values depending 
		on which function is invoked. Otherwise, no duration is set.*/



bool Fan::getOnState()
		/*getOnState function has no precondition and returns the state 
		 of the fan, true (is_on is true) or false (is_on is false).*/
{
	return is_on;
}
		 
		 
bool Fan::getTimeState()
		/*getTimerState function has no precondition and returns the 
		state of the timer, true (timer_on is true) or 
		false (timer_on is false).*/
{
	return timer_on;
}
		
		
int Fan::getSpeed()
		/*getSpeed function has no precondition.
		It returns the speed of the fan when it is called*/
{
	return speed;
}
		
		
int Fan::getDuration()
		/*getDuration function has no precondition. It returns the duration set on the timer*/
{
	return duration;
}
		
void display()
{
	cout << "Fan: (" << is_on << ")" << endl
	<< "Speed: (" << speed << ")" << endl
	<< "Time: (" << timer_on << ")" << endl
	<< "Duration: (" << duration << ")" << endl;
}
/*The display function has no precondition. It displays the following when it is called.
Fan: (On or Off) 
Speed: (High, Moderate, Low or Off) 
Time: (On or Off)
Duration: (60, 30, 15 or nothing)
*/
}; // class Fan




/*
top row
high moderate low stop

bottom row
timer 60 30 15

when fan == off, timer == off

Calling timer
when fan == true
	if timer == false
		timer==true
	if timer ==true
		timer==false

timer(turns timer on)
timer(turns timer off)

Calling 60(sets timer to 60 seconds, after seconds == 0 	fan turns off)
timer = 60
timer--
if timer == 0
	fan = false // turns fan off
	
Calling 20(sets timer to 20 seconds, after seconds == 0 	fan turns off)
timer = 20
timer--
if timer == 0
	fan = false // turns fan off
	
Calling 15(sets timer to 15 seconds, after seconds == 0 	fan turns off
timer = 15
timer--
if timer == 0
	fan = false // turns fan off


if timer off 
60 30 15 have no effect

if fan off
(timer 60 30 15 have no effect)
*/
