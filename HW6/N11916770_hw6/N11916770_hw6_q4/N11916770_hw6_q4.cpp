#include <iostream>
#include <cmath>
using namespace std;

// Print divisors with sqrt

void printDivisors(int num);

int main()
{
	int n;

	cout << "Please enter a positive integer >= 2: ";
	cin >> n;

	printDivisors(n);
}

void printDivisors(int num)
{
	for (int i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}

	for (int k = sqrt(num) - 1; k >= 1; k--)
	{
		if (num % k == 0)
		{
			cout << num / k << " ";
		}
	}
}