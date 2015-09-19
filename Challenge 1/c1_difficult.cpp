/*
	Daily Programmer Challenge 1 : Difficult
	@author:	Baron Daugherty
	@date:		2015-09-19
	@desc:		Choose a number between 1 and 100, 
				the computer tries to guess it.
*/

#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	//necessary variables
	char answer = 'x';
	uint16_t guess;
	uint16_t num_guesses = 0;
	uint16_t lower = 1;
	uint16_t upper = 100;

	//seed the number generator
	srand(time(NULL));

	//prompt the user and wait
	cout << "Think of a number between 1 and 100...\n";
	system("pause");

	//make guesses, take input
	while (answer != 'y') 
	{
		//make a guess, increment, ask, take the answer
		if (upper - lower == 0)
		{
			guess += 1;
			break;
		}
		else
			guess = rand() % (upper - lower) + lower;
		num_guesses++;
		cout << "\nIs it " << guess << "?\n";
		cout << "Too [h]igh? too [l]ow? [y]ou got it! ";
		cin >> answer;

		switch (answer)
		{
			case 'h':	upper = guess-1;
						break;
			case 'l':	lower = guess+1;
						break;
		}
	}
	
	//output the results
	cout << "\nGuessed " << guess << " in " << num_guesses << " tries!\n";

	//hunky-dory
	system("pause");
	return 0;
}	//END main