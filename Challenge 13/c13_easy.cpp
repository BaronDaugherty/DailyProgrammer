/*
	Daily Programmer Challenge 13 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Find the number of the year for the given date
				i.e. 1/1/any year will be day 1; 2/1 will be day 32
*/

/* INCLUDES and NAMESPACES */
#include<iostream>
using namespace std;

/* FUNCTION PROTOTYPES */
uint16_t get_day(uint16_t year, uint16_t month, uint16_t day);
bool is_leap_year(uint16_t year);

/* FUNCTIONS */
int main()
//drives the program
{
	//variables for Y-M-D
	uint16_t year;
	uint16_t month;
	uint16_t day;

	//get the year, month, and day
	cout << "Year: ";
	cin >> year;

	cout << "Month: ";
	cin >> month;

	cout << "Day: ";
	cin >> day;

	//spit it out...
	cout << "\n" <<month << "-" << day << " is the " << get_day(year, month, day)
		<< " day of the year " << year << "\n\n";

	//hunky-dory
	system("pause");
	return 0;
}	//END main

bool is_leap_year(uint16_t year)
//tell us if a given year is a leap year
{
	//this is a general algorithm for leap years... return yes or no
	if (((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0))
		return true;
	else
		return false;
}	//END is leap year

uint16_t get_day(uint16_t year, uint16_t month, uint16_t day)
//calculate the day of the year for a given date
{
	//total and days in each month
	uint16_t days = 0;
	uint16_t days_in_month[12] = { 31, is_leap_year(year) ? 29 : 28, 31, 30, 31,
									30, 31, 31, 30, 31, 30 , 31 };

	//add days for whole months
	for (int i = 0; i < (month - 1); i++)
	{
		days += days_in_month[i];
	}

	//return days plus number to current
	return days + day;
}	//END get_day