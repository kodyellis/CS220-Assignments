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
#include "employee.h"
#include "fulltime.h"
#include "parttime.h"
#include "manager.h"                // for utility programs
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

   //clearScreen();
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
   float bonus;

   index = 0;
   infile >> type;
   while (infile)
   {
      infile.get(name, NAME_SIZE);
      infile >> age;
      switch (type)
      {
         case 'F': infile >> salary;
               list[index] = new Fulltime(name, age, salary);
            break;
         case 'M': infile >> wage >> bonus;
               list[index] = new Manager(name, age, salary, bonus);
            break;
         case 'P': infile >> wage >> hours;
               list[index] = new Parttime(name, age, wage, hours);
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
