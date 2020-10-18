// Напишете програма, която въвежда три естествени числа a, b и c и като резултат връща корените 
// на квадратното уравнение a2x + bx + c = 0 (приемете, че винаги ще има реални корени).


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    double d = pow(b, 2) - 4 * a * c;
    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);
    cout << x1 << "\n";
    cout << x2 << "\n";

    return 0;
}
