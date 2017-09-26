/*
   This file contains the definition of the member functions
   of Fan class
*/
// header files
#include <iostream>
#include <string>
#include <cstring>
#include "Fan.h" // includes code from the header file
using namespace std;
//===================================================
Fan::Fan() //default contructor
{
	/*Precondition: N/A
	 *Postcondition:Data members for the class Fan are given values.
	 */
	is_on = true;
	timer_on = false;
	speed = 0;
	duration = 0;
}

Fan::Fan(const Fan& copy)//copy constructor
{
	/*Precondition: N/A
	 * Postcondition: A copy constructor is made for the Fan Class.
	 */
	is_on = copy.is_on;
	timer_on = copy.timer_on;
	speed = copy.speed;
	duration = copy.duration;
	
}

void Fan::stopPressed()
{
	/*Precondition:N/A
	 * Postcondition: The fan is turned off, the 
	*timer is turned off if it is on, and both speed and duration 
	* are set to zero.*/
	is_on = false;
	if(timer_on == true)
		timer_on = false;
		speed = 0;
		duration = 0;
}

void Fan::highPressed()
{
	/* Precondition: N/A
	 * Postcondition: The fan is changed to the desired low if fan is on; 
	*if fan is off, calling this has no effect.
	 * */
	if (is_on == true)
		speed = 3;          //speed is high 3  med 2  low 1
}

void Fan::moderatePressed()
{
	/* Precondition: N/A
	 * Postcondition: The fan is changed to the desired low if fan is on; 
	*if fan is off, calling this has no effect.
	 * */
	if (is_on== true)
		speed = 2;
}

void Fan::lowPressed()
{
	/* Precondition: N/A
	 * Postcondition: The fan is changed to the desired low if fan is on; 
	*if fan is off, calling this has no effect.
	 * */
	if (is_on == true)
		speed = 1;
}

void Fan::timerPressed()
{
	/* Precondition: N/A
	 * Postconditioned: If the fan is on and this is called, the timer 
	 * changes from ON to OFF if it is On; it changes from OFF to ON if 
	 * the timer is OFF. If the fan is off, calling this function 
	 * has no effect.*/
	if (timer_on == true)
		timer_on = false;
	else if (timer_on == false)
			timer_on = true;
}
		 
void Fan::sixtyPressed()
{
	/* Precondition: N/A
	 * Postcondition: If both the fan and the timer are on, the 
	 *duration of the timer is set to 60. Otherwise, no duration
	 * is set.*/
	if (timer_on == true && is_on == true)
		duration = 60;
}

void Fan::thirtyPressed()
{
	/* Precondition: N/A
	 * Postcondition: If both the fan and the timer are on, the 
	 *duration of the timer is set to 30. Otherwise, no duration
	 * is set.*/
	if (timer_on == true && is_on == true)
		duration = 30;
}

void Fan::fifteenPressed()
{
	/* Precondition: N/A
	 * Postcondition: If both the fan and the timer are on, the 
	 *duration of the timer is set to 15. Otherwise, no duration
	 * is set.*/
	if (timer_on == true && is_on == true)
		duration = 15;
}

bool Fan::getOnState()
{
	/*Precondition: N/A
	 *Postcondition: This returns the state of the fan which is 
	 *true if is_on is true or false if is_on is false.*/
	return is_on;
}
		 
bool Fan::getTimeState()
{
	/*Precondition: N/A
	 *Postcondition: This returns the state of the timer, which is
	 *true if timer_on is true or false if timer_on is false.*/
	return timer_on;
}
		
int Fan::getSpeed()
{
	/*Precondition: N/A
	 *Postcondition: This returns the speed of the fan when it is called */
	return speed;
}

int Fan::getDuration()
{
	/*Precondition: N/A 
	 *Postcondition:This returns the duration set on the timer*/
	return duration;
}

void Fan::display()
{
	/*Precondition: N/A 
	 *Postcondition:This display the state of the fan, fan speed, 
	 *timer, and timer duration*/
	cout << endl << "Fan: (" 
	<< is_on << ")"  << endl
	    
	<< "Speed: (" 
	<< speed << ")" 
	<< endl
	    
	<< "Time: (" 
	<< timer_on << ")"
	<< endl
	    
	<< "Duration: (" 
	<< duration << ")" 
	<< endl;
}
