#include <iostream>

using namespace std;

int returnReversed(unsigned int);

int main()
{
    unsigned int number;
    cin >> number;

    cout<<returnReversed(number);

    return 0;
}
int returnReversed(unsigned int number)
{
    if (number < 10)
    {
        return number;
    }
    else
    {
        cout << number % 10;
       return  returnReversed(number / 10);

    }

}