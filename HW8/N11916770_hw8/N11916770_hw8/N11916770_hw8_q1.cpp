// Minimum value

#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);

void indices(int arr[], int min);

int main()
{
	int arr[20];

	cout << "Please enter 20 integers separated by a space: " << endl;
	
	for (int i = 0; i < 20; i++)
	{
		cin >> arr[i];
	}

	cout << "\nThe minimum value is " << minInArray(arr, 20) << ", and is located in the following indices: ";
	indices(arr, minInArray(arr, 20));
	cout << endl;

}

int minInArray(int arr[], int arrSize)
{
	int min = arr[0];
	for (int i = 1; i < arrSize; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	return min;
}

void indices(int arr[], int min)
{
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == min)
		{
			cout << i << " ";
		}
	}
}