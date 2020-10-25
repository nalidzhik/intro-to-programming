 #include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	char operation;
	cin >> operation;
	switch (operation)
	{
	case '+': cout << a + b << '\n';
		break;
	case '-': cout << a - b << '\n';
		break;
	case '*': cout << a * b << '\n';
		break;
	case '/': if (b != 0)
	{
		cout << a / b << '\n';
	}
			else
	{
		cout << "0 cannot be a dividend! " << '\n';
		break;
	default: cout << "Error!" << '\n';
	}
	}

	return 0;
}

 