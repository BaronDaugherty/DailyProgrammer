'''
Daily Programmer Challenge 14 : Easy
@author:   Baron Daugherty
@date:     2015-06-21
@desc:     Input: some list of elements and a block size
           Output: the list with every block of elements reversed, starting
                   from the beginning of the list.
           Ex: 12, 24, 32, 44, 55, 66 -> 24, 12, 44, 32, 66, 55
               if the block size is 2
@notes:    This was the easy challenge, and is easier for some languages than
           others. Python actually makes this pretty easy but it requires some
           foreknowledge of Python's list comprehension and built-in functions.
           (Or, you know, reading the documentation like I had to do!)
           This was really fun but took more time than I'd normally like to admit :)
'''           

#main method drives the program
def main():
    #gather a list of elements, delimited by spaces
    elements = [int(x) for x in input("Please enter a list of numerical elements: ").split(' ')]

    #set an ititial block size and then loop asking for the block size until
    #the elements can be broken into even groups
    bs = 133
    while len(elements) % bs != 0:
        bs = int(input("Please enter a block size: "))

    #output the results
    print(reverse(elements, bs))

#reverse method reversed the given list of elements
def reverse(el, bs):
    #loop through the list, grabbing the appropriate sized chunks and use
    #the built in reversed() function to assign the new order to the list
    for x in range(0, len(el)-1, bs):
        el[x:bs+x] = reversed(el[x:bs+x])

    #return the new list        
    return el

#start the program
main()
