#!/usr/bin/perl
#   Daily Programmer Challenge 13 : Easy (with extra credit!)
#   @author:    Baron Daugherty
#   @date:      2015-07-06
#   @desc:      Find the number of the year for the given date.
#               For example, January 1st would be 1 and December 31st is 365.
#               For extra credit allow it to calculate leap years as well.
use warnings;
use strict;
use DateTime;

#gather the year, month, and day
print "Please enter a date in the format YYYY MM DD: ";

#create a new DateTime object
my @dates = split(" ", <>);
my $date = DateTime->new(
    year => int($dates[0]),
    month => int($dates[1]),
    day => int($dates[2])
);

#output the result using DT's build in ymd and doy methods
print "The day of the year for ", $date -> ymd, " is ", $date -> doy;