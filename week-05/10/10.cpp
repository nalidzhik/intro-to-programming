#include <iostream>

using namespace std;

int main()
{
    int n;
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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			// Condition for task a
			// Condition for principal diagonal
			if (i == j)
			{
				cout << table[i][j] << " ";
			}

			// Condition for the elements below the diagonal
		    else if (i > j)
			{
				cout << table[i][j] << " ";
			}
			else 
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// Condition for the elements above the diagonal
			// Condition for task b
			if (i < j)
			{
				cout << table[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// Condition for task c
			if (i > j+1)
			{
				cout << table[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// Condition for task d
			if (i < j)
			{
				cout << table[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		delete[] table[i];
	}

	delete[] table; 

    return 0;
}