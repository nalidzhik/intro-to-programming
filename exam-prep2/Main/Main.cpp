#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
     int m = 3;
     int** matrix = new int* [m];
     for (int i = 0;i < m;i++)
     {
         matrix[i] = new int[m];
         for (int j = 0;j < m;j++)
         {
             cin >> matrix[i][j];
         }
     }

     cout << calculateMatrix(matrix, m) << endl;

     int** result = transformMatrix(matrix, m);
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < m; j++)
         {
             cout << result[i][j] << " ";
         }
         cout << endl;
     }

     for (int i = 0;i < m;i++)
     {
         delete[i] matrix;
     }
     delete[] matrix;
     
    int arr[] = { 1,2,9,0,1,4,5,2 };
    cout << AnalyzeArray(arr, 8) << endl;

    char sym[] = "banana";
    char word[] = "anan";
    cout << doExitsRev(sym, word) << endl;
    cout << doExitsReversed(sym, word) << endl;

    return 0;
}
