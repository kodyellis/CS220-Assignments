#include <iostream>
#include <cstdlib>
#include "bankAccount.h"
using namespace std;

int main()
{
   BankAccount newStudent("Talaya Morrison", 7654, "Checking", 5600.65, 0.05);

   cout << "Customer Name: "
        << newStudent.getCustomerName()
        << endl
        << "Account Number: "
        << newStudent.getAcctNumber()
        << endl
        << "Balance: "
        << newStudent.getBalance()
        << endl
        << "Account Type: "
        << newStudent.getAcctType()
        << endl
        << "Interest Rate: "
        << newStudent.getInterestRate()
        << endl;

   return 0;
}
