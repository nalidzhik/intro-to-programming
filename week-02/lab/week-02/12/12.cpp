//  Напишете програма, която въвежда десетично число и го извежда на екрана в осмичен формат.


#include <iostream>
#include <math.h>

using namespace std;

int convert(int decimal)
{
    int i = 1, octal = 0;
    while (decimal != 0)
    {
        int rem = decimal % 8;
        decimal /= 8;
        octal += rem * i;
        i *= 10;
    }
    return octal;
}
int main()
{
    int decimal, octal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    octal = convert(decimal);
    cout << decimal << " in decimal = " << octal << " in octal";
    return 0;
}

 