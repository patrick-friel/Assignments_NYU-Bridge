#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double inputA, inputB, inputC;
    double factor;
    double squareRoot, squareRoot2;

    cout << "Please enter a value of a:";
    cin >> inputA;
    cout << "Please enter a value of b:";
    cin >> inputB;
    cout << "Please enter a value of c:";
    cin >> inputC;

    factor = (inputB * inputB) - (4 * (inputA * inputC));

    if (inputA == 0 && inputB == 0 && inputC == 0)
    {
        cout << "The equation has infinite number of solutions.";
    }
    else if (inputA == 0 && inputB == 0 && inputC != 0)
    {
        cout << "The equation has no solutions.";
    }
    else
    {
        if (factor > 0)
        {
            squareRoot = -inputB + (sqrt(factor) / (2 * inputA));
            squareRoot2 = -inputB - (sqrt(factor) / (2 * inputA));
            cout << "Two real solutions: " << squareRoot << " and " << squareRoot2;
        }
        else if (factor == 0)
        {
            squareRoot = -inputB / (2 * inputA);
            cout << "One real solution: " << squareRoot;
        }
        else if (factor < 0)
        {
            cout << "No real solutions.";
        }
    }

    return 0;
}
