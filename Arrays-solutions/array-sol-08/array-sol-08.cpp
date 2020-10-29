#include <iostream>

using namespace std;

void getCountCouples(int);

int main()
{
	int n;
	cin >> n;

	getCountCouples(n);
	return 0;
}

void getCountCouples(int n)
{
	int* arr = new int[n];
	int k;
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		arr[i] = number;
	}

	int counter = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] + arr[i + 1] == k)
		{
			counter++;
		}
	}
	cout << counter << endl;

	delete[] arr;
}