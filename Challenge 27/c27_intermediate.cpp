/*
	Daily Programmer Challenge 27 : Intermediate
	@author:	Baron Daugherty
	@date:		2015-09-18
	@desc:		Write a program that accepts a year as input and outputs what
                day St. Patrick's day falls on.
                Bonus: Print out the number of times St. Patrick's day falls
                on a Saturday for this century.
*/
/* INCLUDES and NAMESPACES */
#include<iostream>
#include "weekday.h" //calculate function
#include<string>
using namespace std;

/* FUNCTIONS */
int main()
{
	//SPD is 3/17, year, and days of week 
	const uint16_t MONTH = 3;
	const uint16_t DAY = 17;
	uint16_t year;
	string days_of_week[7] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
		"THURSDAY", "FRIDAY", "SATURDAY" };

	//get the year (1900 is lowest acceptable in weekday.h)
	cout << "Please enter a year(>=1900): ";
	cin >> year;

	//output
	cout << days_of_week[calculate(year, MONTH, DAY)] << endl;

	//hunk-dory
	system("pause");
	return 0;
}	//END main