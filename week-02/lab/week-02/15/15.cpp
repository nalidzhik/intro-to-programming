 //Да се напише програма, която приема две числа n и m и връща произведението на n * 2^m.

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	double n, m;
	cout << "Enter two numbers - n and m: ";
	cin >> n >> m;
	double p = n * pow(2, m);
	cout << p << endl;


	return 0;

}

 

 