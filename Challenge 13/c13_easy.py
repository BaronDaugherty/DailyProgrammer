#   Daily Programmer Challenge 13 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-06-20
#   @desc:      Find the number of the year for the given date.
#               For example, Jan 1st would be 1 and Dec 31st is 365

#need datetime module
from datetime import date

#main method drives the program
def main():
    #get the date as MM DD
    mmdd = [int(x) for x in input("Please enter a date (MM DD): ").split(' ')]

    #create a date object at year 1
    d = date(1, mmdd[0], mmdd[1])

    #print the ordinal value of the date
    print(d.toordinal())

#start the program
main()
