#include <iostream>

using namespace std;

int task14(int numbers[4][4],int N);

int main()
{
    int matrix[4][4] = { {1,2,2,3},{1,1,1,1},{1,4,5,4},{1,1,2,3} };
    int n = 4;
    cout << task14(matrix,n);
	return 0;
}
int task14(int numbers[4][4],int N)
{
    int sum = 0;
    for (int i = 0;i < N;i++)
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