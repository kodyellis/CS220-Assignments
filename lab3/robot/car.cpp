/*
  file name -- car.cpp

  This file contais the definitions of member functions of
  Car class
*/

// ====================== header files ======================
#include <iostream>                 // for consoel I/O
#include <string>                   // for string class
using namespace std;                // for standard library
#include "car.h"

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

// returns the vin of the Car
string Car::getVIN()
{
   return vin;
} // end getVIN


// returns the make of the Car
string Car::getMake()
{
   return make;
} // end getMake


// returns the model of the Car
string Car::getModel()
{
   return model;
} // end getModel


// returns the speed of the Car
int Car::getSpeed()
{
   return speed;
} // end getSpeed


// increments the speed by one mile each time it is called
// if engine is on; otherwise, speed is not changed
void Car::pressAccelerator()
{
   //if (engine_on)
   if (isEngineOn())
      speed++;
} // end pressAccelerator


// returns the state of the car engine - on or off
bool Car::isEngineOn()
{
   return engine_on;
} // end isEngineOn