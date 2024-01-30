#include <iostream>
using namespace std;

int main() {

    int firstInput;
    int secondInput;

    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> firstInput >> secondInput;
    int inputSum = firstInput + secondInput;
    int inputSubtract = firstInput - secondInput;
    int inputMultiply = firstInput * secondInput;
    double inputDivide = (firstInput * 1.0) / secondInput;
    int inputDiv = firstInput / secondInput;
    int inputMod = firstInput % secondInput;

    cout << firstInput << " + " << secondInput << " = " << inputSum << endl;
    cout << firstInput << " - " << secondInput << " = " << inputSubtract << endl;
    cout << firstInput << " * " << secondInput << " = " << inputMultiply << endl;
    cout << firstInput << " / " << secondInput << " = " << inputDivide << endl;
    cout << firstInput << " div " << secondInput << " = " << inputDiv << endl;
    cout << firstInput << " mod " << secondInput << " = " << inputMod << endl;

    return 0;
}
