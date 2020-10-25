#include <iostream>

using namespace std;

int main()
{
    // TODO:
    unsigned int x1, y1;
    cin >> x1 >> y1;
    unsigned int  x2, y2;
    cin >> x2 >> y2;
    unsigned int x, y;
    cin >> x >> y;
    cout << (y - y1) - ((y2 - y1) / (x2 - x1)) * (x - x1);

    return 0;
}
