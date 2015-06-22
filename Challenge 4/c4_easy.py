#Daily Programmer Challenge 4 : Easy
#@author:   Baron Daugherty
#@date:     2015-06-14
#@desc:     Generates a random password of user-defined length from a list of
#           predefined ascii character values.

#need random module for random number generation
import random

#main method drives the program
def main():
    #minimum password length is 8, start with 0 for loop control
    MIN_LENGTH = 8
    length = 0

    #gather password length
    while length < MIN_LENGTH:
        length = int(input("Please enter the length of the password: "))

    #output the generated password
    print(generate_password(length))

#generate_password returns a password of user defined length
def generate_password(length):
    #seed the number generator, create an empty list, and create a list
    #of chr ordinal values
    random.seed()
    password = []
    valid_chars = [33, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
                   49, 50, 51, 52, 53, 54, 55, 56, 57, 63, 64, 65, 66, 67,
                   68, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
                   83, 84, 85, 86, 87, 88, 89, 90, 95, 97, 98, 99, 100,
                   101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
                   112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122]

    #until we reach the length, get a random value from the ordinal list
    #and add the character to the password list
    for i in range(0, length):
        ordinal = valid_chars[random.randint(0, len(valid_chars)-1)]
        password.append(chr(ordinal))

    #return a single string value for our password
    return ''.join(password)
    
#start the program
main()
