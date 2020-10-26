#include <iostream>
using namespace std;

int main()
{
    // 1 way
  /*  int a, b, temp;
    cin >> a >> b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl; */

    // 2 way
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << a << " " << b << endl;
    cout << b << " " << a << endl;

    return 0;
}