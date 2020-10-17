// introcpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Задача Да се въведе цяло четирицифрено число. Да се изведе сумата, произведението и средноаритметично от цифрите му.
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
    int sum = a + b + c + d;
    int p = a * b * c * d;
    double avr = (a + b + c + d)/4;
    
    cout << "Sum= " << sum << endl;
    cout << "P= " << p << endl;
    cout << "Avr= " << avr << endl;


    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
