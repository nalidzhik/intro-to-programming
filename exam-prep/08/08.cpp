#include <iostream>

using namespace std;

int strlen(char*);
bool doExist(char* symbols, char* word);
 
int main()
{
	char symbols[] = "banana";
	char word[] = "nana";

	cout<<doExist(symbols, word) << endl;

	return 0;
}

int strlen(char* str)
{
	int i = 0;
	for (;i != '\0';i++)
	{}
	return i;
}

bool doExist(char* symbols, char* word)
{
	int symbolsSize = strlen(symbols);
	int wordSize = strlen(word);
	
	for (int i = 0;i < symbolsSize - wordSize;i++)
	{
		int j;
		for ( j = 0;i < wordSize;j++)
		{
			if (symbols[i + j] != word[j])
			{
				break;
			}
			if (j == wordSize)
			{
				return true;
			}
		}
	}

	return false;
}