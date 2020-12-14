#include <iostream>

using namespace std;

int prOfDigits(int);

int main()
{
	unsigned int number;
	cin >> number;

	cout << prOfDigits(number) << endl;

	return 0;
}
int prOfDigits(int number)
{
	if (number < 10)
	{
		return number;
	}
	else
	{
		return (number % 10 * prOfDigits(number / 10));
	}
}