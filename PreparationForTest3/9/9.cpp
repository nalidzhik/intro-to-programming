#include <iostream>

using namespace std;

int sumAverageOfDigits(int number);
int reverseDigits(int number);
int changeDigits(int number, int k);

int main()
{
    int number;
    cin >> number;
    int k;
    cin >> k;

    cout << sumAverageOfDigits(number) << endl;
    cout << reverseDigits(number) << endl;
    cout << changeDigits(number, k) << endl;

    return 0;
}
int sumAverageOfDigits(int number)
{
    int remainder = 0;
    int sum = 0;
    int countDigits = 0;
    while (number > 0)
    {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
        countDigits += 1;
    }
    return sum / countDigits;
}
int reverseDigits(int number)
{
    int remainder = 0;
    int rev = 0;
    while (number > 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    return rev;
}
int changeDigits(int number, int k)
{
    int remainder = 0;
    int  changedNum = 0;
    while (number != 0)
    {
        changedNum = changedNum * 10+k;
        number /= 10;
    }
    return changedNum;
}