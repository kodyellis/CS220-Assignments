// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
#include "bankAccount.h"

using namespace std;
// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;

// ================== data type declarations =======================

// =================== function prototype ==========================

int main()
{
   system("clear");
   // data declarations
   BankAccount csStudent;

   cout << "Acct Type: "
        << csStudent.getAcctType()
        << endl
        << "Balance: $"
        << csStudent.getBalance()
        << endl;


   return 0;
}// end main

