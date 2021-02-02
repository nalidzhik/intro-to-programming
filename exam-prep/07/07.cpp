#include <iostream>

using namespace std;

int DigitPos(long num, int k);
int length(long num);

int main()
{
	long num = 17173;
	int k = 4;

	cout << DigitPos(num, k) << endl;
	return 0;
}

int length(long num)
{
	int length = 0;
	while (num > 0)
	{
		num /= 10;
		++length;
	}

	return length;
}

int DigitPos(long num, int k)
{

	int size = length(num);

	if (size < k)
	{
		return -1;
	}

	int iteration = size - k;
	for (int i = 1;i <= iteration;i++)
	{
		num /= 10;
	}
	return num % 10;
}

