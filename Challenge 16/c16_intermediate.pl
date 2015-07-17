#!/usr/bin/perl
#   Daily Programmer Challenge 16 : Easy
#   @author:    Baron Daugherty
#   @date:      2015-07-17
#   @desc:      Your task is to simulate a game of craps.
#
#   A crappy craps simulator!
use warnings;
use strict;

my $num_rolls = 0;
my $point;
my $roll;
my $rolling = 1;

while ($rolling) {
    $roll = int(rand(6)+1) + int(rand(6)+1);
    $num_rolls++;
    
    if ($num_rolls eq 1) {
        $point = $roll;
        if ($point eq 2 or $point eq 3 or $point eq 12) {
           print("Player craps on the come out with $point\n");
           $rolling = 0;
        }
        elsif ($point eq 7 or $point eq 11){
            print("Player wins on the come out with $point\n");
            $rolling = 0;
        }
        else{
            print("Player point set at $point\n");
        }
    }
    else{
        if ($roll eq 7) {
            print("Player craps on the pass with $roll\n");
            $rolling = 0;
        }
        elsif($roll eq $point){
            print("Player wins on the pass! Rolled $point\n");
            $rolling = 0;
        }
        else{
            print("Rolled $roll, trying for $point\n");
        }
    }
}
print("Finished in $num_rolls rolls\n");