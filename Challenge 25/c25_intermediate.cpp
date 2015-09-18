/*
	Daily Programmer Challenge 25 : Intermediate
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Write a program that will take a number
				and print out the binary representation
*/

/* INCLUDES and NAMESPACES*/
#include<iostream>
#include<bitset>
using namespace std;

/* FUNCTIONS */
int main()
{
	int number;

	//restrict to 255 for simplicity sake
	cout << "Please enter a number[1-255]: ";
	cin >> number;
	bitset<8> x(number);

	//output
	cout << "\n" << number << " is " << x << "\n";

	//hunky-dory
	system("pause");
	return 0;
}	//END main
