// file name -- employee.cpp

#include <iostream>              // for console I/O
#include <cstring>
#include "employee.h"          // for Employee class
using namespace std;

Employee::Employee()
{
   name = new char[1];
   name[0] = '\0';
   age = 20;
} // Employee::Employee()


Employee::Employee(char *name, int age)
{
   this->name = new char[strlen(name) + 1];
   strcpy(this -> name, name);

   this->age = age;
} // Employee::Employee(char*, int)


Employee::Employee(const Employee &source)
{
   name = new char[strlen(source.name) + 1];
   strcpy(name, source.name);

   age = source.age;
} // Employee::Employee(const Employee&)


Employee::~Employee()
{
   delete[] name;
} // end of destructor


char* Employee::getName()
{
   return name;
} // getName


int Employee::getAge()
{
   return age;
} // getAge



void Employee::display()
{
   cout << name
        << "  "
        << age
        << "  "
        << endl;
} // display

