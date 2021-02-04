#pragma once

using namespace std;

struct Point
{
	int x, y;
};

int secondPower(int number)
{
	return number * number;
}

int getSide(const Point& a, const Point& b)
{
	return secondPower(a.x - b.x) + secondPower(a.y - b.y);

}

bool CheckRectangular(const Point& a, const Point& b, const Point& c)
{
	int p1 = getSide(a, b);
	int p2 = getSide(a, c);
	int p3 = getSide(b, c);

	if (p1 != 0 && p2 != 0 && p3 != 0)
	{
		if (p1 + p2 == p3)
		{
			return true;
		}

		if (p2 + p3 == p1)
		{
			return true;
		}
		if (p3 + p1 == p2)
		{
			return true;;
		}
	}
	return false;
}

int reverseNumber(int num)
{
	int rev = 0;
	int digit = 0;
	while (num != 0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num /= 10;
	}

	return rev;
}
int* sortArr(int* arr, int size)
{
	int temp = 0;
	for (int i = 0;i < size;i++)
	{
		for (int j = i;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return arr;
}
int findMax(int arr[], int size)
{
	int max = arr[0];
	for (int i = 1;i < size;i++)
	{

		if (max < arr[i])
		{
			max = arr[i];
		}

	}
	return max;
}
int* takeDigits(int num)
{
	int count = 0;
	int n = num;
	int digit = 0;
	do
	{
		++count;
		n/= 10;

	} while (n != 0);

	int* copy = new int[count];
	int i = 0;
	while (num != 0)
	{
		digit = num % 10;
		num /= 10;
		copy[i] = digit;
		i++;
	}

	return copy;
}
double valueOfSin(double radian)
{
	const double eps = 0.00001;
	double addend = eps;
	int sign = 1;
	double result = 0;
	double factorial = 1;
	double pow = radian;
	int i = 1;
	while (fabs(addend) >= eps)
	{
		if (i % 2 != 0)
		{
			addend = sign * (pow / factorial);
			result += addend;
			sign *= -1;
		}
		i++;
		pow *= radian;
		factorial *= i;
	}
	return result;
}

size_t strlen(char str[])
{
	if (str == nullptr)
	{
		return -1;
	}
	int i = 0;
	for (;str[i] != '\0';i++) {}
	return i;

}

char* CheckStr(char str[])
{
	int size = strlen(str);
	char* result = new char[size];
	for (int i = 0;i < size;i++)
	{
		result[i] = '/0';
	}

	for (int i = 0;i < size;i++)
	{
		for (int j = i+1;i < size;j++)
		{
			if (str[i] == str[j])
			{
				result[str[i]]++;
			}
		}
	}
	return result;

}