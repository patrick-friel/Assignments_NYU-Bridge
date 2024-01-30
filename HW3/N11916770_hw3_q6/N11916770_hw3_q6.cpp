#include <iostream>
#include <string>
using namespace std;

int main() {

    string day;
    int hour;
    char timeSymbol;
    int minutes;
    int length;
    double cost;

    cout << "Please enter the day of the week:";
    cin >> day;
    cout << "Please enter the time the call started in 24-hour notation:";
    cin >> hour>>timeSymbol>>minutes;
    cout << "Please enter the length of the call in minutes:";
    cin >> length;

    if (day == "Sa" || day == "Su")
    {
        cost = length * .15;
        cout << "The cost is: $" << cost;
    }
    else if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr")
    {
        if (hour >= 8 && (hour < 18 || (hour == 18 && minutes == 0)))
        {
            cost = length * .40;
            cout << "The cost is: $" << cost;
        }
        else
        {
            cost = length * .25;
            cout << "The cost is: $" << cost;
        }
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
