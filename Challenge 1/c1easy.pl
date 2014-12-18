#!/usr/bin/perl
use warnings;
use strict;

open(OUTPUT, "> perlOut.txt") or die "Could not open file!";

print "Please enter your name: ";
chomp( my $name = <>);

print "Please enter your age: ";
chomp( my $age = <>);

print "Please enter your username: ";
chomp( my $uname = <>);

select OUTPUT;
print "Your name is $name, you are $age years old, and your username is $uname.";