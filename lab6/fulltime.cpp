// file name -- salary-employee.cpp

#include <iostream>              // for console I/O
#include "fulltime.h"   // for Fulltime class
using namespace std;

Fulltime::Fulltime()
   : Employee('\0', 0)
{
   monthly_salary = 20;
} // Fulltime::Fulltime()


Fulltime::Fulltime(char *name, int age, float salary)
   : Employee(name, age)
{
   this -> monthly_salary = salary;
} // Fulltime::Fulltime(char*, int)


Fulltime::Fulltime(const Fulltime &source)
   : Employee(source.name, source.age)
{
   monthly_salary = source.monthly_salary;
} // Fulltime::Fulltime(const Fulltime&)


Fulltime::~Fulltime()
{
} // end of destructor


float Fulltime::getMonthlySalary()
{
   return monthly_salary;
} // getSalary


void Fulltime::setMonthlySalary(float salary)
{
   this -> monthly_salary = monthly_salary;
}; // setName


double Fulltime::getPay()
{
   return monthly_salary;
}

void Fulltime::display()
{
   cout << " F   "
        << name
        << "  "
        << age
        << "  "
        << monthly_salary //salary
        << endl;
} // display
