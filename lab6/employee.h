// file name -- employee01.h

#ifndef CLASS_EMPLOYEE
#define CLASS_EMPLOYEE

class Employee
{

   public:
      char* name;
      int age;

      Employee();
      Employee(char*, int);
      Employee(const Employee &);
      ~Employee();

      char* getName();
      int getAge();
      virtual void display();
      virtual double getPay()= 0;

   };//class Employee

   #endif
