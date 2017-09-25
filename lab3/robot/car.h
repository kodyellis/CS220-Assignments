// file name -- car.h
// This file contains the definition of the Car class

#ifndef CLASS_CAR_
#define CLASS_CAR_

// ====================== header files ======================
#include <string>                   // for string class
using namespace std;                // for standard library

class Car
{
   private:
      string vin;
      string make;
      string model;
      int year;
      bool engine_on;
      int speed;

   public:
      Car(); // default construtor
      Car(string initial_vin, string initial_make,
          string initial_model, int initial_year,
          bool engine_status = false, int initial_speed = 0);
      string getVIN();
      string getMake();
      string getModel();
      int getYear();
      bool isEngineOn();
      int getSpeed();
      void pressAccelerator();
      void pressBreak();
};

#endif