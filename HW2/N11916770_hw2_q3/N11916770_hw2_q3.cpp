#include <iostream>
using namespace std;

int Minutes_In_Day = 1440;
int Minutes_In_Hour = 60;

int main() {
    int johnDays;
    int johnHours;
    int johnMinutes;
    int billDays;
    int billHours;
    int billMinutes;

    int sumInMinutes;
    int remainingMinutes;
    int totalDays;
    int totalHours;
    int totalMinutes;

    cout << "Please enter the number of days John has worked:";
    cin >> johnDays;
    cout << "Please enter the number of hours John has worked:";
    cin >> johnHours;
    cout << "Please enter the number of minutes John has worked:";
    cin >> johnMinutes;
    cout << endl << "Please enter the number of days Bill has worked:";
    cin >> billDays;
    cout << "Please enter the number of hours Bill has worked:";
    cin >> billHours;
    cout << "Please enter the number of minutes Bill has worked:";
    cin >> billMinutes;

    sumInMinutes = ((johnDays + billDays) * Minutes_In_Day) + ((johnHours + billHours) * Minutes_In_Hour) + (johnMinutes + billMinutes);
    totalDays = sumInMinutes / Minutes_In_Day;
    remainingMinutes = sumInMinutes - (totalDays * Minutes_In_Day);
    totalHours = remainingMinutes / Minutes_In_Hour;
    remainingMinutes = remainingMinutes - (totalHours * Minutes_In_Hour);
    totalMinutes = remainingMinutes;

    cout << endl << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours, and " << totalMinutes << " minutes.";

    return 0;
}
