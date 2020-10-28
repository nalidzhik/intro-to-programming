#include <iostream>
#include <algorithm> 
#include <vector>

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
	vector<int> numbers;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0;i < n;i++) 
	{
		cout << numbers[i] << " ";
	}

	cout << endl;
}
