#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {

    double inputRealNumber;
    int inputMethod;
    int floor;
    int ceiling;
    int round;

    cout << "Please enter a real number:";
    cin >> inputRealNumber;
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> inputMethod;

    switch (inputMethod)
    {
        case FLOOR_ROUND:
            floor = inputRealNumber / 1;
            cout << floor;
            break;
        case CEILING_ROUND:
            ceiling = inputRealNumber;
            if (ceiling < inputRealNumber)
            {
                ceiling = inputRealNumber + 1;
                cout << ceiling;
            }
            else
            {
                cout << inputRealNumber;
            }
            break;
        case ROUND:
            round = inputRealNumber;
            if (round == inputRealNumber)
            {
                cout << round;
            }
            else if ((inputRealNumber - round) > .49)
            {
                round = inputRealNumber + 1;
                cout << round;
            }
            else if ((inputRealNumber - round) <= .49)
            {
                cout << round;
            }
            break;
        default:
            cout << "Invalid input";

    }
    return 0;
}
