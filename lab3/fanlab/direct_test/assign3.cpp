// Filename:  assign3.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include "Fan.h"
using namespace std;
// =============== symbolic constants ==============================
const int MAX = 10;
// ================== data type declarations =======================
// =================== function prototype ==========================
void displayMenu();
void testDriver01(Fan&);


int main()
{
	Fan fan_object;

	displayMenu();
	testDriver01(fan_object);
	
	
	return 0;
}// end main

void displayMenu()
{
	/*Precondition: N/A
	 *Postcondition: Displays a menu
	 */
	cout << endl << endl 
	<< "1.  Turn off the fan" << endl
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

void testDriver01(Fan& one) 
{ 
	/*Precondition: N/A
	*Postcondition: Executes all the Test Drivers
	*/
	cout << endl << "Default Display";
	one.display();
	 
	cout << endl << "Test Case01: Press Timer: ";
	one.timerPressed(); 
	one.display(); 
	
	cout << endl << "Test Case02: Press High Button: ";
	one.highPressed(); 
	one.display();	
	
	cout << endl <<  "Test Case03: Press Moderate Button ";
	one.moderatePressed(); 
	one.display();		
	
	cout << endl << "Test Case04: Press Low Button ";
	one.lowPressed(); 
	one.display();	
	
	cout << endl << "Test Case05: Press Sixty Seconds Button";
	one.sixtyPressed(); 
	one.display();	
	
	cout << endl << "Test Case06: Press Thirty Seconds Button";
	one.thirtyPressed(); 
	one.display();	
	
	cout << endl << "Test Case07: Press Fifteen Seconds Button";
	one.fifteenPressed(); 
	one.display();
	

	cout << "Test Case08: Status";
	cout << "Power state: "
	<< one.getOnState()
	<<endl
	<< "Time state: "
	<< one.getTimeState()
	<< endl
	<< "Speed: "
	<< one.getSpeed()
	<< endl
	<< "Duration: "
	<< one.getDuration()
	<< endl;
	
	cout << endl << "Test Case09: Stop Button Pressed: ";
	one.stopPressed(); // stop button pressed
	one.display(); // what do you expect?

	cout << endl << "Test Case10: Status after Stop Button pressed: " << endl;
	cout << "Power state: "
	<< one.getOnState()
	<<endl
	<< "Time state: "
	<< one.getTimeState()
	<< endl
	<< "Speed: "
	<< one.getSpeed()
	<< endl
	<< "Duration: "
	<< one.getDuration()
	<< endl;
 
}
