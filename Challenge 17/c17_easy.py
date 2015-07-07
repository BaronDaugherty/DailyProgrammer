'''
    Daily Programmer Challenge 17 : Easy
    @author:    Baron Daugherty
    @date:      2015-06-23
    @desc:      write an application which will print a triangle of stars of
                user-specified height, with each line having twice as many stars
                as the last. sample output:
                @
                @@
                @@@@
'''

#main method drives the program
def main():
    #get the number of lines
    lines = int(input("How many lines? "))
    mult = 1

    #for each line, print the @ a number of times by some multiplier
    #increment the multiplier x2 for each successive line
    for i in range(1, lines+1):
        print("@" * mult)
        mult *= 2

#start the program
main()
