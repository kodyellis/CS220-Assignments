// file name -- assign6.cpp
// ========================= header files =============================
#include <iostream>                  // for console I/O
#include <fstream>                // for file I/O
#include "fullTimeEmployee.h"
#include "manager.h"        // for Employee and its subclasses
#include "partTimeEmployee.h"       // for Employee and its subclasses
               // for utility programs
using namespace std;

// ===================== symbolic constants ===========================
const int MAX_NAME = 110;
const int NAME_SIZE = 21;
const int MAX_SIZE = 50;


// =================== data type declarations =========================
typedef Employee* EmployeePointerArray[MAX_SIZE];

// ===================== function prototypes ==========================
void openFile(ifstream&);
void readData(ifstream&, EmployeePointerArray, int&);
void displayEmployees(EmployeePointerArray, int);


int main()
{
   EmployeePointerArray list;
   ifstream infile;
   int n;

//   clearScreen();
   openFile(infile);
   readData(infile, list, n);
   displayEmployees(list, n);

   return 0;
} // end of main


void openFile(ifstream &infile)
// purpose: open a data file for read access.
// preconditions: none
// postconditions: a data file has been associated with infile.
{
   char infile_name[MAX_NAME];

   do
   {
      cout << "Enter data file name: ";
      cin.getline(infile_name, MAX_NAME);
      infile.open(infile_name);
      if (!infile)
         cout << infile_name
              << " was not opened successfully."
              << endl;
   } while (!infile);
}  // end of openFile


void readData(ifstream &infile,
              EmployeePointerArray list,
              int &size)
// purpose: read data about different employees and instantiate
//          objects in accordance with its type.
// preconditions: infile has been associated with an input data file.
// postconditions: objects are instantiated and their contents are
//          displayed based on its data type.
{
   char type;
   char name[NAME_SIZE];
   int age, index;
   double pay;
   float monthlySalary;
   float hourlyWage;
   float hoursWorked;
   float bonus;


   index = 0;
   infile >> type;
   while (infile)
   {
      infile.get(name, NAME_SIZE);
      infile >> age;
      switch (type)
      {
         case 'F': infile >> monthlySalary;
               list[index] = new FullTimeEmployee(name, age, pay, monthlySalary);
            break;
         case 'M': infile >> monthlySalary; infile >> bonus;
               list[index] = new Mangement(name, age, pay, monthlySalary, bonus);
            break;
         case 'P': infile >> hourlyWage >> hoursWorked;
               list[index] = new PartTimeEmployee(name, age, pay, hourlyWage, hoursWorked);
            break;
         default: cout << "Recond not recognized" << endl;
              break;
      } // switch
      index++;

      infile >> type;
   }  // while
   size = index;
}  // end of readData

void displayEmployees(EmployeePointerArray list,
                      int n)
{
   int index;

   for (index = 0; index < n; index++)
      list[index] -> getPay();


      cout << "Employee " << "," << " Name " << ","  << "age" << "," << "Pay" << ","  << " Bonus" << "," << "\n";
} // end of displayEmployees






!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!







// file name -- test-employee05.cpp

//                     ----------
//                    | Employee |
//                     ----------
//                         ^
//                         |
//           -------------------------------
//           |                             |
//    --------------                 -------------
//   |SalaryEmployee|               |WagedEmployee|
//    --------------                 -------------

// This program shows how inheritance works and how to instantiate
// objects of SalaryEmplyee and WagedEmployee classes by reading data
// from a text file. This program also attempts to show polymorphism
// works.

// ========================= header files =============================
#include <iostream>                  // for console I/O
#include <fstream>                   // for file I/O
#include "waged-employee01.h"        // for Employee and its subclasses
#include "salary-employee01.h"       // for Employee and its subclasses
#include "utility.h"                 // for utility programs
using namespace std;

// ===================== symbolic constants ===========================
const int MAX_NAME = 101;
const int NAME_SIZE = 21;
const int MAX_SIZE = 50;


