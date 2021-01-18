#include <iostream>

using namespace std;

void printAverageOfDigits(unsigned int N);
int task1(unsigned int n);
int task2(unsigned int n);
int task5(int numbers[]);
int task6(int numbers[]);
int task7(unsigned int number);
int task8(int numbers[]);

int main()
{
	unsigned int number1 = 3;
	unsigned int number2 = 78;
	unsigned int number3 = 82938;

	printAverageOfDigits(number1);
	cout << endl;
	printAverageOfDigits(number2);
	cout << endl;
	printAverageOfDigits(number3);
	cout << endl;

	cout << task1(number3) << endl;
	cout << task2(number3) << endl;
	int numbers[] = { 1,5,8,6,3 };
	cout << task5(numbers) << endl;
	cout << task6(numbers) << endl;
	cout << task7(number3) << endl;
	cout << task8(numbers) << endl;

	return 0;
}

void printAverageOfDigits(unsigned int N)
{
	int countSum = 0;
	int countDigits = 0;

	while (N > 0)
	{
		countSum += N % 10;
		N = N / 10;
		++countDigits;
	}

	unsigned int res = countSum / countDigits;

	cout << res;

}
int task1(unsigned int n)
{
	int k = 3;
	int current = 0;
	int count = 0;
	while (n > 0)
	{
		current = n % 10;
		n = n / 10;
		if (current % k == 0)
		{
			count += 1;
		}
	}
	return count;
}
int task2(unsigned int n)
{
	int k = 4;
	int current = 0;
	int sum = 0;
	int reminder = 0;

	while (n > 0)
	{
		current = n % 10;
		n = n / 10;
		reminder = current % k;
		sum += reminder;
	}
	return sum;

}
int task5(int numbers[])
{
	int n = 6;
	int k = 0; //reminder
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0;i < sizeof(numbers) - 1;i++)
	{
		if (numbers[i] > numbers[i + 1])
		{
			sum1 += numbers[i] % n;
		}
	}
	for (int i = 0;i < sizeof(numbers) - 1;i++)
	{
		if (numbers[i] < numbers[i + 1])
		{
			sum2 += numbers[i] % n;
		}
	}
	return sum1-sum2;
}
int task6(int numbers[])
{
	int k = 2;
	int n = 3;
	int sum = 0;
	for (int i = 0;i < sizeof(numbers);i++)
	{
		if (numbers[i] % n == k)
		{
			sum += numbers[i];
		}
	}

	return sum;
}
int task7(unsigned int number)
{
	int count = 0;
	int currentDigit = 0;
	int d = 8;

	while (number > 0)
	{
		currentDigit = number % 10;
		number /= 10;
		if (currentDigit == d)
		{
			count += 1;
		}
	}
	return count;
}
int task8(int numbers[])
{
	int biggest = numbers[0];
	for (int i = 1;i < sizeof(numbers) - 1;i++)
	{
		if (numbers[i] < numbers[i + 1] && numbers[i]<numbers[i-1] )
		{
			biggest = numbers[i];
		}
	}
	return biggest;
}