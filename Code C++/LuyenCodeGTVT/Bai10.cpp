// lam bai tap
#include <iostream>

using namespace std;

int main()
{
    int x, b, c, d;
    cin >> x >> b >> c >> d;
    int a[4];
    a[0] = x, a[1] = b, a[2] = c, a[3] = d;
    if (c > b || x > d)
        cout << 0;
    else
    {
        for (int i = 0; i < 3; i++)
            for (int j = i + 1; j < 4; j++)
                if (a[i] > a[j])
                    swap(a[i], a[j]);
        cout << a[2] - a[1];
    }
    return 0;
}