#include <iostream>

using namespace std;

int findGCD(int a, int b)
{
    if (a < b)
        swap(a, b);
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    e = a * d + b * c;
    f = b * d;
    if (e % f == 0)
        cout << e / f << " 1";
    else
        cout << e / findGCD(e, f) << " " << f / findGCD(e, f);
    return 0;
}