#include <iostream>
#include <string>

using namespace std;

void copyString(const string&, string&);

int main()
{
	string copyFromSymbols;
	string copyToSymbols;

	cin >> copyFromSymbols;

	copyString(copyFromSymbols, copyToSymbols);

	cout << copyFromSymbols << " ? " << copyToSymbols << "\n";

	return 0;
}

void copyString(const string& copyFrom, string& copyTo)
{
	const int copyFromSize = copyFrom.size();

	copyTo.resize(copyFromSize);

	for (int i = 0; i < copyFromSize; ++i)
	{
		copyTo[i] = copyFrom[i];
	}
}