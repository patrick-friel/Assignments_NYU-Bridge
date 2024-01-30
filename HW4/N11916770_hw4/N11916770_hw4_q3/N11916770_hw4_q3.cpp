#include <iostream>
using namespace std;

int main()
{
    // Dec to Bin without string or array

    int input;
    int binary = 0;
    int multiplier = 1;

    cout << "Enter decimal number: ";
    cin >> input;
    int decimal = input;

    while (input > 0)
    {
        int temp = input % 2;
        binary = binary + (temp * multiplier);
        multiplier = multiplier * 10;
        input = input / 2;
    }

    cout << "\nThe binary representation of " << decimal << " is " << binary << endl;

}