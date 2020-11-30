#include <iostream>
#include <string>

using namespace std;

int getLenght(const string&);

int main()
{
	string symbols;

	cin >> symbols;

	cout << getLenght(symbols);

	return 0;
}

int getLenght(const string& symbols)
{
	int symbolsCounter = 0;

	while (symbols[symbolsCounter] != '\0')
	{
		++symbolsCounter;
	}

	return symbolsCounter;
}
