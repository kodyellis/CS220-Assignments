// Filename:  assign3.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:

/*
Once the game is initialized, the program displays the game
board (for verification purpose) first. Thenit asks the user to
enter a location represented by a row number and a column number.
The programdisplays the content of the cell at the given
location. Then the program asks the user to see if he/shewants
 to locate a mine at a different location in the game. If he/she
 enters ‘Y’ or ‘y’, the programcontinues (the program needs to
  display the game board again); otherwise, the program ends.
  */

// ==================== header files ===============================
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>            // for output format
#include <cstdlib>

#include "mine.h"
using namespace std;
// =================== function prototype ==========================
void openFile(ifstream&);
void print(MineLocator);
void aftermath(MineLocator);
// ================== data type declarations =======================

ifstream infile;
string file_name;
int rows;
int columns;
int row_element;
int column_element;

int mine_count = 0;

// =================== function definition ==========================

int main()
{
   openFile(infile); // couts enter file name / cin file name
   infile >> rows >> columns >> mine_count;

   MineLocator object1(rows,columns);

   for (int index = 1; index <= mine_count; index++)
   {
      infile >> row_element >> column_element;

      object1.setElement(row_element , column_element, 'M'); //mine locations
   }

   cout << "MineSweeper Array " << endl;

   print(object1);
   object1.initializeGame();

   print(object1);
   aftermath(object1);

   return 0;
}



void openFile(ifstream& infile)
// Purpose: This function will open an input text file.
// Precondition: None.
// Postcondition: infile is opened and a valid input file variable.
{
    //string infile_name;
    char infile_name[30];
    do
    {
        infile.clear();       // clear previous file name

         cout << "Enter input data file name: ";
         cin >> infile_name;
              //cin.ignore(30, EOLN);

         // link file variable to external file
         infile.open(infile_name);

         // verify file link is good
         if ( !infile )
             cout << infile_name
             << " was not successfully linked. Try again!"
             << endl;
    } while (!infile);
}// end openFile


void print(MineLocator object)
{
   int i,j,index =0;

      for (i = 0; i < rows; i++)// display area
      {
         for (j = 0; j < columns; j++)
         {
            cout << setw(1)
                 << object.getElement(i,j) // ends at      single line of
                 << " |";

            index++;
         }
         cout << endl;
      }

}


void aftermath(MineLocator object)
{
   int r,c;
   char answer;
   do
   {
      //display game board
      cout << "User enter a location represented by a row number, then a column number";

      cout << endl <<  "Row Number: ";
      cin >> r;

      cout << endl << "Column Number: ";
      cin >> c;

      cout << "Content of cell:" <<  object.getElement(r,c);

      cout << endl << " Do you want to locate a different mine? Y for yes or N for no: ";
      cin >> answer;
      cout << endl;
   }while (tolower(answer) == 'y');

}

