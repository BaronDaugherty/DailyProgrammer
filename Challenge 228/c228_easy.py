'''
    Daily Programmer Challenge 228 : Easy
    @author:    Baron Daugherty
    @date:      2015-09-27
    @desc:      A handful of words have their letters in alphabetical order,
                that is nowhere in the word do you change direction in the
                word if you were to scan along the English alphabet. An example
                is the word "almost," which has its letters in alphabetical
                order.
                Your challenge today is to write a program that can determine
                if the letters in a word are in alphabetical order.
'''

letters = [str(x) for x in input(">>")]
count = 0
alphabetical = True

while count < (len(letters) -1):
    if not letters[count] <= letters[count+1]:
        alphabetical = False
        break
    count += 1

if alphabetical:
    print("Alphabetical")
else:
    print("Not alphabetical")
