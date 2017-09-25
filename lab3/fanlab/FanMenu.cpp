// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include "Fan.h"
using namespace std;
// =============== symbolic constants ==============================
//const int DECIMAL = 2;
//const int WIDTH = 5;
const int MAX = 10;

// ================== data type declarations =======================

// =================== function prototype ==========================
void displayMenu();
void getOption(int&);
void takeAction(int, Fan&);
void displayFan(Fan);

int main()
{
   Fan fan_object();
   int option;

   system("clear");
   do
   {
      displayMenu();
      getOption(option);
      takeAction(option, fan_object);
   } while (option != MAX); //exits the loop when 10 is called.

   return 0;
}// end main

/*
Fan::Fan()
{
	fan_is_on = false;
	fan_timer_on = false;
	fan_speed = 0;
	fan_duration = 0;


	fan_is_on = is_on;
	fan_timer_on = timer_on;
	fan_speed = speed;
	fan_duration = duration;
	
	fan_is_on = false;
	fan_timer_on = false;
	fan_speed = 0;
	fan_duration = ;


        << endl;
} // set-value constructor
*/


void displayMenu()
{
   cout << "1.  Turn off the fan" << endl
        << "2.  Change to high speed" << endl 
        << "3.  Change to moderate speed" << endl
        << "4.  Change to low speed" << endl
        << "5.  Press timer button" << endl 
        << "6.  Press 60-minute button" << endl 
        << "7.  Press 30-minute button" << endl 
        << "8.  Press 15-minute button" << endl
        << "9.  Display the state of the fan" << endl
        << "10.  Exit" << endl;
}

void getOption(int& n)
{
   do
   {
      cin >> n;
      if (n < 1 || n > MAX)
         cout << "Invalid option! Number must be between 1 and 10" << endl;
   } while (n < 1 || n > MAX);
}

void takeAction(int n, Fan& thing)
{
   switch (n)
   {
      case 1:
         stopPressed();
         break;
      case 2:
         highPressed();
         break;
      case 3:
         moderatePressed();
	      break;
      case 4:
         lowPressed();
         break;/*
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

      case 5:
         timerPressed()
         break;
      case 6:
         sixtyPressed();
         break;
      case 7:
         thirtyPressed();
		   break;
      case 8:
			fifteenPressed();
			break;
      case 9:
         getOnState();
         displayFan(thing)
		   break;
      case 10:
		   break;
   }// end switch
}

void displayFan(Fan menu)
{
   cout << "Fan: "
        << menu.getOnState()
        << endl
        << "Speed: "
        << menu.getSpeed()
        << endl
        << "Time: "
        << menu.getTimeState()
        << endl
        << "Duration: "
        << menu.getDuration()
        << endl;
}// end displayCar
