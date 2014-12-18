#!/usr/bin/perl
#Daily Programmer challenge 1, intermediate.
#Author: Baron Daugherty
use warnings;
use strict;

#hash for events and a flag to stop the menu loop
our %events = ();
our $stop = 0;

#AddEvent lets you an event at a specific time to the hash
sub AddEvent(){
    #prompt for and collect the event name and time
    print "Please enter the event name: ";
    chomp( my $event = <>);
    print "Please enter the event time (24hr format): ";
    chomp( my $time = <>);
    
    #put the event in the hash if an event does not exist at that time
    if (not $events{$time}) {
        $events{$time} = $event;
    }
    else{
        print "\nI'm sorry, an event already exists at that time.\n";
    }
}#end AddEvent

#SeeEvents prints a table of events currently in the hash
sub SeeEvents(){
    #print the table headers and each key/value (time/name) pair for events
    print "\n\nYOUR EVENTS:\n";
    print "Time\t\tEvent\n";
    for(keys %events){
        print("$_\t\t$events{$_}\n")
    }
    print("\n");
}#end SeeEvents

#SeeEventsHours shows us events ordered by hour
sub SeeEventsHours(){
    print "\n\nYOUR EVENTS BY HOUR:\n";
    print "Time\t\tEvent\n";
    for(sort(keys %events)){
        print("$_\t\t$events{$_}\n")
    }
    print("\n");
}#end SeeEventsHours

sub Menu(){
    print("1. Enter an event\n2. See events\n3. See events by hour\n4. Exit\n\nPlease enter a number 1-4: ");
    
    chomp( my $choice = eval(<>));
    if ($choice == 1) {
        AddEvent();
    }
    elsif($choice == 2){
        SeeEvents();
    }
    elsif($choice == 3){
        SeeEventsHours();
    }
    elsif($choice == 4){
        $stop = 1;
    }
    else{
        print "\nYou made an invalid choice.\n\n";
    }    
}#end Menu


while (not $stop == 1) {
    Menu();
}
print("Goodbye!\n");
