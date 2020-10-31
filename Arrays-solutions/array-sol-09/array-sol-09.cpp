#include <iostream>

using namespace std;

int getRepetitiveElements(int, int);

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	int repetitiveElements = getRepetitiveElements(n, m);
	cout << repetitiveElements << endl;

	return 0;
}

int  getRepetitiveElements(int n, int m)
{
	int* nArr = new int[n];
	int* mArr = new int[m];

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		nArr[i] = number;
	}

	for (int i = 0; i < m;i++)
	{
		int number;
		cin >> number;
		mArr[i] = number;
	}
	
	int counter = 0;

/*	int min = n;
	int max = m;
	if (n >= m)
	{
		min = m;
		max = n;
	}

	for (int i = 0; i < min; i++)
	{
		if (nArr[i] == mArr[i])
		{
			counter++;
		}
	} */

	for (int i = 0;i < n; i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (nArr[i] == mArr[j])
			{
				counter++;
			}
		}
	}
	return counter;

	delete[] nArr;
	delete[] mArr;
}