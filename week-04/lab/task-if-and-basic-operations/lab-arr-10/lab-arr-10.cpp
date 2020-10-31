// TODO later
#include <iostream>
#include <vector>
#include <iomanip>
#include<algorithm>

using namespace std;

void getPrintMatrix(int, int);

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	getPrintMatrix(n, m);
    return 0;
}

void getPrintMatrix(int n, int m)
{
	vector<vector<int>> matrix(n, vector<int>(m));

	 
    for (int i = 0; i < n; i++)
    {
        vector<int> myvector;
        for (int j = 0; j < m; j++)
        {
            int tempVal = 0;
            cin >> tempVal;
            myvector.push_back(tempVal);
        }
        matrix.push_back(myvector);
    }

     
}