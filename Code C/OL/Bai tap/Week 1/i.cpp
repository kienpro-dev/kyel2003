#include <iostream>

using namespace std;

int main()
{
    long long t, z, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> z >> a >> b >> c >> d;
        if (a * c + b * d <= z)
            cout << "WIN" << endl;
        else
        {
            if (a > b)
            {
                swap(a, b);
                swap(c, d);
            }
            if (a * c >= z)
                cout << z / a << endl;
            else
                cout << c + ((z - a * c) / b) << endl;
        }
    }
    return 0;
}