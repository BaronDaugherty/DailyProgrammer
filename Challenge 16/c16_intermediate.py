'''
    Daily Programmer Challenge 16 : Intermediate
    @author:    Baron Daugherty
    @date:      2015-06-23
    @desc:      Your task is to write a program that simulates a game of craps.

    My crappy craps simulator!
'''

#need random module for die rolls
import random

#main method drives the program
def main():
    #number of rolls, wins/craps for come out
    rolls = 1
    wins = [7, 11]
    crap = [2, 3, 12]

    #roll the come out
    die_roll = roll()

    #check die for win/loss, output if necessary
    if die_roll in wins:
        print("%d wins on the come out!" %die_roll)
    elif die_roll in crap:
        print("%d craps out on the come out!" %die_roll)
    else:
        #set a point and loop to roll for it until win/loss
        print("%d is your point!" %die_roll)
        point = die_roll
        die_roll = 0
        while die_roll != point:
            die_roll = roll()
            rolls += 1
            if die_roll == 7:
                print("%d craps out on the pass!" %die_roll)
                break
            else:
                print("Rolled %d, trying for %d" %(die_roll, point))
        if die_roll == point:
            print("%d wins on the pass!" %die_roll)

        #output total rolls
        print("Total of %d rolls" %rolls)

#roll rolls the bones!
def roll():
    #seed the number generator
    random.seed()

    #deliver us a sum
    return random.randint(1, 6) + random.randint(1, 6)

#start the program
main()
