#include <iostream>

using namespace std;

int Sum(int);

int main()
{
    int n;
    cin >> n;

    cout << Sum(n) << endl;

    return 0;
}
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return Sum(n + (n - 1));
    }
}