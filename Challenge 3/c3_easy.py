#Daily Programmer Challenge 3 : Easy
#@author:   Baron Daugherty
#@date:     2015-06-14
#@desc:     This program allows the user to encode some text via a Caesar Cipher
#           of a user-defined shift. The shift can be + (to the left) or - (to
#           the right) but doesn't handle shifts greater than 25 spaces (no
#           "wrap around" on shifting)

#main method drives the program... gather input and call other methods
def main():
    #gather the shift number and text to encode
    shift = int(input("Number of spaces to shift? "))
    text = input("Text to encode: ").lower()

    #get the cipher
    cipher = generate_cipher(shift)

    #output the encoded text
    print(encode(text, cipher))

#generate cipher returns a list, index 0 is the standard english 26-letter
#alphabet, index 1 is the shifted cipher alphabet
def generate_cipher(shift):
    #cretae a list and add the english alphabet to it
    alphabet = []
    alphabet.append("abcdefghijklmnopqrstuvwxyz")

    #split the alphabet into 3 parts (the middle part is the character we split
    #on and subsequently the first letter of the new alphabet
    shifted = alphabet[0].partition(alphabet[0][shift])

    #turn the tuple alphabet into one string and add it to the alphabet list
    shifted = ''.join((shifted[1], shifted[2], shifted[0]))
    alphabet.append(shifted)

    #return the list
    return alphabet

#encode turns the plaintext into ciphertext
def encode(text, cipher):
    #a list for our encoded text
    encoded = []

    #for all alpha characters, add their cipher equivalent to the list
    for letter in text:
        if letter.isalpha():
            encoded.append(cipher[1][cipher[0].index(letter)])
        else:
            encoded.append(letter)

    #return the ciphered text as one string
    return ''.join(encoded)
            
#start the program
main()
