// Да се състави програма, която прочита от клавиатурата латинска буква (малка или голяма) 
//и извежда поредния й номер в латинската азбука. 


#include <iostream>

using namespace std;

int main()
{
	char input;
	cout << "Enter a character: ";
	cin >> input;
	 char inputToUpperCase = toupper(input);
	cout << "ASCII Value of " << input << " is " << inputToUpperCase - 'A' +1;
	return 0;

}

 