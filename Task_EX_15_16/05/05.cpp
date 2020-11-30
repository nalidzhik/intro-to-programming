#include <iostream>
#include <string>

using namespace std;

void stringCompare(const string&, const string&);     

int main()
{
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

   stringCompare(str1, str2);

    return 0;
}

void stringCompare(const string& str1, const string& str2)
{
    bool isSame = true;
    for (int i = 0; i < str1.length() && i < str2.length(); i++)
    {

        if (str1[i] == str2[i])
        {
            continue;
        }
        else
        {
            isSame = false;

            if(str1[i]-str2[i] < 0)
            {
                cout << " -1" << endl;
                break;
            }
            else
            {
                cout << " 1" << endl;
                break;
            }
        }
    }

    if (isSame)
    {
        cout << "0" << endl;
    }
}
