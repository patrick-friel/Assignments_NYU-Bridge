#include <iostream>
using namespace std;

int Quarter_To_Cents = 25;
int Dime_To_Cents = 10;
int Nickel_To_Cents = 5;
int Dollar_To_Cents = 100;

int main() {

    int dollarInput;
    int centInput;
    int remainingSum;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollarInput >> centInput;

    int totalInput = (dollarInput * Dollar_To_Cents) + centInput;
    int numberOfQuarters = totalInput / Quarter_To_Cents;
    remainingSum = totalInput - (numberOfQuarters * Quarter_To_Cents);
    int numberOfDime = remainingSum / Dime_To_Cents;
    remainingSum = remainingSum - (numberOfDime * Dime_To_Cents);
    int numberOfNickels = remainingSum / Nickel_To_Cents;
    remainingSum = remainingSum - (numberOfNickels * Nickel_To_Cents);
    int numberOfPennies = remainingSum;

    cout << dollarInput << " dollars and " << centInput << " cents are:" << endl;
    cout << numberOfQuarters << " quarters, " << numberOfDime << " dimes, " << numberOfNickels << " nickels, and " << numberOfPennies << " pennies";

    return 0;
}
