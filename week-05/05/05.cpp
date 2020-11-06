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

    for (int i = 0; i < numberElements; i++)
    {
        if (k == i)
        {
            for (int i = k ; i < numberElements; i++)
            {
                arr[i] = arr[i + 1];
            }
            break;
        }
    }

    for (int i = 0; i < numberElements -1; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
