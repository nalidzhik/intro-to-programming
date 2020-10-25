#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter four digits number : ";
    cin >> n;

    if (n >= 1000 && n <= 9999)
    {
        cout << n / 1000 << " " << (n / 100) % 10 << " " << (n / 10) % 10 << " " << n % 10 << endl;
    }

    return 0;
}