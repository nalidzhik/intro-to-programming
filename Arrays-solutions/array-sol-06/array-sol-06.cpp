#include <iostream>
#include <algorithm>

using namespace std;

void getMinAndMaxNumbers(int);

int main()
{
	int n;
	cin >> n;

	getMinAndMaxNumbers(n);
	return 0;
}

void getMinAndMaxNumbers(int n)
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		arr[i] = number;
	}

/*	 Find the minimum element
	cout << "\nMin Element = " << *min_element(arr, arr + n);

	 Find the maximum element
	cout << "\nMax Element = " << *max_element(arr, arr + n);

	delete[] arr; 
*/

	int min = arr[0];

	for (int i = 0;i < n;i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << min << endl;

	int max = arr[0];

	for (int i = 0;i < n;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << max << endl;
}


