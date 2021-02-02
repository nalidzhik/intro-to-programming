#include <iostream>

using namespace std;

int* Extract(const int number);

int main()
{
	int number;
	cin >> number;

	cout << Extract(number);

	return 0;
}

int* Extract(const int number)
{
	int digit = 0;
	int i = 0;
	int n = number;
	int arr[100] = { 0 };
	while (n != 0)
	{
		digit = number % 10;
		n /= 10;
		arr[i] = digit;
		++i;

	}
	bool visited[10] = { false };
	/* for (int i = 0;i < 10;i++)
	 {
		 arrNum[arr[i]] += 1;
	 }*/
	for (int i = 0; i < n; i++)
	{
		// Skip this element if already processed 
		if (visited[i] == true)
			continue;
		// Count frequency 
		int count = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				visited[j] = true;
				count++;
			}
		}
		int temp = 0;
		for (int k = 0;k < i;k++)
		{
			for (int j = 0;j < i - 1;j++)
			{
				if (arr[j] > arr[i])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return arr;

	}
}