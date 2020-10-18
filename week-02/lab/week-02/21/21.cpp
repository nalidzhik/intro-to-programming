 // Да се състави програма, която прочита от клавиатурата голяма латинска буква и извежда голямата латинска буква, 
//която е симетрично разположена спрямо въведената, по отношение на средата на латинската азбука.

#include <iostream>

using namespace std;

int main()
{
	char input;
	cout << "Enter a letter: ";
	cin >> input;

	// Find input alphabetic order. Example: input B (66) -> 2
	// Formula: order = input - 'A' + 1. In our case 66 - 65 + 1 = 2
	char inputToUpperCase = toupper(input);
	int inputAlphabeticOrder = inputToUpperCase - 'A' + 1;

	// Find alphabetic order of the symetric
	int symetricAlphabetOrder = 26 - inputAlphabeticOrder + 1;
	char symetric = symetricAlphabetOrder + 'A' - 1;
	cout << symetric << endl;


    return 0;
}

 