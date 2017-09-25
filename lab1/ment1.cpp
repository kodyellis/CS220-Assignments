#include <iostream>    // for input/output
using namespace std;
// ================= global data type declarations ====================
int countMultiple7(int, int);
int lower_bound;
int upper_bound;


// =================== function prototype =============================

int main()
{
	cout << "Input a number: ";
	cin >> upper_bound;
	cout << "Input a lower or equal number: ";
	cin >> lower_bound;
	
	countMultiple7(lower_bound, upper_bound);
	return 0;
}// end main

int countMultiple7(int lower_bound, int upper_bound)
{
	int rangeOfValues = upper_bound;
	int n = 0;
	int thisValue;
	int array1[upper_bound];

	while((rangeOfValues =! 0))
	{
		thisValue = rangeOfValues % 7;
		if (thisValue == 0);
		{
			array1[n] += thisValue;
			n +=1;
		}
		rangeOfValues -= 1;
	}
	
	cout << thisValue;
	return array1;
	
}
