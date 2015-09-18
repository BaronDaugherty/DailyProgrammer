/*
	Daily Programmer Challenge 16 : Intermediate
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Simulate a game of craps!
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

short roll_die();
void playout(short roll);

int main()
{
	short roll;
	//seed the number gen
	srand(time(NULL));

	//roll once
	roll = roll_die();

	//check the result and handle
	switch (roll)
	{
		case 2:
		case 3:		cout << "Player craps out with " << roll << " on the comeout.\n";
					break;
		case 7:
		case 11:	cout << "Player wins with " << roll << " on the comeout!\n";
					break;
		case 12:	cout << "Player craps out with " << roll << " on the comeout.\n";
					break;
		default:	cout << "Player sets point at: " << roll << "\n";
					playout(roll);
					break;
	}

	cout << "\n\n";
	system("pause");
	return 0;
}	//END main

void playout(short roll)
//if no win/lose on comeout, we play out the push
{
	//some needed variables
	bool win = true;
	short point = roll;
	short tot_rolls = 1;
	roll = 0;

	//we win if we match our number
	while (roll != point)
	{
		//roll and increment
		roll = roll_die();
		tot_rolls += 1;

		if (roll == 7)
		{
			cout << "Player craps out with " << roll << " on the push.\n";
			cout << tot_rolls << " total rolls.\n";
			win = false;
			break;
		}
		else
		{
			cout << "Player rolls " << roll << " trying for " << point << "\n";
		}
	}

	if(win)
		cout << "Player wins on the pass! In " << tot_rolls << " rolls\n";
	
}	//END playout

short roll_die()
//roll two d6
{
	//random value 2-12
	return (rand() % 6 + 1) + (rand() % 6 + 1);
}	//END roll