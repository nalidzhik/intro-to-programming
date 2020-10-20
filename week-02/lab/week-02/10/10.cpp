 // Напишете програма, която въвежда две неотрицателни числа и изписва по-голямото от тях. (А можете ли без да изпозлвате сравнение?)

using namespace std;

int main()
{
    unsigned int number1, number2;
    cin >> number1 >> number2;
    if (number1 - number2 > 0)
    {
        cout << number1;
    }
    else 
    {
        cout << number2;
    }
    return 0;
    /* without sravnenie
    if (number1 > number2)    
    {
        cout << number1 << endl;
    }
    else {
        cout << number2 << endl;
    } 
    return 0; */
    
}
