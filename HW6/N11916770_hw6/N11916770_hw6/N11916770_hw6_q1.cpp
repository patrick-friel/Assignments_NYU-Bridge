#include <iostream>
using namespace std;

// Fibonacci

int fibonacci(int n);

int main()
{
	int n = 0;

	cout << "Please enter a positive integer: ";
	cin >> n;

	cout << fibonacci(n);
}

int fibonacci(int n)
{
	int last = 0;
	int current = 1;
	int fib = 0;

	if (n == 1)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			fib = current + last;
			last = current;
			current = fib;
		}
	}
	
	return fib;
}