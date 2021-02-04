#pragma once

using namespace std;

void printRectangle(int N, int M, char ch)
{
	const int NMAX = 25;
	const int MMAX = 80;

	for (int i = 1;i <= (NMAX - N) / 2; i++)
	{
		cout << endl;
	}

	for (int j = 1;j <= N;j++)
	{
		for (int i = 1;i < (MMAX - M) / 2;i++)
		{
			cout << " ";
		}

		for (int i = 0;i <= M;i++)
		{
			cout << ch;
		}

		cout << endl;
	}

	for (int i = 1;i <= (NMAX - N) / 2; i++)
	{
	cout << endl;
	}
}
