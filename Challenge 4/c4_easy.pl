#!/usr/bin/perl
#  Daily Programmer Challenge 4 - Easy
#  @auth: Baron Daugherty
#  @file: c4e.pl
#  @desc: Implement a random password generator (extra credit for extra features)
#  @date: 2014-12-22

use warnings;
use strict;

#define some values, they should be self explanatory
my $MIN_LENGTH = 8;
my $length = -1;
my @valid_chars = (33, 36..57, 63..90, 95, 97..122);
my $BOUNDARY = @valid_chars;
my $password = "";

#prompt and collect length
while ($length < $MIN_LENGTH) {
    print("How many characters? (Min 8) >> ");
    chomp($length = <>);
}

#loop and generate the password
for(my $i = 0; $i < $length; $i++){
    $password = $password . chr($valid_chars[int(rand($BOUNDARY))]);
}

#display the generated password
my $file = open(FOUT, ">pass.txt") or die $!;
select FOUT;
print("Your generated password is:\n$password");