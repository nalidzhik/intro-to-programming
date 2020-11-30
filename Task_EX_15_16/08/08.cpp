#include <iostream>
#include <string>

using namespace std;

int theLongerString(const string&, const string&);
void exchangeFirstThreeSymbols(string&, string&);

int main()
{
	string str1;
	string str2;

	cin >> str1;
	cin >> str2;

	cout << theLongerString(str1, str2) << " ";
	exchangeFirstThreeSymbols(str1, str2);

	return 0;
}
int theLongerString(const string& str1, const string& str2)
{
	if (str1.size() > str2.size())
	{
		return str1.size();
	}
	else
	{
		return str2.size();
	}
}
void exchangeFirstThreeSymbols(string& str1, string& str2)
{
	int temp = 0;

	for (int i = 0;i < 3;i++)
	{
		temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;

	}

	if (str1.size() > str2.size())
	{
		cout << str1 << endl;
	}
	else
	{
		cout << str2 << endl;
	}

}