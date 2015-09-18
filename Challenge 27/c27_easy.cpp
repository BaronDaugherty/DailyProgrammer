/*
	Daily Programmer Challenge 27 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-18
	@desc:		Input a year and output the century it is in.
				Also output if it is/is not a leap year.
*/

/* INCLUDES and NAMEPSACES */
#include<iostream>
using namespace std;

/* FUNCTIONS */
int main()
{
	//needed variables
	uint16_t year;
	uint16_t century;
	bool leap;

	//get the year
	cout << "Please enter a year A.D.: ";
	cin >> year;

	//calculate the century
	if (year % 100 == 0)
		century = year / 100;
	else
		century = (year / 100) + 1;

	//determine if leap year
	if (((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0))
		leap = true;
	else
		leap = false;

	//output
	cout << year << " is in the " << century << " century.\n";
	cout << "It" << (leap ? " is " : " is not ") << "a leap year.\n";

	//hunky-dory
	system("pause");
	return 0;
}	//END main