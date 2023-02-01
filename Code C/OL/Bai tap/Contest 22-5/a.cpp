#include <iostream>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < k - 3; i++)
            cout << 1 << " ";
        int x = n - k + 3;
        if (x % 2 == 1)
            cout << 1 << " " << (x - 1) / 2 << " " << (x - 1) / 2 << endl;
        else if (x % 4 == 0)
            cout << x / 2 << " " << x / 4 << " " << x / 4 << endl;
        else if (x % 4 == 2)
            cout << 2 << " " << x / 2 - 1 << " " << x / 2 - 1 << endl;
    }
    return 0;
}