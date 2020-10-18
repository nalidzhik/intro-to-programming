// Да се въведе число, което да представлява сума в лева и да се изведе конвертираната сума в евро 
// при курс на лева спрямо еврото 0.511306792. Да се въведе сумата в левове и да се изведе в евро.

#include <iostream>

using namespace std;

int main()
{
	double BGN;
	cout << "enter BGN" << endl;
	cin >> BGN;
	cout << "In euro:"<<0.511306792 * BGN << endl;

	return 0;
}
