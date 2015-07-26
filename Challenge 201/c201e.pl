#!/usr/bin/perl
#  Daily Programmer Challenge 201 - Easy
#  @auth: Baron Daugherty
#  @file: c201e.pl
#  @desc: Implement a "days until..." counter
#  @date: 2015-02-09

use warnings;
use strict;
use DateTime;

my $today = DateTime->now;
$today->set_time_zone("UTC");

print("Please enter a date in the format YYYY-MM-DD...\n");
chomp(my @date = split('-', <>));

my $fut_date = DateTime->new(
    year    =>  $date[0],
    month   =>  $date[1],
    day     =>  $date[2]
);

my $day_diff = $fut_date->delta_days($today);

print($day_diff->in_units('days'), " days left!\n");