#include <iostream>
using namespace std;

int main()
{
    // Print all even numbers that have more even than odd


    int input;
    int output;

    cout << "Please input a positive integer: ";
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        int temp = i / 10;

        if (temp % 2 == 0)
        {
            if (i % 2 == 0 && i != 0)
            {
                cout << i << endl;
            }
        }
    }

	    



}