// Да се напише функция, която установява дали едно число е четно или нечетно

#include <iostream>

using namespace std;

bool isEven(int input)
{


	if (input % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int input;
	cout << "Enter a number: ";
	cin >> input;
	
	 bool result = isEven(input);
	 cout << result << endl;
 

	return 0;
}