// =================== data type declarations =========================
typedef Employee* EmployeePointerArray[MAX_SIZE];

// ===================== function prototypes ==========================
void openFile(ifstream&);
void readData(ifstream&, EmployeePointerArray, int&);
void displayEmployees(EmployeePointerArray, int);


int main()
{
   EmployeePointerArray list;
   ifstream infile;
   int n;

   clearScreen();
   openFile(infile);
   readData(infile, list, n);
   displayEmployees(list, n);

   return 0;
} // end of main


void openFile(ifstream &infile)
// purpose: open a data file for read access.
// preconditions: none
// postconditions: a data file has been associated with infile.
{
   char infile_name[MAX_NAME];

   do
   {
      cout << "Enter data file name: ";
      cin.getline(infile_name, MAX_NAME);
      infile.open(infile_name);
      if (!infile)
         cout << infile_name
              << " was not opened successfully."
              << endl;
   } while (!infile);
}  // end of openFile


void readData(ifstream &infile,
              EmployeePointerArray list,
              int &size)
// purpose: read data about different employees and instantiate
//          objects in accordance with its type.
// preconditions: infile has been associated with an input data file.
// postconditions: objects are instantiated and their contents are
//          displayed based on its data type.
{
   char type;
   char name[NAME_SIZE];
   int age, index;
   float salary;
   float wage;
   float hours;

   index = 0;
   infile >> type;
   while (infile)
   {
      infile.get(name, NAME_SIZE);
      infile >> age;
      switch (type)
      {
         case 'S': infile >> salary;
               list[index] = new SalaryEmployee(name, age, salary);
            break;
         case 'W': infile >> wage >> hours;
               list[index] = new WagedEmployee(name, age, wage, hours);
            break;
         default: cout << "Recond not recognized" << endl;
              break;
      } // switch
      index++;

      infile >> type;
   }  // while
   size = index;
}  // end of readData


void displayEmployees(EmployeePointerArray list,
                      int n)
{
   int index;

   for (index = 0; index < n; index++)
      list[index] -> display();
} // end of displayEmployees









!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

employee.dat




M John 48 6723.34 1000.00
F Jean 28 3223.41
P Joe 18 8.25 32
F Julia 33 4294.34


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




// file name -- Employee.cpp

#include <iostream>              // for console I/O
#include <cstring>
#include "employee.h"          // for Employee class
using namespace std;

Employee::Employee()
{
   name = new char[1];
   name[0] = '\0';
   age = 20;
   pay = 19;
} // Employee::Employee()

Employee::Employee(char *name, int age, double pay)
{
   this->name = new char[strlen(name) + 1];
   strcpy(this->name, name);
   this->age = age;
   this->pay = pay;
} // Employee::Employee(char*, int)

Employee::Employee(const Employee &source)
{
    name = new char[strlen(source.name) + 1];
    strcpy(name, source.name);
    age = source.age;
    pay = source.pay;
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

} //getAge
double Employee::getPay()
{
   return pay;

} //getPay





!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!





// file name -- fullTimeEmployee.cpp


#include <iostream>              // for console I/O
#include <cstring>
#include "employee.h"          // for Employee class
#include "fullTimeEmployee.h"          // for Employee class
using namespace std;

FullTimeEmployee::FullTimeEmployee()
                     : Employee("", 0, 0)
{
      monthlySalary = 100;

}
FullTimeEmployee::FullTimeEmployee(char* name, int age, double pay,float monthlySalary): Employee(name,age,pay)
{

   this->monthlySalary = monthlySalary;

}
FullTimeEmployee::FullTimeEmployee(const FullTimeEmployee &source)
{

   monthlySalary = source.monthlySalary;

}
FullTimeEmployee::~FullTimeEmployee()
{
}

float FullTimeEmployee::getMonthlySalary()
{
   return monthlySalary;
}
double Employee::getPay()
{
   return pay;
}




