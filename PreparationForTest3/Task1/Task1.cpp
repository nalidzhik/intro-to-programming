#include <iostream>

using namespace std;

int findTheBiggestElement(const unsigned int[],unsigned int);
int reverseDigits(int number);

int main()
{
	int n;
	cin >> n;

	unsigned int* numbers = new unsigned int[n];
	for (int i = 0;i < n;i++)
	{
		cin >> numbers[i];
	}

	cout << findTheBiggestElement(numbers, n) << endl;

	delete[] numbers;

	int N = 627327;
	cout << reverseDigits(N) << endl;

	return 0;
}

int findTheBiggestElement(const unsigned int numbers[],unsigned int size)
{
	unsigned int biggest=numbers[0];
	for (int i = 1;i < size;i++)
	{
		if (biggest < numbers[i])
		{
			biggest = numbers[i];
		}
	}

	return biggest;
}
int reverseDigits(int number)
{
	int revNumber = 0;
	while (number > 0)
	{
		revNumber = revNumber * 10 + number% 10;
		number /= 10;
	}
	return revNumber;
}
