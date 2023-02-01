#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m[5][5], cnt;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
                cnt = abs(3 - i - 1) + abs(3 - j - 1);
        }
    }
    cout << cnt;
    return 0;
}