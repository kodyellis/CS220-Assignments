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
int countMultiple7(int, int);
void TESTDRIVER01();
int l_b;
int u_b;


// =================== function prototype =============================

int main()
{
	TESTDRIVER01();
	return 0;
}// end main

void TESTDRIVER01 ()
{
	//Test 1
	//All values
	
	int upper_bound;
	int lower_bound;
	
	upper_bound = 7;
	lower_bound = 7;
	
	cout << "TEST1: All values are Multiples between " << lower_bound << " and "
	<< upper_bound << ":  " << countMultiple7(lower_bound, upper_bound) << endl << endl;
	
	//Test 2
	//Some values are multiples of 7
	upper_bound = 49;
	lower_bound = 7;
	
	cout << "TEST2: Some Values are Multiples of 7 between " << lower_bound << " and "
	<< upper_bound << ":  " << countMultiple7(lower_bound, upper_bound) << endl << endl;
	
	//Test 3
	//No values have multiples of 7
	upper_bound = 6;
	lower_bound = 5;
	
	cout << "TEST3: No Values are Multiples of 7 between " << lower_bound << " and "
	<< upper_bound << ":  " <<  countMultiple7(lower_bound, upper_bound) << endl << endl;
	
}
//test driver
int countMultiple7(int lower_bound, int upper_bound)
{
	int count7Multiple = 0;
	int thisValue = 0;

	while (lower_bound <= upper_bound)
	{
		thisValue = lower_bound %  7;
		if (thisValue == 0)
			count7Multiple +=1;
		lower_bound++;
	}
	return count7Multiple;
	
}
