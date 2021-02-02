#include <iostream>

using namespace std;

double Solve(const char* const);

//à*õ^2+b*x+c=0
int main()
{
	const int SIZE = 13;
	char equation[SIZE];
	for (int i = 0;i < SIZE;i++)
	{
		cin >> equation[i];
	}

	cout << Solve(equation) << endl;

	return 0;
}
double Solve(const char*const str)
{
	int a = (str[0] - '0') * 10;
	int b= (str[6] - '0') * 10;
	int c= (str[10] - '0') * 10;
	if (str[5] == '-')
	{
		b *= -1;
	}
	if (str[9] == '-')
	{
		c *= -1;
	}
	int dis = (b * b) - (4*a * c);
	double x1 = (-b + sqrt(dis)) / (2 * a);
	double x2 = (-b - sqrt(dis)) / (2 * a);
	if (x1 > x2)
	{
		return x1;
	}
	return x2;
}