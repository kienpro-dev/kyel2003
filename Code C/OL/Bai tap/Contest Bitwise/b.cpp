#include <iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int xorr;
        if ((a - 1) % 4 == 0)
            xorr = a - 1;
        else if ((a - 1) % 4 == 1)
            xorr = 1;
        else if ((a - 1) % 4 == 2)
            xorr = a;
        else if ((a - 1) % 4 == 3)
            xorr = 0;
        if (xorr == b)
            cout << a << endl;
        else if ((xorr ^ b) == a)
            cout << a + 2 << endl;
        else
            cout << a + 1 << endl;
    }
    return 0;
}