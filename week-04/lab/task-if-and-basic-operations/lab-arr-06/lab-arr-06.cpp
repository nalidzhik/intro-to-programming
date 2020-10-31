#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void getPrintMinAndMax(int);

int main()
{
	int n;
	cin >> n;

	getPrintMinAndMax(n);

	return 0;
}

void getPrintMinAndMax(int n)
{
	vector<int> numbers;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
	}

	//cout << "\nMin Element = " << *min_element(numbers.begin(), numbers.end());

	//cout << "\nMax Element = " << *max_element(numbers.begin(), numbers.end());

	int min = numbers.at(0);

	for (int i = 0;i < n;i++)
	{
		if (min > numbers.at(i))
		{
			min = numbers.at(i);

		}
	}

	cout << min << endl;

	int max = numbers.at(0);

	for (int i = 0;i < n;i++)
	{
		if (max < numbers.at(i))
		{
			max = numbers.at(i);
		}
	}

	cout << max << endl;
}