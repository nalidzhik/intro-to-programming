 #include <iostream>

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

    int countElementsMon = 0;

    for (int i = 0; i < numberElements +1 ; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ++countElementsMon;
        }

    }

    if (countElementsMon == numberElements)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
