#include <iostream>

using namespace std;

int main()
{
	const int size = 20;
	int arr[size];

	int numberElements;
	cin >> numberElements;

	for (int i = 0; i < numberElements; i++)
	{
		cin >> arr[i];
	}

	int k;
	cin >> k;
	int m;
	cin >> m;

	for (int i = numberElements; i > k; i--)
	{
		arr[i] = arr[i - 1];

	}

	arr[k] = m;

	for (int i = 0; i < numberElements + 1; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}