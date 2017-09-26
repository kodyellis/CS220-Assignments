/*
   file name -- test-car.cpp

   This program serves as the test drver for the Car class.
*/

// ====================== header files ======================
#include <iostream>                 // for console I/O
using namespace std;                // for standard library
#include "car.h"


int main()
{
   Car dreamCar("3V3892AC", "BMW", "S320", 2016, true, 85);
   Car currentCar("49ABEDK", "Ford", "Fusion", 2014);
   Car oldCar();

   cout << "Current Car" << endl;
   cout << "VIN: "
        << currentCar.getVIN()
        << endl
        << "Make: "
        << currentCar.getMake()
        << endl
        << "Model: "
        << currentCar.getModel()
        << endl;

   cout << "********" << endl
        << "Dream Car" << endl;
   cout << "VIN: "
        << dreamCar.getVIN()
        << endl
        << "Make: "
        << dreamCar.getMake()
        << endl
        << "Model: "
        << dreamCar.getModel()
        << endl;

   return 0;
} // end main
