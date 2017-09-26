// file name -- salary-employee.cpp

#include <iostream>              // for console I/O
#include "manager.h"   // for Manager class
using namespace std;

Manager::Manager()
   : Fulltime(name, age, monthly_salary)
{
   monthly_bonus = 7.7;
} // Manager::Manager()


Manager::Manager(char *name, int age, float salary, float bonus)
   : Fulltime(name,  age, monthly_salary)
{
   this -> monthly_bonus = bonus;
} // Manager::Manager(char*, int)


Manager::Manager(const Manager &source)
   : Fulltime(source.name, source.age, source.monthly_salary)
{
   monthly_bonus = source.monthly_bonus;
} // Manager::Manager(const Manager&)


Manager::~Manager()
{
} // end of destructor


float Manager::getMonthlyBonus()
{
   return monthly_bonus;
} // getSalary


void Manager::setMonthlyBonus(float salary)
{
   this -> monthly_bonus = monthly_bonus;
}; // setName


double Manager::getPay()
{
   int total_wage =  monthly_salary+monthly_bonus;
   return total_wage;
} // display

void Manager::display()
{
      cout << " M   "
        << name
        << "  "
        << age
        << "  "
        << monthly_salary
        << " "
        << monthly_bonus
        << endl;
}

