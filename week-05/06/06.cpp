#include <iostream>

using namespace std;

int main()
{
    const int size = 20;
    int arr[size];

    int numberElements;
    cin >> numberElements;

    int k;
    cin >> k;

    for (int i = 0; i < numberElements; i++)
    {
        cin >> arr[i];
    }

    for (int i = k; i< numberElements; i++)
    {
        int m;
        cin >> arr[i];
    }

    return 0;
}