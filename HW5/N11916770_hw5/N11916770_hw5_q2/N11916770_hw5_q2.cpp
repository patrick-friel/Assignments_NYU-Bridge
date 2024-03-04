#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int n;
	bool guess = false;
	int x1;
	int firstNum = 1, secondNum = 100, numGuesses = 5;
	int count = 0;

	x1 = 1 + rand() % 100;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

	do
	{
		//cout << x1 << endl;
		count++;
		cout << "Range: [" << firstNum << ", " << secondNum << "], Number of guesses left: " << numGuesses << endl;
		cout << "Your guess: ";
		cin >> n;
		

		if (n == x1)
		{
			cout << "Congrats! You guessed my number in " << count << " guesses." << endl;
			guess = true;
		}
		else if (numGuesses == 1 && n != x1)
		{
			cout << "Out of guesses! My number is " << x1 << endl;
			numGuesses--;
		}
		else if (n > x1)
		{
			cout << "Wrong! My number is smaller." << endl;
			numGuesses--;
			secondNum = n - 1;
		}
		else if (n < x1)
		{
			cout << "Wrong! My number is bigger." << endl;
			numGuesses--;
			firstNum = n + 1;
		}

	} while (!guess && numGuesses > 0);
	
	


}