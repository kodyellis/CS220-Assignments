// Filename:  assign6.cpp
// Name: Kody Ellis
// Class: CSCI 220 Programming II
// Section/Lab: Section 2 - Tuesday and Thursday
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



void readData(ifstream &infile, EmployeePointerArray collection, int &size)
// purpose: read data about different employees and instantiate
//          objects in accordance with its type.
// preconditions: infile has been associated with an input data file.
// postconditions: objects are instantiated and their contents are
//          displayed based on its data type.
{
   char type;
   char name[NAME_SIZE];
   int age;
   float salary, wage, hours, bonus;
   char employee_type;

   int index = 0;
   infile >> type;

   while (infile)
   {

      employee_type = toupper(type);

      infile.get(name, NAME_SIZE);
      infile >> age;
      switch (employee_type)
      {
         case 'F':
               infile >> salary;
               collection[index] = new Fulltime(name, age, salary);
            break;
         case 'M':
               infile >> salary >> bonus;
               collection[index] = new Manager(name, age, salary, bonus);
            break;
         case 'P':
               infile >> wage >> hours;
               collection[index] = new Parttime(name, age, wage, hours);
            break;
         default: cout << "ERROR: This record is not recognized" << endl;
              break;
      } // switch
      index++;
      infile >> type;


   }  // while
   size = index; // function gets amount of objects entered
}  // end of readData





void bubbleSort(EmployeePointerArray collection, EmployeePointerArray temp, int size)
{
   //uses getPay for the Salary
   int iteration;
   int index2;
   for(iteration = 1; iteration < size; iteration++)
   {

      for (index2 = 0; index2 < size - iteration; index2++)

         if (collection[index2] -> getPay() < collection[index2+1] -> getPay()) //if salary elements is less than lower element
         {
            temp[0] = collection[index2];  //temp array copies other array variables except for arrays

            for (int index = 0; index <= 21; index++)
            {
               temp[0] -> name[index] = collection[index2]-> name[index]; //temp coppies array separately, has to do this.
            }

            collection[index2] = collection[index2+1]; //copies lower elemtn

            for (int index = 0; index <= 21; index++)
            {
               collection[index2] -> name[index] = collection[index2+1]-> name[index];
            }

            collection[index2+1] = temp[0]; //lower elemtn now has temp

            for (int index = 0; index <= 21; index++)
            {
               collection[index2+1] -> name[index] = temp[0] -> name[index]; //copies array
            }

         }
   }
}

void displayEmployees(EmployeePointerArray collection, int size)
{
   collection[0] -> display();
   collection[size] -> display();
   /*
   cout << "#" << " Type" << " Name" << "  Age" << " Salary" << "  Bonus" << "   Wage" << " HoursWorked" << "  ";
   cout << endl << "###############################################"<< endl;

   for (int index = 0; index < 3; index++)
   {
      cout << index;
      list[index] -> monthly_bonus(); //automatic endl
   }
   * */
}
