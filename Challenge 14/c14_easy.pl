#!/usr/bin/perl
#   Daily Programmer Challenge 14 : Easy
#   @author:   Baron Daugherty
#   @date:     2015-07-06
#   @desc:     Input: some list of elements and a block size
#              Output: the list with every block of elements reversed, starting
#                      from the beginning of the list.
#              Ex: 12, 24, 32, 44, 55, 66 -> 24, 12, 44, 32, 66, 55
#                  if the block size is 2
#   @notes:    This was the easy challenge, and is easier for some languages than
#              others. Perl actually makes this pretty easy but it requires some
#              foreknowledge of Perl's list comprehension and built-in functions.
#              This was really fun but took more time than I'd normally like to admit :)
use warnings;
use strict;

#arbitray block size at first for loop control
my $block_size = 133;

#gather the number list
print "Please enter a list of numerical elements delimited by spaces: ";
chomp(my @numbers = split(" ", <>));

#we need a block size that evenly divides the list
while (scalar(@numbers) % $block_size ne 0) {
    print "Please enter a block size: ";
    chomp($block_size = int(<>));
}

#loop through and reverse the array slice we need
for (my $i = 0; $i < scalar(@numbers)-1; $i += $block_size){
    @numbers[$i..$i+$block_size-1] = reverse(@numbers[$i..$i+$block_size-1]);
}

#print the output
print @numbers;