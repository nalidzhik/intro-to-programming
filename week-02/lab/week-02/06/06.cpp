 //Задача Да се въведе цяло четирицифрено число. Да се изведе сумата, произведението и средноаритметично от цифрите му.
#include<iostream>

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
    int sum = a + b + c + d;
    int p = a * b * c * d;
    double avr = (a + b + c + d)/4;
    
    cout << "Sum= " << sum << endl;
    cout << "P= " << p << endl;
    cout << "Avr= " << avr << endl;


    return 0;



}