!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!






// file name -- manager.cpp


#include <iostream>              // for console I/O
#include <cstring>
#include "fullTimeEmployee.h"
#include "manager.h"
//#include "employee.h"        // for Employee class
using namespace std;

Mangement::Mangement(): FullTimeEmployee("", 0, 0, 0)
{
      bonus = 0.10;
}
Mangement:: Mangement(char* name, int age, double pay, float monthlySalary, float bonus) : FullTimeEmployee(name, age,pay, monthlySalary)
{

   this->bonus = bonus;

}
Mangement::Mangement(const Mangement &source)
{
   bonus = source.bonus;

}
Mangement::~Mangement()
{
}

float Mangement::getBonus()
{
   return bonus;
}
double Mangement::getPay()
{
   return pay;
}




!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!






// file name -- fullTimeEmployee.h



#include "employee.h"          // for Employee class
#ifndef CLASS_FULL_TIME_EMPLOYEE_
#define CLASS_FULL_TIME_EMPLOYEE_

class FullTimeEmployee : public Employee
{
      protected:


         float monthlySalary;

      public:
           FullTimeEmployee();
           FullTimeEmployee(char*, int, double, float);
           FullTimeEmployee(const FullTimeEmployee &);
          ~FullTimeEmployee();

          float getHourlyWage();
          float getHoursWorked();
          float getMonthlySalary();
         double getPay();

}; // class FullTimeEmployee
#endif




!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




// file name -- employee.h

#ifndef CLASS_EMPLOYEE_
#define CLASS_EMPLOYEE_

class Employee
{
   protected:
      char* name;
      int age;
      double pay;
   public:
      Employee();
      Employee(char*, int, double);
      Employee(const Employee &);
      ~Employee();

      char* getName();
      int getAge();
      virtual double getPay() = 0;
}; // class Employee

#endif



!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



// file name -- partTimeEmployee.h



#include "employee.h"          // for Employee class
#ifndef CLASS_PART_TIME_EMPLOYEE_
#define CLASS_PART_TIME_EMPLOYEE_

class PartTimeEmployee : public Employee
{
      protected:
        float hourlyWage, hoursWorked;

      public:
        PartTimeEmployee();
        PartTimeEmployee(char*, int, double, float, float);
        PartTimeEmployee(const PartTimeEmployee &);
       ~PartTimeEmployee();

      float getHourlyWage();
      float getHoursWorked();
      double getPay();
}; // class PartTimeEmployee
#endif


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




// file name --manger.h

#include "employee.h"
#include "fullTimeEmployee.h"          // for Employee class

#define CLASS_MANGEMENT_


class Mangement : public FullTimeEmployee
{
    protected:
         float bonus;

   public:
        Mangement();
        Mangement(char*, int, double, float,float);
        Mangement(const Mangement &);
       ~Mangement();


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



// file name -- PartTimeEmployee.cpp

#include <iostream>              // for console I/O

#include "employee.h"          // for Employee class
#include "partTimeEmployee.h"          // for Employee class
using namespace std;

PartTimeEmployee::PartTimeEmployee() :  Employee("", 0, 0)
{
   hourlyWage = 20;
}
PartTimeEmployee::PartTimeEmployee(char* name, int age, double pay, float hourlyWage, float hoursWorked):Employee(name,age,pay)
{
   this->hourlyWage = hourlyWage;
   this->hoursWorked = hoursWorked;
}
PartTimeEmployee::PartTimeEmployee(const PartTimeEmployee &source)
{
   hourlyWage = source.hourlyWage;
   hoursWorked = source.hoursWorked;

}
PartTimeEmployee::~PartTimeEmployee()
{
}


float PartTimeEmployee:: getHourlyWage()
{
   return hourlyWage;
}
float PartTimeEmployee::getHoursWorked()
{
   return hoursWorked;
}
double PartTimeEmployee::getPay()
{
   return pay;
}

