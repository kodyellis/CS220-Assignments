// Filename:  assign6.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:

// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include <fstream>
#include <cstring>

#include "employee.h"
#include "fulltime.h"
#include "parttime.h"
#include "manager.h"
using namespace std;
// =============== symbolic constants ==============================
const int MAX_NAME = 101;
const int NAME_SIZE = 21;
const int MAX_SIZE = 50;
typedef Employee* EmployeePointerArray[MAX_SIZE];
// =================== function prototype ==========================
void openFile(ifstream&);
void readData(ifstream&, EmployeePointerArray, int&);
void bubbleSort(EmployeePointerArray , EmployeePointerArray, int);
void displayEmployees(EmployeePointerArray, int);
// ================== data type declarations =======================
//reads in information of employees as console parameter
   //infile.open(argv[0]);


int main()
{
   EmployeePointerArray list;
   EmployeePointerArray temp;
   ifstream infile;
   int n;

   openFile(infile);
   readData(infile, list, n);
   bubbleSort(list,temp,n);
   displayEmployees(list, n);

}

void openFile(ifstream& infile)
// Purpose: This function will open an input text file.
// Precondition: None.
// Postcondition: infile is opened and a valid input file variable.
{
    //string infile_name;
    char infile_name[MAX_NAME];
    do
    {
        infile.clear();       // clear previous file name

         cout << "Enter input data file name: ";
         cin >> infile_name;
              //cin.ignore(30, EOLN);

         // link file variable to external file
         infile.open(infile_name);

         // verify file link is good
         if ( !infile )
             cout << infile_name
             << " was not successfully linked. Try again!"
             << endl;
    } while (!infile);
}// end openFile



void readData(ifstream &infile, EmployeePointerArray list, int &size)
// purpose: read data about different employees and instantiate
//          objects in accordance with its type.
// preconditions: infile has been associated with an input data file.
// postconditions: objects are instantiated and their contents are
//          displayed based on its data type.
{
   char type;
   char name[NAME_SIZE];
   int age, index;
   float salary, wage, hours, bonus;

   index = 0;

   while (infile)
   {
      //infile.clear();
      infile >> type;
      char employee_type = toupper(type);

      infile.get(name, NAME_SIZE);
      infile >> age;
      switch (employee_type)
      {
         case 'F':
               infile >> salary;
               list[index] = new Fulltime(name, age, salary);
            break;
         case 'M':
               infile >> salary >> bonus;
               list[index] = new Manager(name, age, salary, bonus);
            break;
         case 'P':
               infile >> wage >> hours;
               list[index] = new Parttime(name, age, wage, hours);
            break;
         default: cout << "ERROR: This record is not recognized" << endl;
              break;
      } // switch
      index++;

      infile >> type;//on the next line now
   }  // while
   size = index; // function gets amount of objects entered
}  // end of readData





void bubbleSort(EmployeePointerArray list, EmployeePointerArray temp, int size)
{
   //uses getPay for the Salary
   int iteration;
   int index2;
   for(iteration = 1; iteration < size; iteration++)
   {

      for (index2 = 0; index2 < size - iteration; index2++)

         if (list[index2] -> getPay() < list[index2+1] -> getPay()) //if salary elements is less than lower element
         {
            temp[0] = list[index2];  //temp array copies other array variables except for arrays

            for (int index = 0; index <= 21; index++)
            {
               temp[0] -> name[index] = list[index2]-> name[index]; //temp coppies array separately, has to do this.
            }

            list[index2] = list[index2+1]; //copies lower elemtn

            for (int index = 0; index <= 21; index++)
            {
               list[index2] -> name[index] = list[index2+1]-> name[index];
            }

            list[index2+1] = temp[0]; //lower elemtn now has temp

            for (int index = 0; index <= 21; index++)
            {
               list[index2+1] -> name[index] = temp[0] -> name[index]; //copies array
            }

         }
   }
}

void displayEmployees(EmployeePointerArray list, int size)
{
   cout << "#" << " Type" << " Name" << "  Age" << " Salary" << "  Bonus" << "   Wage" << " HoursWorked" << "  " << \n";
   cout << setfill('#') << endl;
   cout << index << list[index] -> display() //automatic endl
}
