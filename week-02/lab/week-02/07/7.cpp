 // Да се въведат две числа - а и b, различни от 0.
 // Да се разменят стойностите им (по три начина, без да се използва функцията swap).

#include <iostream>

using namespace std;
int main()
{
    int a, b, temp;
    cin >> a >> b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;


}


