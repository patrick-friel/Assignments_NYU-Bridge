#include <iostream>
using namespace std;


int main()
{
    // Hourglass

    int input;
    int n = 2;
    int space = 0;

    cout << "Please enter a positive integer: ";
    cin >> input;
    int mult = input * n - 1;

    for (int i = 0; i < input; ++i)
    {
	    for(int k = 0; k < mult; ++k)
	    {
            for(int j = 0; j < space; ++j)
            {
                cout << " ";
            }
            cout << "*";
            space = 0;
	    }
        cout << endl;
        mult = mult - n;
        space = i + 1;
    }

    space = input - 1;
    mult = 1;
    int count = 1;

    for (int w = 0; w < input; ++w)
    {
        for (int x = 0; x < mult; ++x)
        {
            for (int y = 0; y < space; ++y)
            {
                cout << " ";
            }
            cout << "*";
            space = 0;
        }
        cout << endl;
        mult = mult + n;
        count++;
        space = input - count;
    }

}