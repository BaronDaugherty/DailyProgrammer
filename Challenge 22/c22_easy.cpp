/*
	Daily Programmer Challenge 22 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-18
	@desc:		Write a program that will compare two lists and append any
				items in the second list that are not in the first.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//loop control and two "lists"
	bool finished = false;
	vector<char> list1;
	vector<char> list2;
	
	//fill list one, one character at a time
	cout << "Compiling list 1...\n";
	while (!finished)
	{
		cout << "Enter a character[! to stop]: ";
		char entry;
		cin >> entry;
		switch (entry)
		{
			case '!':	finished = true;
						break;
			default:	list1.push_back(entry);
		}
	}
	
	//reset the flag and do the same for list 2
	finished = false;
	cout << "Compiling list 2...\n";
	while (!finished)
	{
		cout << "Enter a character[! to stop]: ";
		char entry;
		cin >> entry;
		switch (entry)
		{
		case '!':	finished = true;
			break;
		default:	list2.push_back(entry);
		}
	}

	//search list 1 for the given char in list 2
	for (int i = 0; i < list2.size(); i++)
	{
		//set a flag, search
		bool append = true;
		for (int j = 0; j < list1.size(); j++)
		{
			if (list1[j] == list2[i])
				append = false;
		}
		//append if flag unchanged
		if (append)
			list1.push_back(list2[i]);
	}

	//spit it out
	cout << "New list 1: \n";
	for (int i = 0; i < list1.size(); i++)
		cout << list1[i] << " ";

	//hunky-dory
	cout << "\n";
	system("pause");
	return 0;
}	//END main