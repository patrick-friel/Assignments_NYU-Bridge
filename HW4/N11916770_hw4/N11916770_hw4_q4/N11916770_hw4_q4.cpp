#include <iostream>#
#include <cmath>
using namespace std;

int main()
{
    // Q4: Geometric mean

    // Section A
    cout << "Section A:" << endl;

    double length;
    int input;
    double sum = 1;

    cout << "Please enter the length of the sequence: ";
    cin >> length;

    cout << "Please enter your sequence: " << endl;

    for (int i = 0; i < length; i++)
    {
        cin >> input;
        sum *= input;
    }
    cout << "The geometric mean is " << pow(sum, 1.0 / length) << endl;

    //Section B
    cout << "\nSection B:" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;
    sum = 1;
    int count = 0;
    do 
    {
        cin >> input;
        if(input != -1)
        {
            sum *= input;
            count++;
        }
        else
        {
            break;
        }
        
    } while (input > 0);
    cout << sum << endl;
	cout << "The geometric mean is " << pow(sum, 1.0 / count) << endl;
}