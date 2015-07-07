#!/usr/bin/perl
#   Daily Programmer Challenge 11 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-07-06
#   @desc:      The program should take three arguments: a day, a month, a year
#               It will then compute the day of the week that date will fall on.
#   @note:      Technically this program does not "compute" the day of the week
#               but rather takes advantage of Perl's included DateTime module.
#               Deal with it.
use warnings;
use strict;
use DateTime;;

#gather the year, month, and day
print("Please enter a date in the the format YYYY MM DD: ");

#create a new DateTime object
my @dates = split(" ", <>);
my $date = DateTime->new(
    year => int($dates[0]),
    month => int($dates[1]),
    day => int($dates[2])
);

#output the result using DT's built in day_name and ymd methods
print($date -> day_name, ", ", $date -> ymd);