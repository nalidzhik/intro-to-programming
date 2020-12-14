#include <iostream>

using namespace std;

int sumOfDigits(unsigned int);

int main()
{
    unsigned int number;
    cin >> number;
    
    cout << sumOfDigits(number) << endl;

    return 0;
}
int sumOfDigits(unsigned int number)
{
    if (number < 10)
    {
        return number;
    }
    else
    {
        
        return (number % 10) + sumOfDigits(number / 10);
    }
}