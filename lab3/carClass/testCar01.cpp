//  file name -- test-car1.cpp
//  This program serves a test driver to test the correctness
//  of the car class.

//  ======================== header files =======================
#include <iostream>                  // for console I/O
#include "car.h"                    // for car class
using namespace std;


int main()
{
   Car currentCar();
   Car dreamCar();

   cout << "Current Car Make: "
        << currentCar.getMake()
        << endl;

   cout << "Dream Car Make: "
        << dreamCar.getMake()
        << endl;

   return 0;
}  // end of main


