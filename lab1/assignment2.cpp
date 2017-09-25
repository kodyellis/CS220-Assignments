// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:
// ==================== header files ==================================
#include <iostream>    // for input/output
#include <iomanip>    // for output format & for 
#include <string>      // for string variables
#include <cfloat>    //for obtaining the minimum/max of floats
#include <cctype>   //for is lower / to lower
using namespace std;
// ================= global data type declarations ====================
int numberOfDays(int, int, bool);
void TESTDRIVER01();
int l_b;
int u_b;


// =================== function prototype =============================

int main()
{
	TESTDRIVER01();
	return 0;
}// end main

void TESTDRIVER01()
{
	//Test 1
	//Days are 31 and there is no leap year
	
	int month;
	int year;
	bool leap;
	
	month = 8;
	year = 1997;
	leap= false;
	
	cout << "TEST1:  Moth is 8, Year is 1997, and there is no leap year." 
	<< "Days: " << numberOfDays(month, year, leap) << endl << endl;
	
	//Test 2
	//Days are 30 and there is a leap year
	month = 9;
	year = 2016;
	leap = true;
	
	cout << "TEST2: Month is 9 Year is 2016 and there is a leap year."
	 << "  Days: " << numberOfDays(month, year, leap) << endl << endl;
	
	//Test 3
	//Days are 28 and there is no leap year
	month = 2;
	year = 2000;
	leap = false;
	
	cout << "TEST3: Month is 2, Year is 2000 and there is no leap year." 
	<< "  Days: " << numberOfDays(month, year, leap) << endl << endl;
	
		//Test 4
	//Days are 29 and there is a leap year
	month = 2;
	year = 2001;
	leap = true;
	
	cout << "TEST3: Month is 2, Year is 2001 and there is a leap year." 
	<< "  Days: " << numberOfDays(month, year, leap) << endl << endl;
	
}

int numberOfDays(int month, int year, bool leap)
{

	
	int days = 0;
	if (year >= 1582)
	{
		if (month == 1 || month == 3 ||month == 5 || month == 7 || 
		month == 8 || month == 10 || month == 12)
			days = 30;
		else if( month == 4 ||month == 6 || month == 9 || month == 11)
			days = 31;
		else if  (month == 2 && leap == false)
			days = 28;
		else if (month == 2 && leap == true)
			days = 29;
	}
	
	return days;
}
