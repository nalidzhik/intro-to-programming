// Огледално на дадено число наричаме това, съставено от цифрите му в обратен ред. Да се въведе четирицифрено число и да се изведе огледалното му.

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    if (input <= 1000 || input >= 9999) 
    {
        cout << "Please enter four digits number!" << "\n";
        return 1;
    }
    int a = input % 10;
    int b = input / 10 % 10;
    int c = input / 100 % 10;
    int d = input / 1000;
    cout << a * 1000 + b * 100 + c * 10 + d << "\n";

    return 0;
}

 