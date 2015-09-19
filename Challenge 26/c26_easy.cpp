/*
	Daily Programmer Challenge 26 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-18
	@desc:		you have a string "ddaaiillyypprrooggrraammeerr". We want to
                remove all the consecutive duplicates and put them in a separate
                string, which yields two separate instances of the string
                "dailyprogramer".
                Use this list for testing:
                input: "balloons"
                output: "balons" "lo"
                input: "ddaaiillyypprrooggrraammeerr"
                output: "dailyprogramer" "dailyprogramer"
                input: "aabbccddeded"
                output: "abcdeded" "abcd"
                input: "flabby aapples"
                output: "flaby aples" "bap"
*/

/* INCLUDES and NAMESPACES */
#include<iostream>
#include<string>
using namespace std;

/* FUNCTIONS */
int main()
{
	//3 strings
	string s1;
	string s2;
	string s3;

	//get the string
	cout << "Please enter a string with duplicates: \n>>";
	getline(cin, s1);

	/* go through the string, stop if last character
	otherwise, look ahead for duplicate character
	put duplicates in s3, build new s1 in s2 */
	for (int i = 0; i < s1.length(); i++)
	{
		if (i == s1.length())
			break;
		else
		{
			if (s1[i] == s1[i + 1])
				s3.push_back(s1[i]);
			else
				s2.push_back(s1[i]);
		}
	}

	//output the new strings
	cout << "String 1: " << s2 << endl;
	cout << "String 2: " << s3 << endl;

	//hunky-dory
	system("pause");
	return 0;
}	//END main