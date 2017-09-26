// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include "car.h"
using namespace std;
// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;
const int MAX = 5;

// ================== data type declarations =======================

// =================== function prototype ==========================
void displayMenu();
void getOption(int&);
void takeAction(int, Car&);
void displayCar(Car);

int main()
{
   Car myCar("3V3892AC", "BMW", "S320", 2016, true, 85);
   int option;

   system("clear");
   do
   {
      displayMenu();
      getOption(option);
      takeAction(option, myCar);
   } while (option != MAX);

   return 0;
}// end main

void displayMenu()
{
   cout << "1. Print Car Content" << endl
        << "2. Press Accelerator" << endl
        << "5. End Program" << endl;
   cout << "Enter the number next to your selection: ";
}

void getOption(int& n)
{
   do
   {
      cin >> n;
      if (n < 1 || n > MAX)
         cout << "Invalid option! Number must be between 1 and 5" << endl;
   } while (n < 1 || n > MAX);
}

void takeAction(int n, Car& one)
{
   switch (n)
   {
      case 1:
         cout << "********" << endl;
         cout << "Display current contents of car" << endl;
         displayCar(one);
         cout << "********" << endl;
         break;
      case 2:
         cout << "Accelerate! No speeding Lauren!" << endl;
         break;
      case 3:
      case 4:
         cout << "3 and 4 Not implemented yet" <<endl;
         break;
      case 5:
         cout << "Exit Program" << endl;
         break;
   }// end switch
}

void displayCar(Car it)
{
   cout << "VIN: "
        << it.getVIN()
        << endl
        << "Make: "
        << it.getMake()
        << endl
        << "Model: "
        << it.getModel()
        << endl
        << "Year: "
        << it.getYear()
        << endl
        << "Speed: "
        << it.getSpeed()
        << endl;
}// end displayCar
