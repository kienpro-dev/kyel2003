#include <iostream>

using namespace std;

int main()
{
    int n, max_1, max_2, min_1, min_2;
    cin >> n;
    int a[1000][4];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] <= a[i][1])
        {
            min_1 = a[i][0];
            max_1 = a[i][1];
        }
        else
        {
            min_1 = a[i][1];
            max_1 = a[i][0];
        }
        if (a[i][2] <= a[i][3])
        {
            min_2 = a[i][2];
            max_2 = a[i][3];
        }
        else
        {
            min_2 = a[i][3];
            max_2 = a[i][2];
        }
        if (max_1 >= min_2 && max_2 >= min_1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}