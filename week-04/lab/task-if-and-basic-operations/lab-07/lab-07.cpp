#include <iostream>

using namespace std;

int main()
{
	// TODO (nalidzhik): fix this task
	int a;
	cout << "Input an integer:";
	cin >> a;
	int b;
	cout << "Input an integer:";
	cin >> b;
	bool isPrimeA = true;
	bool isPrimeB = true;
	for (int i = 2;i < a; i++)
	{
		if (a % i == 0)
		{
			isPrimeA = false;
			break;
		}
	}
	for (int i = 2; i < b; i++)
	{
		if (b % i == 0)
		{
			isPrimeB = false;
			break;
		}
	}
	if (isPrimeA == true && isPrimeB == true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}