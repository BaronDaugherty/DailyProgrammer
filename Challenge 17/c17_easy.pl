#!/usr/bin/perl
#   Daily Programmer Challenge 17 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-07-10
#   @desc:      write an application which will print a triangle of stars of
#               user-specified height, with each line having twice as many stars
#               as the last. sample output:
#               @
#               @@
#               @@@@ 
use warnings;
use strict;

#multiplier starts at 1
my $mult = 1;

#gather the lines
print "Enter the number of lines: ";
chomp(my $lines = int(<>));

#print the '@' a number of times equal to multiplier for each line
for (my $i = 0; $i < $lines; $i++){
    print("@" x $mult, "\n");
    $mult *= 2;
}