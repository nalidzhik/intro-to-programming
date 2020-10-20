//  

#include <iostream>

using namespace std;

    int main() {
        int n;
        int reversedNumber = 0;
        int remainder;
        cout << "n= ";
        cin >> n;

        while (n != 0)
        {
            remainder = n % 10;
            if (remainder % 2 == 0)
            {
                remainder = n % 10;
                reversedNumber = reversedNumber * 10 + remainder;
                n /= 10;
            }
        }

        cout << "Reversed Number = " << reversedNumber;

        return 0;
    }


 
