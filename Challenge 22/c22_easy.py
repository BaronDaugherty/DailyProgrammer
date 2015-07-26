'''
    Daily Programmer Challenge 22 : Easy
    @author:    Baron Daugherty
    @date:      2015-07-10
    @desc:      Write a program that will compare two lists and append
                any elements in the second list that don't exist in the first
'''

#main method drives the program
def main():
    #gather two lists
    list1 = input("Enter anything delimited by spaces: ").split(" ")
    list2 = input("Please do it again: ").split(" ")

    #add any items in 2 that aren't in 1
    list1 += [i for i in list2 if i not in list1]

    #output the list
    print(list1)

#start the show
main()
