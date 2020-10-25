#include <iostream>

using namespace std;

int main()
{
    // TODO: work later on this task

    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    int number=0;
    for (int i = 1;i <= n;i++)
    {
        cin >> number;
        number = i;
        cout << number;
    }
    
    return 0;
}
