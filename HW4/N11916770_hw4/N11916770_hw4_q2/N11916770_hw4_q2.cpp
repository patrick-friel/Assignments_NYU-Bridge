#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Roman numerals
    int input;
    string output;
    cout << "Enter a decimal value: " << endl;
    cin >> input;

    int originalInput = input;
    

    while(input > 0)
    {
        if (input >= 1000)
        {
            output += 'M';
            input = input - 1000;
        }
        else if (input >= 500)
        {
            output += 'D';
            input = input - 500;
        }
        else if (input >= 100)
        {
            output += 'C';
            input -= 100;
        }
        else if (input >= 50)
        {
            output += 'L';
            input -= 50;
        }
        else if (input >= 10)
        {
            output += 'X';
            input -= 10;
        }
        else if(input >= 5)
        {
            output += 'V';
            input -= 5;
        }
        else if (input >= 1)
        {
            output += 'I';
            input -= 1;
        }

    }
	cout << originalInput << " is " << output << endl;

}