#include <iostream>

using namespace std;

int task10_1(int number,int k);
int task10_2(int number,int k);
int task14(int** numbers,int N);
int task15(int** numbers,int N);
int task16(int** numbers,int N);
int task17(int** numbers, int N);

int main()
{
    int number;
    int k;
    cin >> number >> k;

    cout << task10_1(number,k) << endl;
    cout << task10_2(number,k) << endl;

    int N = 3;
    
    int** arr = new int* [N];
    for (int i = 0;i < N;i++)
    {
        arr[i] = new int[N];
        for (int j = 0;j < N;j++)
        {
            int number;
            cin >> number;
            arr[i][j] = number;
        }
    }
    cout << task14(arr,N) << endl;
    cout << task15(arr,N) << endl;
    cout << task16(arr,N) << endl;
    cout << task17(arr, N) << endl;

    for (int i = 0;i < N;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

int task10_1(int number,int k)
{
    // from the right side
    int sum = 0;
    while (k > 0)
    {
        sum += number % 10;
        number /= 10;
        --k;
    }
    return sum;
}
int task10_2(int number,int k)
{
    // from the left side
    int sum = 0;
    int rev =0;
    int remainder = 0;
    while (number != 0)
    {
        remainder= number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    while (k > 0)
    {
        sum += rev % 10;
        rev /= 10;
        --k;
    }
    return sum;
}

int task14(int** numbers,int N)
{
    int sum = 0;
    for (int i = 0;i <N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if (i == j)
            {
                sum += numbers[i][j];
            }
        }
    }
    return sum;
}
int task15(int** numbers,int N)
{
    int sum = 0;
    for (int i = 0;i <N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if (i < j)
            {
                sum += numbers[i][j];
            }
        }
    }
    return sum;
}
int task16(int** numbers,int N)
{
    int sum = 0;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if (i>j)
            {
                sum += numbers[i][j];
            }
        }
    }
    return sum;
}
int task17(int** numbers, int N)
{
    int sum = 0;
    for (int i = 0;i < N;i++)
    {
        sum += numbers[i][N - 1 - i];
    }
    return sum;
}
int task18(int** numbers, int N)
{
    int sum = 0;
    for (int i = 0;i < N;i++)
    {
        sum += numbers[i][N - 1 - i];
    }
    return sum;
}