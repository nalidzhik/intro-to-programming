#include <iostream>
#include <vector>

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
	vector<int> numbers;
	int k;
	cin >> k;

	for (int i = 0; i < n; i++)
	{

		int number;
		cin >> number;
		numbers.push_back(number);
	}

	int counter = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (numbers[i] + numbers[i + 1] == k)
		{
			counter++;
		}
	}
	cout << counter << endl;
}