// Filename:  cs220 assignment2 #2a.cpp
// Name: Ms. Thomas
// Class: CSCI 220 Programming II
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

int findIndex(int[],int, int);
void TESTDRIVER01();




// =================== function prototype =============================

int main()
{
	TESTDRIVER01();
	return 0;
}// end main

void TESTDRIVER01()
{
	//Test 1
	// No values are smaller than k
	
	//int numbers[10];
	int size;
	int k;
	
	int numbers[10]= {6,7,8,9,10,11,12,13,14,15};
	int numbers[10]= {6,3,14,15};
	size = 10; //(10 elements 0-9 indexes)
	k = 5;
		
	cout << "TEST1: No values are smaller than k" << "int location: " 
	<< findIndex(numbers, size, k) << endl << endl;
	
	
	//Test 2
	//Some values are multiples of 7
	//upper_bound = 49;
	//lower_bound = 7;
	
	//cout << "TEST2: Some Values are Multiples of 7 between " << lower_bound << " and "
	//<< upper_bound << ":  " << countMultiple7(lower_bound, upper_bound) << endl << endl;
	
	//Test 3
	//No values have multiples of 7
	//upper_bound = 6;
	//lower_bound = 5;
	
	//cout << "TEST3: No Values are Multiples of 7 between " << lower_bound << " and "
	//<< upper_bound << ":  " <<  countMultiple7(lower_bound, upper_bound) << endl << endl;
	
}
//test driver

int findIndex(int numbers[], int size, int k)
{
	int index = 0;
	int record_index = -1;
	bool display = false;

	while (display == false)
		if (numbers[index] >= k) 
		// if greater than or equal to K, nothing 
		//happens, index is just updated.
		{
			index++; 
			if (index >= size);
				return -9;// returns -9 if no numbers are less than K
		}
		
		else if (numbers[index] < k)
		{
			display = true;
			record_index = index; // gets index number
		}
		
		return record_index;
}
	
