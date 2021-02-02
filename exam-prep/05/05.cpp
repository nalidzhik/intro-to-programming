#include <iostream>

using namespace std;

double sqrt_a(double a, double eps);

int main()
{
   
	cout << sqrt(7) << endl;
	cout << sqrt_a(7, 1e-5) << endl;

	return 0;
}
double sqrt_a(double a, double eps)
{
	double x = a;
	double prev;

	do
	{
		prev = x;
		x = 0.5 * (x + a / x);
	} while (fabs(x - prev) >= eps);

	return x;
}