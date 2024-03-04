#include <iostream>
using namespace std;

// e constant

double eApprox(int n);

int main()
{
	cout.precision(30);

	for (int n = 1; n <= 15; n++) 
	{
		cout << "n = " << n << '\t' << eApprox(n) << endl;
	}

}

double eApprox(int n)
{
	double addend = 0;
	int fact = 0;
	int last = 1;

	for (int i = 1; i <= n; i++)
	{
		fact = i * last;
		
		addend += 1.0 / fact;

		last = fact;

	}
	return 1 + addend;
}