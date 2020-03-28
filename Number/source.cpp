/*
Author: Rayudu

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/

#include <iostream>
#include <stdio.h>
#include <unordered_map>

using namespace std;

class Number {
	public:
	Number() 
	{
		
	}
	bool isAnytwoNumber(int nArr[], int size,int k)
	{
		unordered_map<int,int> myMap;
		bool results = false;
		if (size < 2)
			return results;
		
		for (int i = 0; i < size; i++)
		{
			if (myMap.find(nArr[i]) != myMap.end())
			{
				results = true;
			}
			else
			{
				myMap[k - nArr[i]] = 1;
			}


		}

		return results;
	}
};

int main()
{
	Number obj;
	int n;
	int k;
	int *Arr;
	cout << "Enter Size of Array :";
	cin >> n;
	Arr = new int[n*sizeof(int)];
	for (int i = 0; i < n; i++)
	{
		cin >> Arr[i];
	}
	cout << "Enter k Value :";
	cin >> k;
	cout << "Results: ";
	cout << obj.isAnytwoNumber(Arr, n, k) << endl;
	delete [] Arr;
	
	return 0;
}
