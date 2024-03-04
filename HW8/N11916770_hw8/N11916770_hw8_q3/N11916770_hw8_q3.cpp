// Print array

#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

int main()
{
	int arr1[10] = { 9, 2, 14, 12, -3 };
	int arr1Size = 5;

	int arr2[10] = { 21, 12, 6, 7, 14 };
	int arr2Size = 5;

	int arr3[10] = { 3, 6, 4, 1, 12 };
	int arr3Size = 5;

	reverseArray(arr1, arr1Size);
	printArray(arr1, arr1Size);

	removeOdd(arr2, arr2Size);
	printArray(arr2, arr2Size);

	splitParity(arr3, arr3Size);
	printArray(arr3, arr3Size);

}

void printArray(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void reverseArray(int arr[], int arrSize)
{
	int k = arrSize - 1;
	int i = 0;
	while (i < k)
	{
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
		i++;
		k--;
	}
}

void removeOdd(int arr[], int& arrSize)
{
	int k = arrSize;
	for (int i = 0; i < arrSize - 1; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr[i] = arr[i+1];
			arr[i + 1] = arr[i + 2];
			arr[i + 2] = arr[i + 3];
			arr[i + 3] = arr[i + 4];
			k--;
		}
	}
	arrSize = k;
}

void splitParity(int arr[], int arrSize)
{
	int k = 5;
	int p = 4;
	for (int i = 0; i < arrSize - 1; i++)
	{
		if (arr[i] % 2 == 0 && k > 0)
		{
			int temp = arr[i];
			arr[i] = arr[i + p];
			arr[i + p] = temp;
			i--;
		}
		p--;
		k--;
	}
}

