#!/usr/bin/perl
#Daily Programmer Challenge 3 - Intermediate
#@author: Baron Daugherty
#@description: Implement an alphabetic substitution cipher
#here we use ROT13 + increment based on character position
use warnings;
use strict;

#setup some values for text capture and position tracking
my $text;
my $position = 0;
my @vals = (97..122);

#prompt and get input, ignore case
print("Please enter some text to encode: ");
chomp($text = lc(<>));
print("\n\n");

#loop over each letter and output accordingly... not super efficient but it works.
foreach my $letter (split(//, $text)){
    #get the ascii value of the letter and the array index it resides at
    my $val = ord($letter);
    my $index = 122 - $val;
    
    #if it's within a-z...
    if ($val >= 97 and $val <= 122) {
        #we need to rotate by a number equaling the remainder of (13+position)/26
        my $rotate = (13 + $position) % 26;
        #if the resultant index is out of bounds, find the difference by the number of elements
        if (($index + $rotate) > 25) {
            $index = ($index + $rotate) - 26;
        }
        #finally print the character
        print(chr($vals[$index]));
    }
    else{
        #if it wasn't in a-z, just print it
        print($letter);
    }
    #increment position as we move to the next letter
    $position++;
}  #END loop