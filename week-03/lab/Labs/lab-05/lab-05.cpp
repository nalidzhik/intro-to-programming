
#include <iostream>

using namespace std;

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;
		int sum = a + b + c;

		if (sum >= 10)
		{
			cout << i << endl;
		}
	}

	return 0;
}


