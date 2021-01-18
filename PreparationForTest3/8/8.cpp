#include <iostream>

using namespace std;

int task11(int number, int k, int q);

int main()
{
	int number;
	cin >> number;
	int k;
	int q;
	cin >> k >> q;

	cout << task11(number, k, q);

	return 0;
}
int task11(int number, int k, int q)
{
	int sum = 0;
	int dig = 0;
	int arr[100] = { 0 };
	int j = 0;

	while (number != 0)
	{
		dig = number % 10;
		arr[j] = dig;
		j++;
		number /= 10;
	}
	k = j - k;
	q = j - q;
	for (int i = k;i >= q;i--)
	{
		sum += arr[i];
	}
	return sum;
}