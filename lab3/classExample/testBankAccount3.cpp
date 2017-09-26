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
   BankAccount jeff("Jeff Teague", 12344, "Checking", 1879.00, 0.05);
   BankAccount kia("Kia Brown", 3456, "Savings", 2345.67, 0.065);

   cout << "Acct Type: "
        << jeff.getAcctType()
        << endl
        << "Balance: $"
        << jeff.getBalance()
        << endl
        << "Name: "
        << jeff.getCustomerName()
        << endl;

   // deposite $250 to jeff's account
   jeff.withdrawFunds(250.00);

   // update balance
   jeff.updateBalance();

   // write the statement to display jeff's balance
   cout << "Balance after widthdraw $"
        << jeff.getBalance() << endl;

   cout << "*******************" << endl;
   cout << endl;
   cout << "Acct Type: "
        << kia.getAcctType()
        << endl
        << "Balance: $"
        << kia.getBalance()
        << endl
        << "Name: "
        << kia.getCustomerName()
        << endl;

   // deposite $550 to kia''s account
   kia.withdrawFunds(550.00);

   // write the statement to display kia's balance
   cout << "Balance after widthdraw a $"
        << kia.getBalance() << endl;

   // update balance
   kia.updateBalance();

   // write the statement to display kia's balance
   cout << "Balance after widthdraw and update $"
        << kia.getBalance() << endl;

   return 0;
}// end main

