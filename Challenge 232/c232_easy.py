'''
    Daily Programmer Challenge 232 : Easy
    @author:    Baron Daugherty
    @date:      2015-09-25
    @desc:      Today, you are going to write a program that detects whether or
                not a particular input is a valid palindrome.
                On the first line of the input, you will receive a number
                specifying how many lines of input to read. After that, the
                input consists of some number of lines of text that you will
                read and determine whether or not it is a palindrome or not.
                The only important factor in validating palindromes is whether
                or not a sequence of letters is the same backwards and forwards.
                All other types of characters (spaces, punctuation, newlines,
                etc.) should be ignored, and whether a character is lower-case
                or upper-case is irrelevant.                
'''

#get the number of lines, then set up some other variables
num_lines = int(input("Number of lines? "))
lines = []
ords = []
counter = 0
palindrome = True

#fill the list of ordinal values
for i in range(65, 91):
    ords.append(i)
for i in range(97, 123):
    ords.append(i)

#fill the list of lines
while(counter < num_lines):
    lines.append(input(">>"))
    counter += 1

#turn it into one string
whole = ''.join(lines)

#remove non-alpha characters
for i in whole:
    if ord(i) not in ords:
        whole = ''.join(whole.split(i))

#reset counters, get string length
counter = 0
chars = len(whole)

#check, character by character
while(counter < chars):
    c1 = whole[counter].lower()
    c2 = whole[chars-(counter+1)].lower()
    if c1 != c2:
        palindrome = False
        break
    counter += 1

#output
if palindrome:
    print("Palindrome")
else:
    print("Not a palindrome")
