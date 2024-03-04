// N11916770_hw5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	int output = 0;
	int mult = 1;
	


	cout << "Please enter a positive integer: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			output = k * mult;
			cout << output << "\t";
		}
				
		cout << "\n";
		mult++;
	}



}
