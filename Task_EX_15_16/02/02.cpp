#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string symbols;

    cin >> symbols;

    if (symbols.size() <= 20)
    {

        for (int i = 0; i < symbols.size(); i++)
        {
            if (symbols[i] >= 'a' && symbols[i] <= 'z')
            {
                symbols[i] = symbols[i] - 32;
            }
        }

        cout << symbols << endl;

    }
    else
    {
        cout << " -1 " << endl;
    }

    return 0;
}

  