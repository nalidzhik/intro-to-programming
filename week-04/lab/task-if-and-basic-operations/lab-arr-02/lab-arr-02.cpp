 #include <iostream> 

using namespace std;

int main()
{
	int n;
	int arr[999];
	int number;

	cin >> n;
	 
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = n - 1;i >= 0;i--)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}

 