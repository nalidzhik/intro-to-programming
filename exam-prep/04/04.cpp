#include <iostream>

using namespace std;
void Revert(char[]);

int main()
{
	char str[] = "sjsncdhnhaFFsva";
	Revert(str);
	cout << str << endl;

	return 0;
}
void Revert(char str[])
{
	for (int i = 0;str[i] != '\0';i++)
	{
		if (str[i] >= 'a' && str[i] < 'z')
		{
			//str[i] = (str[i] - 'a') + 'A';
			str[i] -= 32;

		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//str[i] = (str[i] - 'A') + 'a';
			str[i] += 32;
		}
	}
}

