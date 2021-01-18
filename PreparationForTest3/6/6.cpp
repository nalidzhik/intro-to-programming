#include <iostream>

using namespace std;

int transformToSeconds(char arr[11]);

int main()
{
	char arr[11];
	for (int i = 0;i < 11;i++)
	{
		cin >> arr[i];
	}
	int sec;
	sec = transformToSeconds(arr);
	cout << sec << endl;

	return 0;
}

int transformToSeconds(char arr[11])
{
	int sec = 0;
	int min = 0;
	int hour = 0;
	int days = 0;
	days = (arr[0] - '0') * 10 + (arr[1] - '0');
	hour = (arr[3] - '0') * 10 + (arr[4] - '0');
	min = (arr[6] - '0') * 10 + (arr[7] - '0');
	sec = (arr[9] - '0') * 10 + (arr[10] - '0');

	hour += days * 24;
	min += hour * 60;
	sec += min * 60;

	return sec;
}