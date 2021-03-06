#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	 double** table = new double* [n];

	for (int i = 0; i < n; i++)
	{
		table[i] = new double[n];

		for (int j = 0; j < n; j++)
		{
			double number;
			cin >> number;
			table[i][j] = number;
		}
	}

	double sumBelowDiagonal = 0;

	for (int i = 0; i < n; ++i)
	{
		for ( int j = 0; j < n; ++j)
		{
			if (i > j)
			{
				sumBelowDiagonal += table[i][j];
			}
		}
	}

	cout << sumBelowDiagonal << endl;

    return 0;
}