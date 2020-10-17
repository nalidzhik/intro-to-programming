// Напишете програма, която въвежда две числа - a и b и връща (a + b)3

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, b;
    cout << "Please enter two numbers!" << endl;
    cin >> a >> b;
    cout << pow(a + b, 3) << endl;

    return 0;
}
