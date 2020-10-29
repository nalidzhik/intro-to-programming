#include <iostream>

using namespace std;

void getSortNumbers(int);

int main()
{
	int n;
	cin >> n;

	getSortNumbers(n);

	return 0;
}

void getSortNumbers(int n)
{
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		arr[i] = number;
	}

	int i, j, min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min])
				min = j;
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for (i = 0; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
}