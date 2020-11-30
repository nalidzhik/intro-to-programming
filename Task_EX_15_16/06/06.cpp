#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int n = 128;
    int arr[n];

	for (int i = 0; i <n; i++)
	{
		arr[i] = 0;
	}
	char current;
	cin >> current;
 
	while (current != '!')
	{
		arr[current]++;

		cin >> current;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			cout << (char) i << " -> " << arr[i] << endl;
		}
	}

    return 0;
}