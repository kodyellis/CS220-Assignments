#include <iostream>
#include <cstdlib>
#include "bankAccount.h"
using namespace std;

int main()
{
   BankAccount tuStudent;

   cout << "Customer Name: "
        << tuStudent.getCustomerName()
        << endl
        << "Account Number: "
        << tuStudent.getAcctNumber()
        << endl;

   return 0;
}
