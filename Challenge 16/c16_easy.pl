#!/usr/bin/perl
#   Daily Programmer Challenge 16 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-07-10
#   @desc:      Write a function that takes two strings and removes from the
#               first string any character that appears in the second string.
#               For instance, if the first string is "Daily Programmer" and the
#               second string is "aeiou " the result is "DlyPrgrmmr".
use warnings;
use strict;

#gather the two strings
print "Type a string: ";
chomp(my $line1 = <>);

print "Type another: ";
chomp(my $line2 = <>);

#remove all matching characters
foreach my $char (split(//,$line2)){
    $line1 =~ s/$char//gi;
}

#output
print $line1, "\n";