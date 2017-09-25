/*
  file name -- car.cpp

  This file contais the definitions of member functions of
  Car class
*/

// ====================== header files ======================
#include <iostream>                 // for consoel I/O
#include <string>                   // for string class
#include "car.h"

using namespace std;                // for standard library

Car::Car()
{
   engine_on = false;
   speed = 0;
   vin = "unknown";
   make = "unknown";
   model = "unknown";
   year = 1899;
   cout << "Default constructor is called"
        << endl;
} // default constructor


Car::Car(string initial_vin, string initial_make,
         string initial_model, int initial_year,
         bool engine_status, int initial_speed)
{
   engine_on = engine_status;
   speed = initial_speed;
   vin = initial_vin;
   make = initial_make;
   model = initial_model;
   year = initial_year;
   cout << "Set value constructor is called"
        << endl;
} // set-value constructor

Car::Car(const Car& source)
{
   vin = source.vin;
   make = source.make;
   model= source.model;
   year = source.year;
   speed = source.speed;
   engine_on = source.engine_on;

} // copy constructor

string Car::getVIN()
{
   return vin;
}// end getVin


string Car::getMake()
{
   return make;
} //end getMake

string Car:: getModel()
{
   return model;
}// end getModel

int Car::getYear()
{
   return year;
} // end getYear

bool Car::isEngineOn()
{
   return engine_on;
}

int Car::getSpeed()
{
   return speed;
} // end getSpeed

void Car::pressAccelerator()
{
   if (engine_on)
      speed++;
} // end pressAccelerator

void Car::pressBreak()
{
   if (engine_on && speed > 0)
      speed--;
}

void Car::turnIgnition()
{
      engine_on = true;
}
