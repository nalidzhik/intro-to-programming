#include <iostream>

using namespace std;

int main()
{
   
    int numberElements;
    cin >> numberElements;

    int* arr = new int[numberElements];

    for (int i = 0; i < numberElements; i++)
    {
        cin >> arr[i];
    }

    int mid;
    mid = numberElements / 2;

    for (int i = 0; i < mid; i++)
    {
        int left = arr[0];
        int right = arr[numberElements - 1];

        for (int j = right; j > mid; j--)
        {
            if (arr[i] == arr[j])
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}