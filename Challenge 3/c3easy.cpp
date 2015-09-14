/*
	Daily Programmer Challenge 3 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-12
	@desc:		Implement a substitution cipher
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//initial variables
	const int MAX_CHARS = 52;
	string text;
	int shift = 0;

	//an array of ordinal values A-z
	int ords[MAX_CHARS] = {65,66,67,68,69,70,71,72,73,74,75,76,78,79,80,81,82,83,84,
					85,86,88,89,90,97,98,99,100,101,102,103,104,105,106,107,
					108,109,110,111,112,113,114,115,116,117,118,119,120,121,
					122};

	//get the text and shift
	cout << "Please enter some text to encrypt: ";
	getline(cin, text);

	while(shift < 1)
	{
		cout << "Please enter the amout to shift: ";
		cin >> shift;
	}

	//iterate over the text
	for(int i = 0; i < text.size(); i++)
	{
		//iterate over the ordinal values A-z
		for(int j = 0; j < MAX_CHARS; j++)
		{
			//if they match, shift (accounting for wrap-around)
			if(text[i] == ords[j])
			{
				if((j+shift) > MAX_CHARS)
				{
					text[i] = ords[(j+shift)-MAX_CHARS];
					break;
				}
				else 
				{
					text[i] = char(ords[j+shift]);
					break;
				}
			}
		}
	}

	//spit out the text and "pause"
	cout << text << "\n";
	system("pause");

	//hunky-dory
	return 0;
}	//END main