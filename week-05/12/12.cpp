#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	int** table = new int* [n];

	for (int i = 0; i < n; i++)
	{
		table[i] = new int[n];

		for (int j = 0; j < n; j++)
		{
		    int number;
			cin >> number;
			table[i][j] = number;
		}
	}

	int counter = 0;

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i < j)
			{
				cout << table[i][j] << " ";
				++counter;
			}
		}
	}

	cout << counter << endl;

    return 0;
}