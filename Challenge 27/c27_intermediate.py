'''
    Daily Programmer Challenge 27 : Intermediate
    @author:    Baron Daugherty
    @date:      2015-07-20
    @desc:      Write a program that accepts a year as input and outputs what
                day St. Patrick's day falls on.
                Bonus: Print out the number of times St. Patrick's day falls
                on a Saturday for this century.
'''
import calendar

#get the year, St. Patrick's day is 3/17
year = int(input("Enter a year: "))
DAY = 17
MONTH = 3
#get the day of week and output
day_of_week = calendar.day_name[calendar.weekday(year, MONTH, DAY)]
print("St. Patrick's day is on a " +day_of_week)


'''
Bonus section
'''
#calculate the century and date ranges
def get_years(year):
    century = 0
    if year % 100 == 0:
        century = int(year/100)
    else:
        century = int(year/100) +1
    return [(century*100)-99, century*100, century]

#calculate the number of Saturday St. Patty's days for the given century
counter = 0
years = get_years(year)
for y in range(years[0], years[1] +1):
    if calendar.weekday(y, MONTH, DAY) == 5:
        counter += 1

print("St. Patrick's day falls on a Saturday " +str(counter) +" times in the " +str(years[2]) +" century.")
