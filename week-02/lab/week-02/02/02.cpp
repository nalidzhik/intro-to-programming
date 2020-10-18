// Да се въведе положително число а. Да се изведе:лицето и обиколката на квадрат със страна а;
// дължината на окръжност с радиус а;
// лицето и обиколката на равностранен триъгълник със страна а.

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    unsigned int a;
    cin >> a;
    cout << "Square1: " << a * a << endl;
    cout << "Per2: " << 4 * a << endl;
    cout << "length: " << 4 * 3.14 * a << endl;
    cout << "square2 "<< (a*a* sqrt(3))/4<<endl;
    cout << "per2: " << 3 * a << endl;

    return 0;
}
