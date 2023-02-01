#include <iostream>

using namespace std;

int main()
{
    long int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (a + b - c == 0 || a + c - b == 0 || b + c - a == 0)
        cout << "yes";
    else
        cout << "no";
    cout << endl;
    if (d + e - f == 0 || d + f - e == 0 || e + f - d == 0)
        cout << "yes";
    else
        cout << "no";
    return 0;
}