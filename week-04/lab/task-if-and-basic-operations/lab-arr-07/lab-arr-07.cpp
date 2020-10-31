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

//	sort(numbers.begin(), numbers.end()); - the other way

	//bubble sort
	int min, temp, j;
	for (int i = 0; i < n - 1;i++)
	{
		min = i;
		for (j = i + 1;j < n;j++)
		{
			if (numbers.at(j) < numbers.at(min))
			{
				min = j;
				temp = numbers.at(i);
				numbers.at(i) = numbers.at(min);
				numbers.at(min) = temp;

			}
		}
	}
	for (int i = 0;i < n;i++) 
	{
		cout << numbers.at(i) << " ";
	}

	cout << endl;
}
