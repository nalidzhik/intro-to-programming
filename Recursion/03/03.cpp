#include <iostream>

using namespace std;

int findDivisor(int, int);

int main()
{
    int n, m;
    cin >> n >> m;

    cout << findDivisor(n, m) << endl;

    return 0;
}
int findDivisor(int n, int m)
{
    if (n == 0)
    {
        return m;
    }
    if (m == 0)
    {
        return n;
    }
    if (n == m)
    {
        return n;
    }
    if (n > m)
    {
        return findDivisor(n - m, m);
    }
    else
    {

        return findDivisor(n, m - n);
    }
}