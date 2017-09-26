// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include <cstring>

using namespace std;
// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;
const int MAX_SIZE = 51;

// ================== data type declarations =======================

// =================== function prototype ==========================
void countWords(char[], int&);

int main()
{
   // data declarations
   char lineOfText[MAX_SIZE];
   int numberWords;

   system("clear");
   // initialize
   strcpy(lineOfText,"The class has 2 minutes left."); // copies string to line of text

   // call function
   countWords(lineOfText, numberWords);

   // display results
   cout << "The test string <"
        << lineOfText
        << "> has "
        << numberWords
        << " words." << endl;


   return 0;
}// end main

//                line fo text numberWorlds
void countWords(char sentence[], int& wordCount)
// Purpose:
// Precondition:
// Postcondition:
{
   int k, index;
   int size;

   size = strlen(sentence);  // gets size of sentence string  
   cout << "the size of the sentence is " << size << endl;

   //size works
   index = 0;
   
   //if statement is broken , size works
   
   // sentence[index] != '\0'
   for ( k = 1 ; k <= size; k++)
   {
		cout << "k = " << k << " and index = " << index << endl;
		cout << "char is " << sentence[index] << endl; 
		
      //if (sentence[index] == ' ')
      if(isspace(sentence[index]))
      {
			wordCount++;
			cout << "found a space" << endl;
		}
		
	index++;
	
   }// end for k
   wordCount++;
   
}// end


//void functionName()
// Purpose:
// Precondition:
// Postcondition:
//{
//}// end

