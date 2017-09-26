// Filename:assign1ment2afinal.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 1 - Thursday
// Problem Description:
/*
Write a function named findIndex which has three value parameters: an array of integers
named numbers, size (an integer representing the size of the array), and k (a positive integer).
The function returns the location of the first integer in the array which is less than k. If none
of the elements in the array is less than k, the function returns -9. The prototype of this
function is as follows:
*/

// ==================== header files ===============================

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

// ===================function prototypes================================

void testdriver02();
int findIndex(int[], int, int);
void displayIntArray(int[], int); // placed in function prototype section

// ===================global variables/CONSTANTS================================
int k;
int size;

const int WIDTH = 6;
const int MAX_SIZE = 8;

// ===================functions================================
int main()
{
	testdriver02();
	return 0;
}// end main

void testdriver02()
{
	//Test Case 1: No numbers are less than K
	int numbers1[6] = {12,15,18,19,18,14};
	k = 11;
	size = 6;
	cout << "Test Case 1: No numbers are less than K" << endl;
	cout << "Array is: ";
	displayIntArray(numbers1, MAX_SIZE);
	cout << endl << "Test Data: k = " << k << " and size = " << size << endl;
	cout << "Location is: " << findIndex(numbers1, size, k) << endl << endl;
	

	//Test Case 2: Some numbers are less than K
	int numbers2[5] = {80,70,100,49,51};
	k = 50;
	size = 5;
	cout << "Test Case 2: Some numbers are less than K" << endl;
	cout << "Array is: ";
	displayIntArray(numbers2, MAX_SIZE);
	cout << endl << "Test Data: k = " << k << " and size = " << size << endl;
	cout << "Location is: " << findIndex(numbers2, size, k) << endl << endl;
	

	//Test Case 3: All numbers are less than K
	int numbers3[4] = {1,2,3,4,};
	k = 8;
	size = 4;
	cout << "Test Case 3: All numbers are less than K" << endl;
	cout << "Array is: ";
	displayIntArray(numbers3, MAX_SIZE);
	cout << endl << "Test Data: k = " << k << " and size = " << size << endl;
	cout << "Location is: " << findIndex(numbers3, size, k) << endl << endl;
}



int findIndex(int numbers[], int size, int k)
{
	int index = 0;
	int record_index = -1;
	//bool display = false;

	while (index <= size) //while index > size || display != true
	{
		
		if (numbers[index] >= k) 
		{
			if (index >= size);
				record_index = -9;// returns -9 if no numbers are less than K
		}
		
		else if (numbers[index] < k)
		{
			return record_index = index; // gets index number
			//stops loop
		}
		
		index++;
		
	}
		return record_index;
}
		
		
		
		
void displayIntArray(int values[], int MAX_SIZE)
{
	int index;
	for (index = 0; index < size; index++)
	{
		cout << setw(WIDTH) << values[index];
		if ((index + 1) % MAX_SIZE == 0)
			cout << endl;
	}
} // end of displayIntArray

