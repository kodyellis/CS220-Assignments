/*
   This file contains the definition of the member functions
   of BankAccount class
*/

// header files
#include <iostream>
#include <string>
#include <cstring>
#include "Fan.h" // includes code from that


using namespace std;

BankAccount::BankAccount() //calling constructor  //think of this as a reset function to ALL variables
{
   customerName = "unknown";
   acctNumber = 0;
   acctType = "unknown";
   balance = 0;
   interestRate = 0;
   cout << "Default constructor is called" << endl;
} // default constructor

BankAccount::BankAccount(string new_name, int new_acctNumber, string new_acctType, double new_balance, double new_interestRate)
{              //calling constructor with value
   customerName = new_name;         //assignaing new var names to parameters
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





===================================================
class Fan
{
	private:
		bool is_on;
		bool timer_on;
		int speed;
		int duration;

	public:
		Fan();  //default contructor
		void stopPressed();
		/*After this function is called, the fan is turned off, the 
		timer is turned off if it is on, both speed and duration are set to zero.*/
		{
			if (is_on == true)
				is_on = false;
			if (timer_one == true)
				timer_one = false;
			speed = 0;
			duration = 0;
		}
		void highPressed();
		{
			if (is_on == true)
				speed == high;
		}
		void moderatePressed();
		{
			if (is_on== true)
				speed == moderate;
		}
		void lowPressed();
		{
			if (is_on == true)
				speed == low;
		}
		/*highPressed, moderatePressed and lowPressed functions have no 
		precondition. The fan is changed to the desired speed depending
		on which of these functions is called when the fan is on; 
		otherwise, calling any of these functions has no effect.*/

		void timerPressed();
		{
			if (is_on == true)
				if (timer_on == true)
					timer_on == false;
				else if (timer_on ==false)
					timer_on==true;
		}
		/*timerPressed function has no precondition. If the fan is 
		on and it is called, the timer changes from ON to OFF if it is
		On; it changes from OFF to ON if it is OFF. If the fan is off,
		 calling this function has no effect.*/
		  
		
		void sixtyPressed();
		{
			if (timer_on == true) && (is_on == true)
				duration == 60;
		}
		void thirtyPressed();
		{
			if (timer_on == true) && (is_on == true)
				duration == 30;
		}
		void fifteenPressed();
		{
			if (timer_on == true) && (is_on == true)
				duration == 15;
		}
		/*sixtyPressed, thirtyPressed and fifteenPressed functions have 
		no precondition. If both the fan and the timer are on, the 
		duration of the timer is set to one of those values depending 
		on which function is invoked. Otherwise, no duration is set.*/



		bool getOnState();
		/*getOnState function has no precondition and returns the state 
		 of the fan, true (is_on is true) or false (is_on is false).*/
		{
			return is_on;
		}
		 
		 
		bool getTimeState();
		/*getTimerState function has no precondition and returns the 
		state of the timer, true (timer_on is true) or 
		false (timer_on is false).*/
		{
			return timer_on;
		}
		
		
		int getSpeed();
		/*getSpeed function has no precondition.
		It returns the speed of the fan when it is called*/
		{
			return speed;
		}
		
		
		int getDuration();
		/*getDuration function has no precondition. It returns the duration set on the timer*/
		{
			return duration;
		}
		
		void display();
		{
			cout << "Fan: (" << is_on << ")" << endl
			<< "Speed: (" << speed << ")" << endl
			<< "Time: (" << timer_on << ")" << endl
			<< "Duration: (" << duration << ")" << endl;
		}
/*The display function has no precondition. It displays the following when it is called.
Fan: (On or Off) 
Speed: (High, Moderate, Low or Off) 
Time: (On or Off)
Duration: (60, 30, 15 or nothing)
*/
}; // class Fan
#endif



/*
top row
high moderate low stop

bottom row
timer 60 30 15

when fan == off, timer == off

Calling timer
when fan == true
	if timer == false
		timer==true
	if timer ==true
		timer==false

timer(turns timer on)
timer(turns timer off)

Calling 60(sets timer to 60 seconds, after seconds == 0 	fan turns off)
timer = 60
timer--
if timer == 0
	fan = false // turns fan off
	
Calling 20(sets timer to 20 seconds, after seconds == 0 	fan turns off)
timer = 20
timer--
if timer == 0
	fan = false // turns fan off
	
Calling 15(sets timer to 15 seconds, after seconds == 0 	fan turns off
timer = 15
timer--
if timer == 0
	fan = false // turns fan off


if timer off 
60 30 15 have no effect

if fan off
(timer 60 30 15 have no effect)
*/
