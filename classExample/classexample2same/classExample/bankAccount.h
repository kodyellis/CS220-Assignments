// filename -- bankAccount.h
// This file contains the definition for the BankAccount class

// header files
#include <string>
using namespace std;

class BankAccount
{
   private:
      string customerName;
      int acctNumber;
      string acctType;
      double balance;
      double interestRate;

   public:
      BankAccount();       // Constructor
      // set value constructor
      BankAccount(string new_name, int new_acctNum, string new_acctType, double new_balance, double new_intRate);
      string getCustomerName();
      int getAcctNumber();
      string getAcctType();
      double getBalance();
      double getInterestRate();
      void withdrawFunds(double);
      void depositFunds(double);
};
