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
   BankAccount jeff("Jeff Teague", 12344, "Checking", 500.00, 0.05);

   cout << "Acct Type: "
        << jeff.getAcctType()
        << endl
        << "Balance: $"
        << jeff.getBalance()
        << endl;


   return 0;
}// end main

