#make use of date objects
import datetime

#main method is the program
def main():
    #dictionary of weekdays, key is integer value 0 to 6
    weekdays = {0:'Monday', 1:'Tuesday', 2:'Wednesday', 3:'Thursday',
                4:'Friday', 5:'Saturday', 6:'Sunday'}

    #gather the date and split it into a list of integers
    date = [int(x) for x in input("Enter the date (YYYY MM DD): ").split(' ')]

    #create a datetime object
    date = datetime.date(date[0], date[1], date[2])

    #print day of the week based on integer returned from datetime weekday()
    #method (0 - 6)
    print(weekdays[date.weekday()] + ', ' +str(date))

#start the program
main()
