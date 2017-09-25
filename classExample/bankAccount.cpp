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
   cout << "Default contructor is called" << endl;

} // default constructor


BankAccount::BankAccount(string new_name, int new acctNumber, 
string new_acctType, double new_balance, double new_interestRate)
{
   customerName = new_name;
   acctNumber = new_acctNumber;
   acctType = new_acctType;
   balance = new_balance;
   interestRate = new_interestRate;
   cout << "Set value constructor is called" << endl;

} //Set value constructor is called

string BankAccount:: getCustomerName()
{
	return customerName;
}//end getCustomerName


int BankAccount:: getAcctNumber()
{
	return acctNumber;
}//end getAcctNumber

