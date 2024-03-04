// Pin number

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

//const int PIN = 12345;

void displayPIN(int arrPIN[]);
void displayNUM(int arrNUM[], string& input);
void displayOutput(int arrNUM[], string input);

int main()
{
	srand((unsigned int)time(0));

	int rand1 = 0 + rand() % 9;
	int rand2 = 0 + rand() % 9;
	int rand3 = 0 + rand() % 9;
	int rand4 = 0 + rand() % 9;
	int rand5 = 0 + rand() % 9;
	int rand6 = 0 + rand() % 9;
	int rand7 = 0 + rand() % 9;
	int rand8 = 0 + rand() % 9;
	int rand9 = 0 + rand() % 9;
	int rand10 = 0 + rand() % 9;

	int arrPIN[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arrNUM[10] = {rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8, rand9, rand10};
	string input;

	displayPIN(arrPIN);
	displayNUM(arrNUM, input);
	displayOutput(arrNUM, input);

}

void displayPIN(int arrPIN[])
{
	cout << "Please enter your PIN according to the following mapping:" << endl << "PIN: ";

	for (int i = 0; i < 10; i++)
	{
		cout << arrPIN[i] << " ";
	}
}

void displayNUM(int arrNUM[], string& input)
{
	cout << endl << "NUM: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arrNUM[i] << " ";
	}
	cout << endl;
	cin >> input;
}

void displayOutput(int arrNUM[], string input)
{
	if ('0' + arrNUM[1] == input[0] && '0' + arrNUM[2] == input[1] && '0' + arrNUM[3] == input[2] && '0' + arrNUM[4] == input[3] && '0' + arrNUM[5] == input[4])
	{
		cout << "Your PIN is correct";
	}
	else
	{
		cout << "Your PIN is not correct";
	}
}