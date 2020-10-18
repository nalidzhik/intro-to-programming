// Напишете програма, която въвежда десетично число и го извежда на екрана в шестнайсетичен формат.
 

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int input;
	cout << "enter a decimal number: " << endl;
	cin >> input;
	cout.setf(ios::hex, ios::basefield);
	cout << "Hex: " << input << endl;

	return 0;

}
