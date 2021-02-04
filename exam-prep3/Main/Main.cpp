#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int arr1[] = { 1,2,3,5 };
    int arr2[] = { 2,3,6,7,3 };
    int size = 9;
    int size1 = 4;
    int size2 = 5;
    int* result = sortAndMergeTwoArrays(arr1, arr2, size1,size2);
    
    for (int i = 0;i <size;i++)
    {
        cout << result[i];
   }


    return 0;
}
