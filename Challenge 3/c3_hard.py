#Daily Programmer Challenge 3 : Hard
#@author:   Baron Daugherty
#@date:     2015-06-14
#@desc:     We are given a short list of scrambled words and a long list of not
#           scrambled words. The goal is to "unscramble" our scrambled words
#           using the wordlist.
#           My approach has one potentially critical flaw, described at the end
#           of this source document.

#main method drives the program
def main():
    #our list of scrambled words
    scrambled = ['mkeart', 'sleewa', 'edcudls', 'iragoge',
                 'usrlsle', 'nalraoci', 'nsdeuto', 'amrhat',
                 'inknsy', 'iferkna']

    #generate a list of words
    wordlist = get_wordlist("C:\\users\\bdaugherty\\documents\\", "wordlist.txt", 'r')

    #generate a dictionary of words keyed by letter
    dictionary = create_dictionary(wordlist)

    #create an empty list and populate it with solutions
    solutions = []
    for word in scrambled:
        solutions.append(analyze(word, dictionary))

    #print the results
    for i in range(0, len(scrambled)):
        print(str(scrambled[i]) + " : " + str(solutions[i]))

#get_wordlist reads our file of words and creates a list we can operate on
def get_wordlist(path, file, mode):
    #open the file in read only mode
    word_list = open(path+file, mode)

    #create a list then populate it with all the individual words we have
    words = []
    for line in word_list:
        words.append(line.rstrip('\n'))

    word_list.close()
    #return the list of words
    return words

#create_dictionary creates a dictionary keyed on an immutable set of each
#words letters
def create_dictionary(wordlist):
    #empty dictionary
    dictionary = {}

    #go through all words and add to the dictionary
    #key = set of all letters, value = the word itself
    for word in wordlist:
        dictionary[frozenset(word)] = word

    #return the dictionary
    return dictionary

#analyze checks our scrambled words against the dictionary
#and returns the solution
def analyze(word, dictionary):
    #since sets are unique, if the scrambled word's set is in the dictionary
    #then the associated value is the word we're looking for
    if frozenset(word) in dictionary:
        return dictionary[frozenset(word)]
    else:
        return "Not found"

#start the program
main()

### The Problem With This Approach... ###
#   A set in python is an unordered collection of items with no repetition.
#   Since many different words can contain all the same letters (i.e. mood and
#   doom) those words would have the same set. A dictionary's keys must be
#   unique. You should see the problem now and we can prove it is a problem by
#   running print(str(len(wordlist))) and print(str(len(dictionary.keys()))) at
#   the end of our program.
#   Doing this we find that there are 1264 entries in the wordlist but only 1209
#   keys in the dictionary and only one value per key. This means words with
#   the same set of letters get dropped and it happened 55 times in this
#   instance. But this is fixable (of course)!
#   Dictionary keys can have more than one value! This program can be modified
#   to give us lists of possible words that share the same letter set
