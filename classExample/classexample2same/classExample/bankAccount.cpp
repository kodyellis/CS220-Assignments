/*
   This file contains the definition of the member functions
   of BankAccount class
*/

// header files
#include <iostream>
#include <string>
#include "bankAccount.h"


using namespace std;

BankAccount::BankAccount()
{
   customerName = "unknown";
   acctNumber = 0;
   acctType = "unknown";
   balance = 0;
   interestRate = 0;
   cout << "Default constructor is called" << endl;
} // default constructor

BankAccount::BankAccount(string new_name, int new_acctNumber, string new_acctType, double new_balance, double new_interestRate)
{
   customerName = new_name;
   acctNumber = new_acctNumber;
   acctType = new_acctType;
   balance = new_balance;
   interestRate = new_interestRate;
   cout << "Set Value constructor is called" << endl;
} // set value constructor

string BankAccount::getCustomerName()
{
   return customerName;
}// end getCustomerName

int BankAccount::getAcctNumber()
{
   return acctNumber;
}// end getAcctNumber


