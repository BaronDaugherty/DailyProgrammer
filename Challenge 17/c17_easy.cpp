/*
	Daily Programmer Challenge 17 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Create a program that will print a triangle of stars
				of use-specified height. Each line will have 2x
				the number of the previous line.
*/

/* INCLUDES and NAMESPACES*/
#include<iostream>
using namespace std;

/* FUNCTIONS */
int main()
{
	//number of lines and a multiplier
	uint16_t lines;
	int mult = 1;

	//get the lines
	cout << "How many lines? ";
	cin >> lines;

	//print the triangle
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < mult; j++)
		{
			cout << '*';
		}
		cout << "\n";
		mult *= 2;
	}

	//hunky-dory
	system("pause");
	return 0;
}	//END main