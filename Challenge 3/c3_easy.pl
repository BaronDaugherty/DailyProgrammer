#!/usr/bin/perl
#Daily Programmer Challenge 3 - Easy
#@author: Baron Daugherty
#@desc: Implementation of a ROT13 cipher

use warnings;
use strict;

my $text;
#hash table maps individual characters to their corresponding character 13 places up the alphabet
#we could do fancy chr() and ord() magic, but this table allows us to just be explicit
my %cipher = ('a'=>'m', 'b'=>'n', 'c'=>'o', 'd'=>'p', 'e'=>'q', 'f'=>'r', 'g'=>'s',
              'h'=>'t', 'i'=>'u', 'j'=>'v', 'k'=>'w', 'l'=>'x', 'm'=>'y', 'n'=>'z',
              'o'=>'a', 'p'=>'b', 'q'=>'c', 'r'=>'d', 's'=>'e', 't'=>'f', 'u'=>'g',
              'v'=>'h', 'w'=>'i', 'x'=>'j', 'y'=>'k', 'z'=>'l');

#prompt for and collect input, ignore case
print("Enter some text to encrypt: ");
chomp($text = lc(<>));

#loop through the characters in the input and output as appropriate
foreach my $letter (split(//,$text)){
    #if the character is not in the hash table, print out the character as is
    if (not exists $cipher{$letter}) {
        print($letter);
    }
    else{
        #otherwise, print the appropriate value for the key
        print($cipher{$letter});
    }
}  #END loop