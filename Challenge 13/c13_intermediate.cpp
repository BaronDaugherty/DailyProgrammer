/*
	Daily Programmer Challenge 13 : Intermediate
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Create a program that will take any string
				and write it out to a text file, reversed
*/

/* INCLUDES and NAMESPACES */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/* FUNCTIONS */
int main()
//drives the program
{
	//input string, loop control, and file writing
	string input;
	int counter;
	ofstream outfile;

	//get the input
	cout << "Enter some text: ";
	getline(cin, input);

	//open the file
	outfile.open("reverse.txt");

	//write to the file
	counter = input.length() -1;

	for (counter; counter > -1; --counter)
	{
		outfile << input[counter];
	}
	
	//close the file
	outfile.close();

	//hunky-dory
	system("pause");
	return 0;
}	//END