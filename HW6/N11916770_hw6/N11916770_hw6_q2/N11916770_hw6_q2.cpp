#include <iostream>
using namespace std;

// Shifted triangle and Pine tree

void printShiftedTriangle(int n, int m, char symbol, int i);
void printPineTree(int n, int m, char symbol);

int main()
{
	int n;
	int m;
	char symb;

	cout << "Please enter how many triangles you want in the pine tree, the spaces from left margin "
		 "and what symbol character to use (+ or $ or # or *) - separate all with a space: ";
	cin >> n >> m >> symb;

	printPineTree(n, m, symb);
}

void printShiftedTriangle(int n, int m, char symbol, int i)
{
	int temp = 0;
	for (int p = 0; p <= i; p++)
	{
		for (int k = m + n - temp; k > 0; k--)
		{
			cout << " ";
		}
		for (int j = 0; j <= temp * 2; j++)
		{
			cout << symbol;
		}
		cout << endl;
		temp++;
	}
}

void printPineTree(int n, int m, char symbol)
{
	for (int i = 1; i <= n; i++)
	{
		printShiftedTriangle(n, m, symbol, i);
	}
}