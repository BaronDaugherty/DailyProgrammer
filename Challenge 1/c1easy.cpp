/*
@author:	Baron Daugherty
@desc:		Read in user name, age, and username then output to a file
@date:		2015-03-02
@file:		c1easy.cpp
*/

//header/namespace
#include<iostream>
#include <fstream>
#include<string>
using namespace std;

//main method drives the program
int main()
{
	//necessary variables
	string name;
	string uname;
	string age;
	ofstream outfile;

	//gather name, age, and username
	cout << "Please enter your name: ";
	cin >> name;
	
	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter your username: ";
	cin >> uname;

	//write to the file, then close it
	outfile.open("info.txt");
	outfile << "Your name is: " +name +"\n";
	outfile << "Your age is: " +age +"\n";
	outfile << "Your username is: " +uname +"\n";
	outfile.close();

	//hunky-dory
	return 0;
} //END main