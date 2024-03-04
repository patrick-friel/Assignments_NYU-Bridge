#include <iostream>
using namespace std;

// Analyze Divisors

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main()
{
	int m = 0;
	int last = 0;
	
	cout << "Please enter a number >= 2: " ;
	cin >> m;

	cout << "Perfect Numbers:\n";

	for (int i = 2; i <= m; i++)
	{
		if (isPerfect(i))
		{
			cout << i << " ";
		}
	}
	cout << "\n\nAmicable Numbers:\n";
	for (int i = 2; i <= m; i++)
	{
		int count = 0;
		int sum = 0;
		analyzeDivisors(i, count, sum);
		int temp = sum;
		sum = 0;
		count = 0;
		analyzeDivisors(temp, count, sum);
		if ((sum == i) && (temp != last) && (sum != temp))
		{
			cout << i << " and " << temp << endl;
			last = i;
		}
		
	}


}

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs)
{
	for (int i = 1; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			outCountDivs++;
			outSumDivs += i;
		}
	}

	for (int k = sqrt(num); k >= 2; k--)
	{
		if (num % k == 0)
		{
			outCountDivs++;
			outSumDivs += num / k;
		}
	}
}

bool isPerfect(int num)
{
	int count = 0;
	int sum = 0;
	analyzeDivisors(num, count, sum);

	if (num == sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}