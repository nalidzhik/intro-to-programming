#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // TODO: work later on this task

    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int number;
        cin >> number;

        result += number * pow(10, i);
    }

    cout << result << endl;

    return 0;
}
