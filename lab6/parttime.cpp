// file name -- waged-employee.cpp

#include <iostream>              // for console I/O
#include "parttime.h"    // for Parttime class
using namespace std;

Parttime::Parttime()
   : Employee('\0', 0)
{
   hourly_wage = 30;
} // Parttime::Parttime()


Parttime::Parttime(char *name, int age, float wage, int hours)
   : Employee(name, age)
{
   this -> hourly_wage = wage;
   this -> hours_worked = hours;
} // Parttime::Parttime(char*, int)


Parttime::Parttime(const Parttime &source)
   : Employee(source.name, source.age)
{
   hourly_wage = source.hourly_wage;
   hours_worked = source.hours_worked;
} // Parttime::Parttime(const Parttime&)


Parttime::~Parttime()
{
} // end of destructor


float Parttime::getHourlyWage()
{
   return hourly_wage;
} // getWaged


void Parttime::setHourlyWage(float wage)
{
   this-> hourly_wage = wage;
} // setName


int Parttime::getHoursWorked()
{
   return hours_worked;
} // getWaged


void Parttime::setHoursWorked(int hours)
{
   hours_worked = hours;
} // getWaged


double Parttime::getPay()
{
   int total_wage = hourly_wage*hours_worked;
   return total_wage;
}

void Parttime::display()
{
   cout << " P   "
        << name
        << "  "
        << age
        << "                   "
        << hourly_wage
        << " "
        << hours_worked
        << endl;

}

