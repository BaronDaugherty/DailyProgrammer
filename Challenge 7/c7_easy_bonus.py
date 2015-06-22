#Daily Programmer Challenge 7 : Easy (BONUS)
#@author:   Baron Daugherty
#@date:     2015-06-15
#@desc:     A bonus extension to challenge 7 easy that translates a string of
#           english text into morse code

import winsound

#main method drives the program
def main():
    #gather the text to translate
    text = input("Please enter the text to translate: ").lower()

    #output the translation
    morse = translate(text)
    print(morse)

#translate method translates the english text to morse code, letters have a
#space between them and words are delimited by space-slash-space in accordance
#to the original challenge spec
def translate(text):
    #empty list for translated characters
    translated = []

    #dictionary is keyed on the english letter with morse code dot-dash values
    code = {'a':'.-', 'b':'-...', 'c':'-.-.', 'd':'-..', 'e':'.', 'f':'..-.',
            'g':'--.', 'h':'....', 'i':'..', 'j':'.---', 'k':'-.-', 'l':'.-..',
            'm':'--', 'n':'-.', 'o':'---', 'p':'.--.', 'q':'--.-', 'r':'.-.',
            's':'...', 't':'-', 'u':'..-', 'v':'...-', 'w':'.--', 'x':'-..-',
            'y':'-.--', 'z':'--..'}

    #go through each word and each letter and translate into morse code
    #add the letter translations to the list and add spaces and slashes
    #where appropriate
    for word in text.split(' '):
        for letter in word:
            translated.append(code[letter])
            translated.append(' ')
        translated.append('/ ')

    #return translated as a single string
    #(truncates the unnecessary ' / ' at the end)
    return ''.join(translated[:-2])

#start the program
main()
