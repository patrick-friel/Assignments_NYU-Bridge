#include <iostream>
#include <string>
using namespace std;

const double KILOS = 0.453592;
const double METERS = 0.0254;

int main() {

    double inputWeight;
    double inputHeight;
    double weightKilograms;
    double heightMeters;
    double bmiRange;
    string status;

    cout << "Please enter your weight (in pounds):";
    cin >> inputWeight;
    cout << "Please enter your height (in inches):";
    cin >> inputHeight;

    weightKilograms = inputWeight * KILOS;
    heightMeters = inputHeight * METERS;

    bmiRange = weightKilograms / (heightMeters * heightMeters);

    if (bmiRange < 18.5)
    {
        status = "Underweight";
    }
    else if (bmiRange >= 18.5 && bmiRange < 25)
    {
        status = "Normal";
    }
    else if (bmiRange >= 25 && bmiRange < 30)
    {
        status = "Overweight";
    }
    else
    {
        status = "Obese";
    }

    cout << "The weight status is: " << status;

    return 0;
}
