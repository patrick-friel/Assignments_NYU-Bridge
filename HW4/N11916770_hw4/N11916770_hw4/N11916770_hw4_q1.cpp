#include <iostream>
using namespace std;

int main()
{
    // Write two versions of a program that reads a positive integer n, and prints the first n even numbers.
    // a: Use a while loop
    // b: use a for loop

    int input;
    cout << "Please enter a positive integer: ";
    cin >> input;

    cout << "Section A: While Loop" << endl;
    int n = 0;
    int outputWhile = 2;
    while (n < input)
    {
        cout << outputWhile << endl;
        outputWhile = outputWhile + 2;
        n++;
    }

    cout << "\nSection B: For Loop" << endl;
    int outputFor = 2;
    for (int i = 0; i < input; i++)
    {
        cout << outputFor << endl;
        outputFor = outputFor + 2;
    }

}

