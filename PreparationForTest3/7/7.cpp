#include <iostream>

using namespace std;

void Date(int &n, char arr[11]);

int main()
{
	int n;
	cin >> n;

	char arr[11];
	Date(n, arr);

	for (int i = 0;i < 11;i++)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
}
void Date(int &n, char arr[11])
{
	int sec = 0;
	int min = 0;
	int days = 0;
	int hour = 0;
	min = n / 60;
	sec = n % 60;
	if (min >= 60)
	{
		hour = min / 60;
		min = min % 60;
		if (hour > 24)
		{
			days = hour / 24;
			hour = hour % 24;
		}
	}
 	arr[0]=days / 10 + '0';
	arr[1]= days % 10 + '0';
	arr[2]= ':';
	arr[3]= hour / 10 + '0';
	arr[4]= hour % 10 + '0';
	arr[5]=':';
	arr[6] = min / 10 + '0';
	arr[7] = min % 10 + '0';
	arr[8] = ':';
	arr[9] = sec /10 + '0';
	arr[10] = sec % 10 + '0';

}
