/*
	Daily Programmer Challenge 14 : Easy
	@author:	Baron Daugherty
	@date:		2015-09-17
	@desc:		Input:	a list of elements and a block size
				Output:	the list of elements with each block reversed
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//list, elements, and block_size
	vector<int> list;
	int element = 0;
	uint16_t block_size = -1;

	//fill the list
	while (element != -1)
	{
		cout << "Please enter an element to add(-1 to stop): ";
		cin >> element;
		if (element != -1)
			list.push_back(element);
	}

	//get the block size
	while (list.size() % block_size != 0)
	{
		cout << "Please enter a block size: ";
		cin >> block_size;
	}

	//reverse magic
	for (int i = 0; i < list.size(); i += block_size)
	{
		vector<int> temp;

		//fill a temp list with the backwards block
		for (int j = (i+block_size-1); j > (i-1); j--)
		{
			temp.push_back(list[j]);
		}

		//spit the temp list into the original list
		for (int k = 0; k < temp.size(); k++)
			list[i + k] = temp[k];
	}

	//output the now reversed list
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << " ";

	//hunky-dory
	cout << "\n\n";
	system("pause");
	return 0;
}	//END main