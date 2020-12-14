#include <iostream>

using namespace std;

int Binom(int, int);

int main()
{
    int n;
    int m;
    cin >> n;
    cin>>m;

    cout << Binom(n, m) << endl;

    return 0;
}
int Binom(int n, int m)
{
    if (m == 0 ||n==0)
    {
        return 1;
    }
    if (m == n)
    {
        return 1;
    }
    else
    {
        return Binom(n - 1, m - 1) + Binom(n - 1, m);
    }
}