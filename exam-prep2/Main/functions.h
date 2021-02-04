#pragma once

double calculateMatrix(int** matr, int m)
{
	double sum = 0.0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (i == j)
			{
				sum += matr[i][j];
			}

		}
	}

	for (int i = 0;i < m;i++)
	{
		sum += matr[i][m - i - 1];
	}

	return sum;
}

int** transformMatrix(int** matr, int m)
{

	for (int i = 0;i < m;i++)
	{
		int temp = 0;
		for (int j = i;j < m;j++)
		{
			temp = matr[i][j];
			matr[i][j] = matr[j][i];
			matr[j][i] = temp;
		}
	}

	return matr;
}
int AnalyzeArray(int arr[], int l)
{
	if (l < 1)
	{
		return -1;
	}

	int leftSum = 0;
	for (int i = 0;i < l;i++)
	{
		leftSum += arr[i];

		int rightSum = 0;
		for (int j = i + 1;j < l;j++)
		{
			rightSum += arr[j];

		}
		if (rightSum == leftSum)
		{
			return 1;
		}


	}
	return 0;
}

size_t strlen(char* str)
{
	int i = 0;
	for (;str[i] != '\0';i++) {};

	return i;
}

bool doExitsRev(char* symbols, char* word)
{
	int sizeSymbols = strlen(symbols);
	int sizeWord = strlen(word);

	char* symbolsReversed = new char[sizeSymbols];
	for (int i = 0;i < sizeSymbols;i++)
	{
		symbolsReversed[i] = symbols[sizeSymbols - i - 1];
	}
	for (int i = 0;i < sizeSymbols;i++)
	{
		int j = 0;
		for (int k = i;j < sizeWord && k < sizeSymbols;j++, k++)
		{
			if (symbols[k] != word[j])
			{
				break;
			}

		}

		if (j == sizeWord)
		{
			return true;
		}

	}
	return false;
}
bool doExitsReversed(char* symbols, char* word)
{
	int sizeSymbols = strlen(symbols);
	int sizeWord = strlen(word);

	for (int i = sizeSymbols - 1;i >= 0;i--)
	{
		int j = 0;
		for (int k = i;j < sizeWord && k >= 0;k--, j++)
		{
			if (symbols[k] != word[j])
			{
				break;
			}
		}

		if (j == sizeWord)
		{
			return true;
		}
	}

	return false;
}

