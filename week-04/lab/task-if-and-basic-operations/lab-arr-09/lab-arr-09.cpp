#include <iostream>
#include <vector>
#include <algorithm>

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

int getRepetitiveElements(int n, int m)
{
	vector<int> numbersOfN;
	vector<int> numbersOfM;

	 
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		numbersOfN.push_back(number);
	}

	for (int i = 0; i < m; i++)
	{
		int number;
		cin >> number;
		numbersOfM.push_back(number);
	}

	int counter = 0;
	int min = n;
	if (n >= m)
	{
		min = m;
	}

	for (int i = 0; i < min; i++)
	{
		if (numbersOfN[i] == numbersOfM[i])
		{
			++counter;
		}
	}

	return counter;
}