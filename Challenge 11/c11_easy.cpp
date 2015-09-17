/*
	Daily Programmer Challenge 11 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-16
	@desc:		The program should take three arguments: a day, a month, a year
                It will then compute the day of the week that date will fall on.
	@note:		Unlike my python and perl submissions, here I have actually
				constructed and implemented an algorithm to calculate the
				day of the week rather than use existing libraries.
*/

/* includes & namespaces */
#include<iostream>
#include<string>;
using namespace std;

/* funtion prototypes */
bool is_leap_year(uint16_t year);
uint16_t num_of_years(uint16_t year, uint16_t month, uint16_t day);
uint16_t num_of_leap_years(uint16_t years);
uint16_t num_of_days(uint16_t years, uint16_t leap_years,
	uint16_t year, uint16_t month, uint16_t day);
uint16_t day_of_week(uint16_t days);
void calculate(uint16_t year, uint16_t month, uint16_t day);

int main()
{
	//variables for the date
	uint16_t year;
	uint16_t month;
	uint16_t day;
	
	//get the date to check
	cout << "Year(>= 1900): ";
	cin >> year;

	cout << "Month[1-12]: ";
	cin >> month;

	cout << "Day[1-]: ";
	cin >> day;

	//do the math
	calculate(year, month, day);

	//hunky-dory
	system("pause");
	return 0;
}	//END main

bool is_leap_year(uint16_t year)
//tell us if a year is a leap year
{
	//this is a general algorithm for leap years... return yes or no
	if (((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0))
		return true;
	else
		return false;
}	//END is_leap_year

uint16_t num_of_years(uint16_t year, uint16_t month, uint16_t day)
//gives us the number of whole years since 1900
{
	return year - 1900;
}	//END num_of_years

uint16_t num_of_leap_years(uint16_t year)
//gives us the number of leap years since 1900
{
	//some variables
	uint16_t total = 0;
	uint16_t check_year = 1900;

	//check each year 1900 through the number of years given
	for (check_year; check_year < year; check_year++)
	{
		if(is_leap_year(check_year))
			total += 1;
	}

	//return the total number of leap years
	return total;
}	//END num_of_leap_years

uint16_t num_of_days(uint16_t years, uint16_t leap_years, 
	uint16_t year, uint16_t month, uint16_t day)
//gives us the total number of days since 1/1/1900 for the given date
{
	//set up the number of days in a year / months
	const int DAYS_IN_YEAR = 365;
	uint16_t days_in_month[12] = {31, is_leap_year(year) ? 29:28, 31, 30, 31, 
									30, 31, 31, 30, 31, 30 , 31};
	
	//get the initial days based on whole years
	uint16_t days = 0;
	days += years * DAYS_IN_YEAR;
	days += leap_years;

	//add days for each month that's passed
	for (int i = 0; i < (month-1); i++)
	{
		days += days_in_month[i];
	}

	//return the days plus the remaining days up to present
	return days + day;
}	//END num_of_days

uint16_t day_of_week(uint16_t days)
//give us the day of week!
{
	return (days - (uint16_t(days / 7) * 7));
}	//END day_of_week

void calculate(uint16_t year, uint16_t month, uint16_t day)
//run all the calculations for us
{
	//variable for the day
	string days_of_week[7] = {	"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
		"THURSDAY", "FRIDAY", "SATURDAY" };

	//do a bunch of the calculations
	uint16_t years = num_of_years(year, month, day);
	uint16_t leap_years = num_of_leap_years(year);
	uint16_t days = num_of_days(years, leap_years, year, month, day);

	//output, calls the day_of_week function to get the answer
	cout << "\n" << year << "-" << month << "-" << day
		<< " is a " << days_of_week[day_of_week(days)] << "\n\n";
}	//END calculate