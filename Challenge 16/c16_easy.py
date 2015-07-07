'''
    Daily Programmer Challenge 16 : Easy
    @author:    Baron Daugherty
    @date:      2015-06-23
    @desc:      Write a function that takes two strings and removes from the
                first string any character that appears in the second string.
                For instance, if the first string is "Daily Programmer" and the
                second string is "aeiou " the result is "DlyPrgrmmr".
'''

#main method drives the program
def main():
    #gather two strings
    string1 = input("Enter a string: ")
    string2 = input("Enter another: ")

    #output the result
    print(destring(string1, string2))

#destring method removes all letters of the second string from the first
def destring(s1, s2):
    #make string 1 a list
    s1 = list(s1)

    #remove all letters in the second string from the list
    for char in s2:
        while char in s1:
            s1.remove(char)

    #return the leftover list as a string
    return ''.join(s1)

#start the program
main()
