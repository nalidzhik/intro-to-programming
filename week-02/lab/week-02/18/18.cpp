// Да се състави програма, която прочита от клавиатурата цяло число от 0 до 255
//и извежда съотвтстващия му символ според ASCII таблицата.

#include <iostream>

using namespace std;


int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    cout << "ASCII symbol of " << input << " is " << char(input);
    
    return 0;
}
