
#include <iostream>
#include <vector>
#include <iomanip>
#include<algorithm>

using namespace std;

void getPrintMatrix(int, int);

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	getPrintMatrix(n, m);
    return 0;
}

void getPrintMatrix(int n, int m)
{
	vector<int> numbers;
	vector<int> rows;

	for (int i = 0; i < n; i++)
	{
		int row;
		cin >> row;
		rows.push_back(row);
	}

	for (int i = 0; i < m; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
	}

	 
		sort(numbers.begin(),numbers.end());

	 
		for (int i = m - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				rows[i][j] = numbers[i - j].back();
				numbers[i - j].pop_back();
			}
		}

		// Loop to print the matrix 
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << rows[i][j] << " ";
				 
			}
		}
}