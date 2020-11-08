#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	int** table = new int* [n];
	
	for (int i = 0; i < n; i++)
	{
		table[i] = new int[m];

		for (int j = 0; j < m; j++)
		{
			int number;
			cin >> number;
			table[i][j] = number;
		}
	}

	int p = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i > j)
			{
				if ((j + 1 + i + 1) % 2 == 0)
				{
					p *= table[i][j];
				}
			}
		}
	}

	cout << p << endl;

	for (int i = 0; i < n; ++i)
	{
		delete[] table[i];
	}

	delete[] table;

	return 0;
}