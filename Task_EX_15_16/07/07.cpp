#include <iostream>
#include <string>

using namespace std;

void deleteDuplicateSymbols( string&);

int main()
{
    string symbols;

    cin >> symbols;

    deleteDuplicateSymbols(symbols);

    return 0;
}
void deleteDuplicateSymbols( string& symbols)
{
    int index = 0;

    for (int i = 0; i < symbols.size(); i++)
    {

        for (int j = i + 1; symbols[j] != '\0'; j++)
        {
            if (symbols[j] == symbols[i])
            {
                for (int k = j; symbols[k] != '\0'; k++)
                {
                    symbols[k] = symbols[k + 1];
                }
            }
        }
    }

    cout << symbols << endl;
}