// Name format

#include <iostream>
#include <string>
using namespace std;

string convertMiddleName(string middleName);

int main()
{
	string firstName, middleName, lastName;

	cout << "Enter your name in the following format: first name, then middle name or initial, and then last name" << endl;
	cin >> firstName >> middleName >> lastName;

	cout << lastName << ", " << firstName << " " << convertMiddleName(middleName);
}

string convertMiddleName(string middleName)
{
	string period = ".";
	middleName = middleName[0];
	string initial = middleName + period;
	return initial;
}