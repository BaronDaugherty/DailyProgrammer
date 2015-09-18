/*
	Daily Programmer Challenge 16 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Write a program that will take two strings and remove
				from the first any character that appears in the second.
				i.e. "Daily Programmer" and "aeiou " becomes "DlyPrgrmmr"
*/

/* INCLUDES and NAMESPACES */
#include<iostream>
#include<string>
using namespace std;

/* FUNCTIONS */
int main()
{
	//initial string, new string, remove string
	string string1;
	string newstr;
	string remove;

	//get the text and characters to remove
	cout << "Enter some text: ";
	getline(cin, string1);

	cout << "Enter characters to remove: ";
	getline(cin, remove);

	//go over the string
	for (int i = 0; i < string1.length(); i++)
	{
		bool rem = false;
		//go over the remove characters, flag if removable
		for (int j = 0; j < remove.length(); j++)
			if (string1[i] == remove[j])
			{
				rem = true;
				break;
			}
		//not removing? push it to the new string
		if (!rem)
			newstr.push_back(string1[i]);
	}

	//output the new string
	cout << "\n" << newstr << "\n\n";

	//hunky-dory
	system("pause");
	return 0;
}	//END main