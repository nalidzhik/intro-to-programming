
#include <iostream>

using namespace std;

int sumDigits(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{

	int n;
	cout << "Enter an integer:" << endl;
	cin >> n;
	int sum = 0;
	cout << "The sum of the digits is: " << sumDigits(n) << endl;

	return 0;
}

