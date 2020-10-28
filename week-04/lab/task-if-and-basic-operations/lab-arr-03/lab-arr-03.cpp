#include <iostream>

using namespace std;

void getPrintDigits(int);
const int countDigits(int);

int main()
{
	int number;
	cin >> number;

	getPrintDigits(number);
	return 0;
}

void getPrintDigits(int number)
{
	const int numberSize = countDigits(number);
	int* numberArr = new int[numberSize];

	for (int i = 0; i < numberSize; i++)
	{
		numberArr[i] = number % 10;
		cout << number % 10 << " ";
		number /= 10;
	}
	cout << endl;


	for (int i = 0; i < numberSize; i++)
	{
		cout << numberArr[numberSize - i - 1] << " ";
	}
	cout << endl;

	delete[] numberArr;
}

const int countDigits(int number)
{
	int count = 0;
	while (number != 0)
	{
		number = number / 10;
		++count;
	}
	return count;
}


