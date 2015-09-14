/*
	Daily Programmer Challenge 4 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-13
	@desc:		Generate a random password of user-defined length
				from a list of predefined ASCII values
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//function prototypes
void generate_password(int length);

//main function drives the program
int main()
{
	//initial variables
	const int MIN_LENGTH = 8;
	int length = 0;

	//get the password length
	while(length < MIN_LENGTH)
	{
		cout << "Please enter the password length: ";
		cin >> length;
	}

	//get the password then pause
	generate_password(length);
	system("pause");
	
	//hunky-dory
	return 0;
}	//END main

//generate_password ... does exactly what it says
void generate_password(int length)
{
	//some initial variables
	const int MAX_CHARS = 77;
	int valid_chars[MAX_CHARS] = {33,36,37,38,39,40,41,42,43,44,45,46,47,48,
                   49, 50, 51, 52, 53, 54, 55, 56, 57, 63, 64, 65, 66, 67,
                   68, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
                   83, 84, 85, 86, 87, 88, 89, 90, 95, 97, 98, 99, 100,
                   101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
                   112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

	//seed the random number generator
	srand(time(NULL));

	//get a random character until we reach the length
	for(int i = 0; i < length; i++)
	{	
		cout << char(valid_chars[rand() % MAX_CHARS]);
	}
	cout << "\n";
}	//END generate_password