#include <iostream>

using namespace std;

int main()
{
	//TODO later
	int n;
	cin >> n;
	int m;
	cin >> m;

	int** table = new int* [n];
	int* diagonal = new int[m];

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


	return 0;
}