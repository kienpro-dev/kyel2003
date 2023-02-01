#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4][4];
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                cin >> a[i][j];
        bool check = false;
        for (int i = 1; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] != 0 && a[i - 1][j] == 0 || a[i][j] != 0 && a[i][j] == a[i - 1][j])
                {
                    check = true;
                    break;
                }
            }
            if (check)
                break;
        }
        if (check)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}