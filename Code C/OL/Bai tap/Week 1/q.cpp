#include <iostream>

using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if (y == 2019 && m == 11 && d > 23 || y == 2019 && m == 12 || y == 2020)
        cout << "baby";
    else
    {
        if (d > 23 && m == 11 || m == 12)
            cout << 2020 - y - 1;
        else
            cout << 2020 - y;
    }
    return 0;
}