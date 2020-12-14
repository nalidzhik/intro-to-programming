#include <iostream>

using namespace std;

double Pow(double, int);

int main()
{ 
    double x;
    cin >> x;
    int n;
    cin >> n;
    
    cout << Pow(x, n) << endl;
    return 0;
}
double Pow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return x * Pow(x , n-1);
    }

    return x * 1 / Pow(x, n + 1);
}