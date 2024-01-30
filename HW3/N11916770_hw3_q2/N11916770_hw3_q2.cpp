#include <iostream>
#include <string>
using namespace std;

int main() {
    string nameInput;
    string studentStatus;
    int graduationYear;
    int currentYear;

    cout << "Please enter your name:";
    cin >> nameInput;
    cout << "Please enter your graduation year:";
    cin >> graduationYear;
    cout << "Please enter your current year:";
    cin >> currentYear;

    if (currentYear >= graduationYear)
    {
        studentStatus = "Graduate";
    }
    else if ((graduationYear - currentYear) == 1)
    {
        studentStatus = "Senior";
    }
    else if ((graduationYear - currentYear) == 2)
    {
        studentStatus = "Junior";
    }
    else if ((graduationYear - currentYear) == 3)
    {
        studentStatus = "Sophomore";
    }
    else if ((graduationYear - currentYear) == 4)
    {
        studentStatus = "Freshman";
    }
    else
    {
        studentStatus = "not yet in college";
    }


    cout << nameInput << ", your are " << studentStatus;
    return 0;
}
