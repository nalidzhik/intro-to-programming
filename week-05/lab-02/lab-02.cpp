#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int size = 20;
    int arr[size];

    int numberElements;
    cin >> numberElements;

    for (int i = 0; i < numberElements; i++)
    {
        cin >> arr[i];
    }

    for (int i = numberElements - 1 ; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}