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
   Car dreamCar("3V3892AC", "BMW", "S320", 2016, true, 85);
   Car currentCar("49ABEDK", "Ford", "Fusion", 2014,false);
   Car oldCar();
   int k;

   //cout << "Current Car" << endl;
   //displayCar(currentCar);
   //currentCar.pressAccelerator();
   //currentCar.pressAccelerator();
   //displayCar(currentCar);

   cout << "********" << endl
        << "Dream Car" << endl;
   displayCar(dreamCar);
   for (k = 1; k < 5; k++)
      dreamCar.pressAccelerator();

   displayCar(dreamCar);

   for (k = 1; k < 15; k++)
      dreamCar.pressBreak();
   displayCar(dreamCar);

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
