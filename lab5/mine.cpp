/*
   This file contains the definition of the member functions
   of MineLocator class
*/
// header files
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>                  // for setw
#include "mine.h" // includes code from the header file
using namespace std;
//===================================================

MineLocator::MineLocator(int new_rows, int new_columns)
{
   /*Precondition: 1) All parameters must be positive
    * values when the contructor is called.
    *              2)They must be no greaters than
    * 40 and 60 respectively.
    *Postcondition: N/A
    */

    if(new_rows > 0 && new_columns > 0)
    {
      if(new_rows > 40)
         new_columns = 10;

      if(new_rows > 60)
         new_columns = 10;
   }
   else
   {
      new_rows = 10;
      new_columns = 10;
   }


   this -> rows = new_rows;
   this -> columns = new_columns;

   storage = new char[rows*columns];

   for (int index = 0; index < rows*columns; index++)
   {
      storage[index] = ' ';
   }
}
MineLocator::MineLocator(const MineLocator& source)
{
   /*Precondition: N/A
    *Postcondition: N/A
    */
   rows = source.rows;
   columns = source.columns;

   storage = new char[rows * columns];
   for (int index = 0; index < rows * columns; index++)
      storage[index] = source.storage[index];
}

MineLocator::~MineLocator()
{
   /*Precondition: N/A
    *Postcondition: N/A
    */
   delete[] storage;
}

void MineLocator::setElement(int row_offset, int column_offset, char value)
{
   /*Precondition: row_offset and column_offset should be in bound.
    *Postcondition: N/A
    */
   int index;
   index = columns*row_offset+column_offset;
   storage[index] = value;
}

char MineLocator::getElement(int row_offset, int column_offset)
{
   /*Precondition: row_offset and column_offset should be in bound.
    *Postcondition:N/A
    */
   int index;
   index = columns*row_offset+column_offset;
   return storage[index];
}

void MineLocator::initializeGame()
{
   /*Precondition: N/A
    *Postcondition:N/A
    */
   int i,j,row_offset, column_offset, element_count;
   int index = 0;

      for (i = 0; i < rows; i++)// display area
      {
         for (j = 0; j < columns; j++)
         {
            element_count = 0;

            if( storage[index] != 'M') //if it isn't a mine
            {
               column_offset = index % columns;
               row_offset = (index - column_offset) / columns;

               if (row_offset != 0)
               {
                  if (getElement(row_offset-1, column_offset-1) == 'M')
                     element_count++;
                  if (getElement(row_offset-1, column_offset) == 'M')
                     element_count++;
                  if (getElement(row_offset-1, column_offset+1) == 'M')
                     element_count++;
               }

               if (getElement(row_offset, column_offset-1) == 'M')
                  element_count++;
               if (getElement(row_offset, column_offset+1) == 'M')
                  element_count++;

               if (row_offset != (rows-1))
               {
                  if (getElement(row_offset+1, column_offset-1) == 'M')
                     element_count++;
                  if (getElement(row_offset+1, column_offset) == 'M')
                     element_count++;
                  if (getElement(row_offset+1, column_offset+1) == 'M')
                     element_count++;
               }

               switch (element_count)
               {
                  case 1:
                     storage[index] = '1';
                     break;
                  case 2:
                     storage[index] = '2';
                     break;
                  case 3:
                     storage[index] = '3';
                     break;
                  case 4:
                     storage[index] = '4';
                     break;
                  case 5:
                     storage[index] = '5';
                     break;
                  case 6:
                     storage[index] = '6';
                     break;
                  case 7:
                     storage[index] = '7';
                     break;
                  case 8:
                     storage[index] = '8';
                     break;
                  }

            }
            index = index + 1;
         }
      }

      cout << endl << endl;
}

int MineLocator::getRows()
{
   /*Precondition: N/A
    *Postcondition:N/A
    */
   return rows;
}

int MineLocator::getColumns()
{
   /*Precondition: N/A
    *Postcondition: N/A
    */
   return columns;
}
