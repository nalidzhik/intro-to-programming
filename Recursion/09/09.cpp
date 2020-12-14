#include <iostream>

using namespace std;

int countDigits(int);

int main()
{
    int number;
    cin >> number;
 
    cout << countDigits(number) << endl;

    return 0;
}
 
int countDigits(int number)
{
   static int count=0;
    if (number >= 0 && number < 10)
    {
        return 1;
    }
    if (number > 0)
    {
        count++;
        countDigits(number / 10);
    }
    else
    {
        return count;
    }
}
