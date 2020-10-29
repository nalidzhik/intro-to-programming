#include <iostream>
#include <algorithm>

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
	int** matrix = new int* [n];
	int* diagonal = new int[m];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			int number;
			cin >> number;
			matrix[i][j] = number;
		}
	}

	for (int i = 0; i < m; i++)
	{
		int sm = matrix[i][i];
		int pos = i;

		// Loop to find the minimum  
		// element from the unsorted matrix 
		for (int j = i + 1; j < m; j++) {
			if (sm > matrix[j][j]) {
				sm = matrix[j][j];
				pos = j;
			}
		}
		// the major diagonal of matrix 
		swap(matrix[i][i], matrix[pos][pos]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}