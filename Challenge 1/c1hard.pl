#!/usr/bin/perl
#Daily Programmer Challenge 1 - Hard
#Author: Baron Daugherty
#Purpose: Think of a number between 1 and 100, the computer tries to guess
#Notes: A "binary search" would be more efficient as it eliminates half of the possibilities every turn but this was for fun
use strict;
use warnings;

#define some limits, make an initial guess, set the flag, and initialize the guesses
my $upper = 100;
my $lower = 1;
my $guess = int(rand($upper) +1); #between 1-100
my $answer ="";
my $guesses = 0;

#while we're still playing
while(not $answer eq "y"){
	#increment the guesses and output
	$guesses++;
	print("My guess is $guess; (y)es, too (h)igh, too (l)ow?\n");
	
	#grab the input and evaluate
	chomp($answer = lc(<>));
	if($answer eq "h"){
		#redefine the upper limit and make a new guess in range
		$upper = $guess;
		$guess = int(rand($upper - $lower) +$lower);
	}
	elsif($answer eq "l"){
		#redefine the lower limit and make a new guess in range
		$lower = $guess;
		$guess = int(rand($upper -$lower) +$lower);
	}
	else{
		#tell the user there was a problem and decrement the guesses by one
		print("Invalid input... try again");
		$guesses--;
	}
	
	print("\n\n");
}#end guessing loop

#output with number of guesses
print("Guessed the number in $guesses guesses!\n");
if($guesses > 7){
	print("I wasn't very efficient...\n");
}
elsif($guesses == 7){
	print("I achieved the lowest optimal efficiency.\n");
}
elsif($guesses < 7 && $guesses > 3){
	print("I was pretty efficient.\n");
}
elsif($guesses <= 3 && $guesses > 1){
	print("I did pretty damn good!\n");
}
else{
	print("I'M THE KING, JACK!\n");
}