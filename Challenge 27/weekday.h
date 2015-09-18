/*
	Daily Programmer Challenge 27 : Intermediate
	@author:	Baron Daugherty
	@date:		2015-09-18
	@desc:		This header provides the function to calculate what day of
				the week a particular day is for a given year.
				This is all lifted from my submission for challenge 11 easy.
				Reuse, reuse, reuse.
*/
#pragma once

/* FUNCTION PROTOTYPES */
bool is_leap_year(int year);
int num_of_years(int year, int month, int day);
int num_of_leap_years(int year);
int num_of_days(int years, int leap_years,
	int year, int month, int day);
int day_of_week(int days);

/* FUNCTIONS */
bool is_leap_year(int year)
//tell us if a year is a leap year
{
	//this is a general algorithm for leap years... return yes or no
	if (((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0))
		return true;
	else
		return false;
}	//END is_leap_year

int num_of_years(int year, int month, int day)
//gives us the number of whole years since 1900
{
	return year - 1900;
}	//END num_of_years

int num_of_leap_years(int year)
//gives us the number of leap years since 1900
{
	//some variables
	int total = 0;
	int check_year = 1900;

	//check each year 1900 through the number of years given
	for (check_year; check_year < year; check_year++)
	{
		if (is_leap_year(check_year))
			total += 1;
	}

	//return the total number of leap years
	return total;
}	//END num_of_leap_years

int num_of_days(int years, int leap_years,
	int year, int month, int day)
	//gives us the total number of days since 1/1/1900 for the given date
{
	//set up the number of days in a year / months
	const int DAYS_IN_YEAR = 365;
	int days_in_month[12] = { 31, is_leap_year(year) ? 29 : 28, 31, 30, 31,
		30, 31, 31, 30, 31, 30 , 31 };

	//get the initial days based on whole years
	int days = 0;
	days += years * DAYS_IN_YEAR;
	days += leap_years;

	//add days for each month that's passed
	for (int i = 0; i < (month - 1); i++)
	{
		days += days_in_month[i];
	}

	//return the days plus the remaining days up to present
	return days + day;
}	//END num_of_days

int day_of_week(int days)
//give us the day of week!
{
	return (days - (int(days / 7) * 7));
}	//END day_of_week

int calculate(int year, int month, int day)
{
	//do a bunch of the calculations
	int years = num_of_years(year, month, day);
	int leap_years = num_of_leap_years(year);
	int days = num_of_days(years, leap_years, year, month, day);

	return day_of_week(days);
}	//END calculate