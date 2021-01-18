#include <iostream>

using namespace std;

int sumOfUnevenIndex(const double numbers[]);

int main()
{
    double arr1[3] = { 5.2,3.1,2.8 };
    double arr2[] = { 1.1};

    cout << sumOfUnevenIndex(arr1) << " " << sumOfUnevenIndex(arr2) << endl;

    return 0;
}

int sumOfUnevenIndex(const double numbers[])
{
    int i = 0;
    int sum = 0;
    while (numbers[i] != '\0')
    {
        for (int j = 1;;)
        {
            sum += numbers[j];
            j += 2;
        }
        i++;
    }

    return sum;
}
 