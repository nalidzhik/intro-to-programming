#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
  /*
	int num = 223743;
	cout << reverseNumber(num);

	int* arr = new int[6];
	for (int i = 0;i <6 ;i++)
	{
		cin >> arr[i];
	}
	int* result = new int[6];
	result = takeDigits(num);
	for (int i = 0;i < 6;i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << findMax(arr, 6);*/


	double x;
	cin >> x;
	double radian = (x * 3.14159) / 180;
	cout << valueOfSin(radian) << endl;

	char* str = new char[10];
	for (int i = 0;i < 10;i++)
	{
		cin >>str[i];
	}
	char* result = new char[10];
	result = CheckStr(str);
	for (int i = 0;i < 10;i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}