// 
//

#include <iostream>

using namespace std;


int main()
{

	int nMinusOne = 0;
	int nMinusTwo = 1;
	int n, i, nextTerm;
	cout << "n=";
	cin >> n;
	if (n == 0) {
		cout << "0";
		return 0;
	}

	for (i = 1; i <= n; ++i)
	{
		if (i == 1) {
			continue;
		}
		if (i == 2) {
			continue;
		}
		nextTerm = nMinusOne + nMinusTwo;
		nMinusOne = nMinusTwo;
		nMinusTwo = nextTerm;
	}
	int result = nMinusOne + nMinusTwo;
	cout << result << " ";

	return 0;
}

