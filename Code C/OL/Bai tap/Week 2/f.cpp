#include <iostream>

using namespace std;

int main()
{
    int p, n;
    cin >> p >> n;
    int m[1000][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> m[i][j];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i][0] > m[j][0])
            {
                swap(m[i][0], m[j][0]);
                swap(m[j][1], m[i][1]);
            }
        }
    }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (p <= m[i][0])
            check = false;
        else
        {
            p += m[i][1];
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}