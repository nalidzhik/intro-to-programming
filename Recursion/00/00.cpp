#include <iostream>
#include <vector>

using namespace std;

bool isPalidrome(vector <int>&);
bool isPossible(vector <int>&, int);

int main()
{
	int n;
	cin >> n;

	vector <int> numbers = { 1,2,3,4,5,6 };

	cout << isPalidrome(numbers,n) << endl;

	return 0;
}

bool isPalidrome(vector <int>& numbers)
{
	vector <int> reverse;

	for (int i = numbers.size() - 1; i >= 0;i--)
	{
		reverse.push_back(numbers[i]);
	}

	return numbers == reverse;
}
bool isPossible(vector <int>& numbers, int remaining)
{
	if (remaining < 0)
	{
		return false;
	}
	if (isPalidrome(numbers))
	{
		return true;
	}
	vector <int> rightSide = numbers;
	vector <int> leftSide = numbers;
	leftSide.erase(leftSide.begin());
	rightSide.pop_back();

	remaining--;

	return isPossible(leftSide, remaining) || isPossible(rightSide, remaining);
}