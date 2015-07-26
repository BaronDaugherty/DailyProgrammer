'''
    Daily Programmer Challenge 220 : Easy
    @author:    Baron Daugherty
    @date:      2015-07-18
    @desc:      In this challenge, we are going to take a sentence and mangle
                it up by sorting the letters in each word. So, for instance, if
                you take the word "hello" and sort the letters in it, you get
                "ehllo". If you take the two words "hello world", and sort the
                letters in each word, you get "ehllo dlorw".
'''
print(' '.join([''.join(sorted(y)) for y in input("Please enter a string: ").lower().split()]))
