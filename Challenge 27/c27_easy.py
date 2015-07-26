'''
    Daily Programmer Challenge 27 : Easy
    @author:    Baron Daugherty
    @date:      2015-07-20
    @desc:      Write a program that accepts a year as input and outputs the
                century the year belongs in (e.g. 18th century's year ranges are
                1701-1800) and whether or not the year is a leapyear.
'''
from datetime import date

year = int(input("Please enter a year A.D.: "))
d = date(year, 1, 1)

print("Year: " +str(year))
if year % 100 == 0:
    print(str(int(year/100)) + " Century")
else:
    print(str(int(year/100 +1)) +" Century")

if year % 4 != 0:
    print(str(year) +" is not a leap year.")
elif year % 100 != 0:
    print(str(year) +" is not a leap year.")
elif year % 400 != 0:
    print(str(year) +" is not a leap year.")
else:
    print(str(year) +" is a leap year")
