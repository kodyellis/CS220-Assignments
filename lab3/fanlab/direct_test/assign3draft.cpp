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
void takeAction(int, Fan&); //void takeAction(int, Fan&);
//void displayFan(Fan);

int main()
{
   Fan fan_object;
   int option;

   system("clear");
   do
   {
      displayMenu(); 
      getOption(option);
      takeAction(option, fan_object);
   } while (option != MAX); //exits the loop when 10 is inputted.

   return 0;
}// end main



void displayMenu()
{
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

void getOption(int& menu_option)//n = option variable
{
   
   do
   {
	  cout << "Input a menu number: ";
      cin >> menu_option;
      if (menu_option < 1 || menu_option > MAX)
         cout << "Invalid option! Number must be between 1 and 10" << endl;
   } while (menu_option < 1 || menu_option > MAX);//repeat loop is n is less than 1 or more than 10
}

void takeAction(int menu_option, Fan& object_thing) // takeAction(option, fan_object);
{ //void takeAction(int menu_option, Fan& object_thing) // takeAction(option, fan_object);

   switch (menu_option)
   {
      case 1:
         object_thing.stopPressed();
         cout << "Done." << endl;
         break;
      case 2:
         object_thing.highPressed();
         cout << "Done." << endl;
         break;
      case 3:
         object_thing.moderatePressed();
         cout << "Done." << endl;
	     break;
      case 4:
         object_thing.lowPressed();
         cout << "Done." << endl;
         break;
      case 5:
         object_thing.timerPressed();
         cout << "Done." << endl;
         break;
      case 6:
         object_thing.sixtyPressed();
         cout << "Done." << endl;
         break;
      case 7:
         object_thing.thirtyPressed();
         cout << "Done." << endl;
		 break;
      case 8:
		object_thing.fifteenPressed();
		cout << "Done." << endl;
		break;
      case 9:
        object_thing.getOnState();
        object_thing.display(); //object_thing.display(object_thing)
		break;
      case 10:
         cout << "Exiting the progam now" << endl;
		 break;
   }// end switch
}

/*void displayFan(Fan menu)
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
*/
