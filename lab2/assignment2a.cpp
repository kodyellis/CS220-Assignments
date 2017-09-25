// Filename:assign1ment2afinal.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 1 - Thursday
// Problem Description:

/*  Write a value returning function named numberOfDays which returns number of days in a given
month of a year. The function has three input parameters: month, year (both of int type), and leap
(of type bool). You may assume the value of month passed to the function is in the range [1, 12]
and year is at least 1582, the first year when Gregorian calendar was used.

The function returns the value of 31 if the month is in the set {1, 3, 5, 7, 8, 10, 12}, 30 if it is in the
set {4, 6, 9, 11}, 28 if it is 2 and the year is not a leap year, or 29 if it is 2 and the year is a leap year.
For example, numberOfDays(1, 2000, false) returns 31; numberOfDays(4, 1582, false) returns 30;
but numberOfDays(2, 2000, false) returns 29, 28 is returned by numberOfDays(2, 1800, true), and
29 is returned by numberOfDays(2, 2014).
*/

// ==================== header files ===============================

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>


using namespace std;

// ===================function prototypes================================
int count (int,int&,int&,int&);

void count(char text[], int& letter_count, int& digit_count, int& other_count);
void testdriver01();

// ===================global variables================================
int letter_count = 0;
int digit_count = 0;
int other_count = 0;
 
// ===================functions========================================
int main()
{
	testdriver01();
	return 0;
}// end main
    
    
void testdriver01()
{
	//Test Case 1: All letters and no characters
	letter_count = 0;
	digit_count = 0;
	other_count = 0;
	char text1[] = {"HelpmewiththisLab"};
	
	cout << "Test Case 1: Some letters and some digits: " << "Array: " << text1 << endl;
	count(text1, letter_count, digit_count, other_count);
	
	cout << "Letters count: " << letter_count << endl << "Digit count: " 
	<< digit_count << endl << "Other count: " << other_count << endl << endl;


	//Test Case 2: Some letters and some digits
	letter_count = 0;
	digit_count = 0;
	other_count = 0;
	char text2[] = {"B0YS4LIF3"};
	
	cout << "Test Case 2: Some letters and some digits: " << "Array: " << text2 << endl;
	count(text2, letter_count, digit_count, other_count);
	
	cout << "Letters count: " << letter_count << endl << "Digit count: " 
	<< digit_count << endl << "Other count: " << other_count << endl << endl;


	//Test Case 3: No letters and all digits 
	letter_count = 0;
	digit_count = 0;
	other_count = 0;
	char text3[] = "0123456789";
	
	cout << "Test Case 3: No letters and all digits: " << "Array: " << text3 << endl;
	count(text3, letter_count, digit_count, other_count);
	
	cout << "Letters count: " << letter_count << endl << "Digit count: " 
	<< digit_count << endl << "Other count: " << other_count << endl << endl;


	//Test Case 4: Some digits and some characters
	letter_count = 0;
	digit_count = 0;
	other_count = 0;
	char text4[] = {"01234%^&*~"};
	
	cout << "Test Case 4: Some digits and some characters: " << "Array: " << text4 << endl;
	count(text4, letter_count, digit_count, other_count);
	
	cout << "Letters count: " << letter_count << endl << "Digit count: " 
	<< digit_count << endl << "Other count: " << other_count << endl << endl;


	//Test Case 5 All characters
	letter_count = 0;
	digit_count = 0;
	other_count = 0;
	char text5[] = {"{}|:><?!"};
	
	cout << "Test Case 5: All characters: " << "Array: " << text5 << endl;
	count(text5, letter_count, digit_count, other_count);
	
	cout << "Letters count: " << letter_count << endl << "Digit count: " 
	<< digit_count << endl << "Other count: " << other_count << endl << endl;
}



void count(char text[], int& letter_count,int &digit_count,int &other_count)
{
	
	int index = 0;
	int string_counter = 0;
	
	
	string_counter = strlen(text);	
	
	while (index <= string_counter)
	{
		if (isalpha(text[index]))
			letter_count++;
		else if (isdigit(text[index])) 
			digit_count++;
		else if (ispunct(text[index])) 
			other_count++;
			
		index++;
	}
	
}



