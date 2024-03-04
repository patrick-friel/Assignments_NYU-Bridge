// Palindrome

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string input, int& len);

int main()
{
	string input;
	string str;
	cout << "Please enter a word: ";
	cin >> input;

	int len = input.size();

	if (isPalindrome(input, len))
	{
		cout << input << " is a Palindrome." << endl;
	}
	else
	{
		cout << input << " is not a Palindrome." << endl;
	}
}

bool isPalindrome(string input, int& len)
{
	int k = 1;
	for (int i = 0; i < len; i++)
	{
		if (input[i] != input[len - k])
		{
			return false;
		}
		k++;
	}
	return true;
}