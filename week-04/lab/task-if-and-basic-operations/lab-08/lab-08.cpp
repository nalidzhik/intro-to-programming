 #include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Input an integer:";
	cin >> a;
	int b;
	cout << "Input an integer:";
	cin >> b;
	int c;
	cout << "Input an integer:";
	cin >> c;

	int min = a;
	int middle = b;
	int max = c;
	if (min > max)
	{
		int tmp = max;
		max = min;
		min = tmp;
	}
	if (min > middle)
	{
		int tmp = middle;
		middle = min;
		min = tmp;
	}
	if (middle > max)
	{
		int tmp = max;
		max = middle;
		middle = tmp;
	}
	cout << min << " " << middle << " " << max << endl;
	
    return 0;
}
