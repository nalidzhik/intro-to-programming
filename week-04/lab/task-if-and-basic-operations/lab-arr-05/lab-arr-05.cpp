//TODO later
#include <iostream>
#include <vector>
#include <algorithm> 
 

using namespace std;

void getPrintMinAndMax(int);

int main()
{
	int n;
	cin >> n;

	getPrintMinAndMax(n);

	return 0;
}

void getPrintMinAndMax(int n)
{
	vector<int> numbers;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
	}

	int counter = 0;
	int temp = numbers.at(0);

	for(int i=0;i<n;i++)
	{
		if (temp == numbers.at(i))
		{
			counter = counter + 1;
		}
		 
	}
	cout << counter << endl;

	 
	 


}