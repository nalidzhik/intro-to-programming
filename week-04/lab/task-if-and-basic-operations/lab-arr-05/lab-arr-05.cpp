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
}