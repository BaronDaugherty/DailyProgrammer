'''
    Daily Programmer Challenge 226 : Easy
    @author:    Baron Daugherty
    @date:      2015-09-20
    @desc:      For today's challenge, you will get a list of fractions
                which you will add together and produce the resulting fraction,
                reduced as far as possible.
'''
# main drives the program
def main():
    # list of fractions and counter
    fracs = []
    num = 1

    # get number of fractions to add (2+)
    while num < 2:
        num = int(input("How many fractions to add? "))

    # gather the fractions in a list
    for x in range(0, num):
        fracs.append([int(y) for y in input(">>").split("/")])

    # while we have more than one fraction, add two together
    while len(fracs) > 1:
        fracs.append(new_frac(fracs.pop(), fracs.pop()))

    # reduce (if possible)
    fracs = reduce(fracs[0][0], fracs[0][1])
    print(str(fracs[0]) + "/" + str(fracs[1]))

# generate a new fraction from two provided
def new_frac(a, b):
    # get the lowest common denominator
    denom = lcd(a[1], b[1])

    # calculate the two new numerators
    n1 = int(a[0] * (denom / a[1]))
    n2 = int(b[0] * (denom / b[1]))

    # add them...
    numer = n1 + n2

    # return the result
    return [numer, denom]
    
#find the lowest common denominator
def lcd(a, b):
    # a counter/multiplier for later...
    c = d = 2

    if a < b:
        if b % a == 0:
            return b
        while True:
            if (a * c)  < (b * d):
                c += 1
            elif (a * c) > (b * d):
                c = d
                d += 1
            else:
                return (a * c)
    else:
        if a % b == 0:
            return a
        while True:
            if (a * d)  > (b * c):
                c += 1
            elif (a * d) < (b * c):
                c = d
                d += 1
            else:
                return (b * c)

# reduce a fraction
def reduce(a, b):
    # a multiplier
    c = 2

    if a < b:
        while True:
            if c >= a:
                break
            elif a % c == 0 and b % c == 0:
                a = a / c
                b = b / c
            else:
                c += 1
        return [int(a), int(b)]
    else:
        while True:
            if c >= b:
                break
            elif b % c == 0 and a % c == 0:
                b = b / c
                a = a / c
            else:
                c += 1
        return [int(a), int(b)]
    
main()
