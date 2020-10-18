//Да се състави програма, която прочита от клавиатурата две латински букви и извежда по-големия от съответните им ASCII-кодове.

#include <iostream>

using namespace std;

int main()
{
	char input1, input2;
	cout << "Enter two letters" << endl;
	cin >> input1>>input2;
	int result1 = int(input1);
	int result2 = int(input2);
	if (result1 > result2)
	{
		cout << input1 << endl;
	}
	else {
		cout << input2 << endl;
	}


	return 0;


}

