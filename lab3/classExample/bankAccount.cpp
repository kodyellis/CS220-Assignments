/*
   This file contains the definition of the member functions
   of BankAccount class
*/

// header files
#include <iostream>
#include <string>
#include <cstring>
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

string BankAccount::getAcctType()
{
   return acctType;
}// end getCustomerName

double BankAccount::getBalance()
{
   return balance;
}// end getAcctNumber

double BankAccount::getInterestRate()
{
   return interestRate;
}// end getAcctNumber

void BankAccount::withdrawFunds(double amount)
// pre condition: an object has been instantiated and the amount is the appropriate data type
// post condition: the balance of the object will have the balance reduced by the amount
{
   cout << "withdraw funds is called" << endl;
   balance -= amount;
} // end withdrawFunds

void BankAccount::depositFunds(double amount)
// pre condition: an object has been instantiated and the amount is the appropriate data type
// post condition: the balance of the object will have the balance incremented by the amount
{
   cout << "depositFunds is under construction" << endl;
   balance += amount;
}// end depositFunds

void BankAccount::updateBalance()
// pre condition: an object has been instantiated
// post condition: if the account type of the object is "Savings" the interest rate is used to calculate the interest amount and it is added to the balance
{
   cout << "updateBalance is called" << endl;
   if (strcmp(acctType,"Savings") == 0)
         balance += (balance * interestRate);
   else
      cout << "Account type is "
           << acctType << endl;
}// end updateBalance
