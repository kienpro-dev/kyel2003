#include <iostream>

using namespace std;

int main()
{
    int h, m, a, b, g, res;
    cin >> h >> m >> a >> b;
    g = b - a;

    if (g >= 0)
    {
        if (h + g < 24)
            res = (h + g);
        else
            res = (h + g) % 24;
    }
    else
    {
        if (h + g >= 0)
            res = (h + g);
        else
            res = 24 + (h + g);
    }
    if (res < 10)
        cout << "0" << res << ":";
    else
        cout << res << ":";
    if (m < 10)
        cout << "0" << m;
    else
        cout << m;
    return 0;
}