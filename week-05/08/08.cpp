#include <iostream>
#include <cmath>

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

    double sum = 0;

    for (int i = 0; i < numberElements; i++)
    {
        sum += arr[i];
    }
    
    double average;
    average = sum / numberElements;
    int closest = arr[0];

    for (int i = 0;i < numberElements; i++)
    {
        if (abs(average - arr[i]) < abs(average - closest))
        {
            closest = arr[i];
        }
    }

    cout <<closest << endl;

    return 0;
}