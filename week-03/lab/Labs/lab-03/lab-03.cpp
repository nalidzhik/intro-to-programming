 

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    bool isPrime = true;
   
    for (int i = 2; i < n ; i++) {
        if (n % i == 0) 
        {
            isPrime = false;
            break;
        }
         
    }
    if (isPrime)
    {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
       
    return 0;
}

    