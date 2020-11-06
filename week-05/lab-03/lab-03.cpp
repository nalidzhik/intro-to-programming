#include <iostream>

using namespace std;

int main()
{
    const int size = 20;
    int oldArr[size];
    int newArr[size];

    int n;
    cin >> n;
    int k;
    cin >> k;
    
    for (int i = 0; i < n; i++)
    {
        cin >> oldArr[i];
        
        for (int j = 0;j < n;j++)
        {

            if (oldArr[i] != k)
            {
                newArr[j] = oldArr[i];
               
            }
             
        }
    }

    
    

     return 0;
}

 