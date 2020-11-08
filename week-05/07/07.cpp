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

    bool sym = true;

    for ( int i = 0;i < numberElements;i++) 
    {
        if (arr[i] != arr[numberElements - 1 - i])
        {
            sym = false;
        }
    }

    if (sym)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }


    return 0;
}