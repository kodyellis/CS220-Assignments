/*
   file name -- test-car.cpp

   This program serves as the test drver for the Car class.
*/

// ====================== header files ======================
#include <iostream>                 // for console I/O
using namespace std;                // for standard library
#include "car.h"

void displayCar(Car);

int main()
{
   Car fleet[5];
   int k, index;

   // display the contents of the second car
   displayCar(fleet[1]);

   // write the statement(s) to display the contents of all cars in the fleet array
   index = 0;
   for (k = 1; k<= 5; k++)
   {
      cout << "Car # " << k << endl;
      displayCar(fleet[index]);
      cout <<"*********" << endl;
      index++;
   }


   // display the speed of the 3rd car
   cout << "The third car's speed is: "
        << fleet[2].getSpeed()
        << endl;

   // accelerate 10 times the speed of car 3 and print the speed again
   if (fleet[2].isEngineOn() == 0)
      fleet[2].turnIgnition();


   for (k = 1; k <= 10;k++)
      fleet[2].pressAccelerator();

   // display the speed of the 3rd car
   cout << "The third car's speed after accelerating is: "
        << fleet[2].getSpeed()
        << endl;

   return 0;
} // end main

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
