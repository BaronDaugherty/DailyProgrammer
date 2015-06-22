#Daily Programmer Challenge 7 : Easy
#@author:   Baron Daugherty
#@date:     2015-06-15
#@desc:     Translates a string of morse code into english.
#           Words are delimited by a space-slash-space and letters by a space.
#           Only includes the 26-letter english alphabet, no non-alpha characters

#main method drive the program
def main():
    #ask for the morse code string (force lowercase)
    morse = input("Please enter the morse to translate: ").lower()

    #output the translation
    print(translate(morse))

#translate method converts the morse code string into english letters
def translate(morse):
    #empty list for converted letters
    translated = []
    #dictionary, keyed on morse code, english letter values
    code = {'.-':'a', '-...':'b', '-.-.':'c', '-..':'d', '.':'e', '..-.':'f',
            '--.':'g', '....':'h', '..':'i', '.---':'j', '-.-':'k', '.-..':'l',
            '--':'m', '-.':'n', '---':'o', '.--.':'p', '--.-':'q', '.-.':'r',
            '...':'s', '-':'t', '..-':'u', '...-':'v', '.--':'w', '-..-':'x',
            '-.--':'y', '--..':'z'}

    #loop through the words and letters within
    #add translated code to the list
    for word in morse.split(' / '):
        for letter in word.split(' '):
            translated.append(code[letter])
        translated.append(' ')

    #return the translation as a single string
    return ''.join(translated)

#start the program
main()
