#!/usr/bin/perl
#   Daily Programmer Challenge 7 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-06-28
#   @desc:      Write a program that can translate morse code
#               A space and slash will be placed between words
use warnings;
use strict;

#hash as a morse to english table
my %morse = ('.-' => 'a', '-...' => 'b', '-.-.' => 'c', '-..' => 'd', '.' => 'e',
             '..-.' => 'f', '--.' => 'g', '....' => 'h', '..' => 'i', '---' => 'j',
             '-.-' => 'k', '.-..' => 'l', '--' => 'm', '-.' => 'n', '---' => 'o',
             '.--.' => 'p', '--.-' => 'q', '.-.' => 'r', '...' => 's', '-' => 't',
             '..-' => 'u', '...-' => 'v', '.--' => 'w', '-..-' => 'x', '-.--' => 'y',
             '--..' => 'z');

#list of translated characters
my @translated;

#gather the morse to decode
print "Please enter the morse to decode: ";
chomp(my $text = <>);

#get each word, then each letter in the word and add the hash value to the list
foreach my $word (split ' / ', $text){
    foreach my $letter (split ' ', $word){
        push(@translated, $morse{$letter});
    }
    push(@translated, ' ');
}

#print the list as one string
print("\n", join('', @translated));