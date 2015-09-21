/*
	Daily Programmer Challenge 13 : Difficult
	@author:	Baron Daugherty
	@date:		2015-09-20
	@desc:		Create a rock-paper-scissors program.
				There should be no input, the computer plays against itself.
				For extra credit, give the option to weigh the chances so
				one AI will win more often.
*/

/* INCLUDES and NAMESPACES */
#include<iostream>
#include<time.h>
#include<ctime>
#include<string>
using namespace std;

void sleep(int seconds);

/* FUNCTIONS */
int main()
{
	//everything we need to play
	uint16_t player1;
	uint16_t player2;
	uint16_t p1wins = 0;
	uint16_t p2wins = 0;
	uint16_t ties = 0;
	uint16_t game = 0;
	string plays[3] = { "Rock", "Paper", "Scissors" };
	const uint16_t MAX_GAMES = 100;

	//play MAX_GAMES number of games
	while (game < MAX_GAMES)
	{
		//seed the random number generator
		srand(time(NULL));

		//some output
		cout << "ROCK...";
		sleep(1);
		cout << "PAPER...";
		sleep(1);
		cout << "SCISSORS!\n\n";
		sleep(1);

		//have the players throw
		player1 = rand() % 3;
		player2 = rand() % 3;

		//output the throws
		cout << "Player1\t\tPlayer2\n";
		if(player1 == 2)
			cout << plays[player1] << "\t" << plays[player2] << "\n";
		else
			cout << plays[player1] << "\t\t" << plays[player2] << "\n";
		
		//decide the victor
		if (player1 == player2)
		{
			cout << "TIE!\n\n";
			ties++;
		}
		else if (player1 == 2 && player2 == 0)
		{
			cout << "Player 2 wins!\n\n";
			p2wins++;
		}
		else if (player2 == 2 && player1 == 0)
		{
			cout << "Player 1 wins!\n\n";
			p1wins++;
		}
		else if (player1 > player2)
		{
			cout << "Player 1 wins!\n\n";
			p1wins++;
		}
		else
		{
			cout << "Player 2 wins!\n\n";
			p2wins++;
		}

		//increment the counter
		game++;
	}

	//output the stats
	cout << "\n\nTotals:\n";
	cout << "Player 1:\t" << p1wins << "\n";
	cout << "Player 2:\t" << p2wins << "\n";
	cout << "Ties:\t\t" << ties << "\n\n";

	if ((p1wins > p2wins) && (p1wins > ties))
		cout << "Player 1 wins!\n\n";
	else if ((p2wins > ties))
		cout << "Player 2 wins!\n\n";
	else
		cout << "Yikes! More ties than anything! NO WINNER!\n\n";

	system("pause");
	return 0;
}	//END main

void sleep(int seconds)
//sleep some number of seconds
{
	clock_t temp;
	temp = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < temp) {};
}	//END sleep