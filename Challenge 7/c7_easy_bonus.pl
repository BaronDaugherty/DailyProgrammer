#!/usr/bin/perl
#   Daily Programmer Challenge 7 : Easy (Bonus)
#   @author:    Baron Daugherty
#   @date:      2015-06-28
#   @desc:      Write a program that can translate english
#               phrases into morse code
use warnings;
use strict;

#hash as an english to morse table
my %alpha = ('a'=>'.-', 'b'=>'-...', 'c'=>'-.-.', 'd'=>'-..', 'e'=>'.', 'f'=>'..-.',
            'g'=>'--.', 'h'=>'....', 'i'=>'..', 'j'=>'.---', 'k'=>'-.-', 'l'=>'.-..',
            'm'=>'--', 'n'=>'-.', 'o'=>'---', 'p'=>'.--.', 'q'=>'--.-', 'r'=>'.-.',
            's'=>'...', 't'=>'-', 'u'=>'..-', 'v'=>'...-', 'w'=>'.--', 'x'=>'-..-',
            'y'=>'-.--', 'z'=>'--..');

#list for translated characters
my @translated;

#gather the text to encode
print "Please enter the text to encode: ";
chomp(my $text = lc(<>));

#get each word, then each letter in the word and add the hash value to the list
foreach my $word (split ' ', $text){
    foreach my $letter (split //, $word){
        push(@translated, $alpha{$letter});
        push(@translated, ' ');
    }
    push(@translated, '/ ');
}

#print the list as one string
print("\n", join('', @translated));