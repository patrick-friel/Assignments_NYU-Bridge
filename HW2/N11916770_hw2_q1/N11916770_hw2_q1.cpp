#include <iostream>
using namespace std;

int Quarter_To_Cents = 25;
int Dime_To_Cents = 10;
int Nickel_To_Cents = 5;
int Dollar_To_Cents = 100;

int main() {

    int numberOfQuarters;
    int numberOfDimes;
    int numberOfNickels;
    int numberOfPennies;

    int total;
    int dollarAmount;
    int centAmount;

    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters:";
    cin >> numberOfQuarters;
    cout << "# of dimes:";
    cin >> numberOfDimes;
    cout << "# of nickels:";
    cin >> numberOfNickels;
    cout << "# of pennies:";
    cin >> numberOfPennies;

    total = (numberOfQuarters * Quarter_To_Cents) + (numberOfDimes * Dime_To_Cents) + (numberOfNickels * Nickel_To_Cents) + (numberOfPennies);
    dollarAmount = (total / Dollar_To_Cents);
    centAmount = (total % Dollar_To_Cents);

    cout << "The total is " << dollarAmount << " dollars and " << centAmount << " cents.";

    return 0;
}
