#include <bits/stdc++.h>

using namespace std;

int n, q, u, v;
int ST[20][1000001];

int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> ST[0][i];
    for (int i = 1; i <= log2(n); i++)
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
            ST[i][j] = min(ST[i - 1][j], ST[i - 1][j + (1 << (i - 1))]);
    while (q--)
    {
        cin >> u >> v;
        int x = log2(v - u + 1);
        cout << min(ST[x][u], ST[x][v - (1 << x) + 1]) << " ";
    }
    return 0;
}