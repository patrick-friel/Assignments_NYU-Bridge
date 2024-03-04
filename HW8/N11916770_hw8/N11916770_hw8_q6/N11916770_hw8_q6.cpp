// Convert num to x but not when part of a word

#include <iostream>
#include <string>
using namespace std;

void convertNums(string input, string output, int size);

int main()
{
	string input;

	cout << "Please enter a line of text:" << endl;
	getline(cin, input);

	int size = input.length();
	string output = input;

	convertNums(input, output, size);
}

void convertNums(string input, string output, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (input[i] > 47 && input[i] < 58)
		{
			if ((input[i - 1] < 65) && (input[i + 1] < 65) && (output[i - 1] > 57 || output[i - 1] < 48))
			{
				output[i] = 'x';
			}
		}
	}

	// Loop for reversing x back to nums for words that start with nums
	for (int k = size; k > 0; k--)
	{
		if (input[k] > 47 && input[k] < 58)
		{
			if (input[k + 1] > 57 || (output[k + 1] < 58 && output[k + 1] > 32))
			{
				output[k] = input[k];
			}
		}
	}
	cout << "\n" << output << "\n";
}