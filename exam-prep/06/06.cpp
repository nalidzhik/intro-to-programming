#include <iostream>

using namespace std;

int strlen(char str[]);
bool CheckDate(char[]);

int main()
{
    char str[] = "13.13";
    cout << CheckDate(str) << endl;

    return 0;
}

int strlen(char str[])
{
    int i = 0;
    for(;str[i]!='\0';i++)
    { }

    return i;
}

bool CheckDate(char str[])
{
    int size = strlen(str);
    if (size != 5)
    {
        return false;
    }

    if (str[2] != '.')
    {
        return false;
    }

    for (int i = 0;i < 5;i++)
    {
        if (i != 2)
        {
            if (str[i] < '0' || str[i]>'9')
            {
                return false;
            }
        }
    }

    int days = (str[0] - '0') * 10 + str[1] - '0';
    int month = (str[3] - '0') * 10 + str[4] - '0';
    if (month < 1 || month > 12)
    {
        return false;
    }

    if (days < 1)
    {
        return false;
    }

    bool isDaysValid = false;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        isDaysValid = days <= 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        isDaysValid = days <= 30;
        break;
    case 2:
        isDaysValid = days > 28;
    }

    return isDaysValid;
}