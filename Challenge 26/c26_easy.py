'''
    Daily Programmer Challenge 26 : Easy
    @author:    Baron Daugherty
    @date:      2017-07-20
    @desc:      you have a string "ddaaiillyypprrooggrraammeerr". We want to
                remove all the consecutive duplicates and put them in a separate
                string, which yields two separate instances of the string
                "dailyprogramer".
                Use this list for testing:
                input: "balloons"
                output: "balons" "lo"
                input: "ddaaiillyypprrooggrraammeerr"
                output: "dailyprogramer" "dailyprogramer"
                input: "aabbccddeded"
                output: "abcdeded" "abcd"
                input: "flabby aaples"
                output: "flaby aples" "bap"
'''
string = [str(x) for x in input("Enter a string: ")]
dups = []
index = 0

while index < (len(string)-1):
    if string[index+1] == string[index]:
        dups.append(string[index])
        string.pop(index)
    index += 1

print(''.join(string))
print(''.join(dups))
