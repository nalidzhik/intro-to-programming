#include <iostream>
#include<math.h>

using namespace std;

int countDigits(int n)
{
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}

void printUsingSimpleWay(int n)
{
	if (n < 1000 || n > 9999)
	{
		cout << "cannot display the digits using simple way" << endl;
		return;
	}

	cout << n / 1000 << " " << (n / 100) % 10 << " " << (n / 10) % 10 << " " << n % 10 << endl;

}

void printUsingHardWay(int n)
{
	int digitsCount = countDigits(n);

	for (int i = digitsCount - 1;i >= 0;i--)
	{
		int current = n / pow(10, i);
		n = n - (current * pow(10, i));
		cout << current << " ";
	}
}

int main()
{
	int n;
	cout << "Enter four digits number : ";
	cin >> n;

	cout << "printUsingSimpleWay -> ";
	printUsingSimpleWay(n);

	cout << "printUsingHardWay -> ";
	printUsingHardWay(n);

	return 0;
}
