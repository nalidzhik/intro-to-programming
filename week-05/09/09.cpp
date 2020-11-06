#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	 
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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (numbersOfN.at(i) == numbersOfM.at(j))
			{
				cout << numbersOfN.at(i) << " ";
			}
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (numbersOfN.at(i) % 3 == 0)
		{
			cout << numbersOfN.at(i) << " ";
		}
	}

	return 0;
}
	 