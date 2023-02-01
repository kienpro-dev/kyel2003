// Shadow Fiend
#include <iostream>
#include <math.h>

using namespace std;

struct ToaDo
{
    int x;
    int y;
    void nhap()
    {
        cin >> x >> y;
    }
};

void arrayIn(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int main()
{
    int n, m;
    cin >> n >> m;
    ToaDo a_n[100], a_m[100];
    for (int i = 0; i < n; i++)
        a_n[i].nhap();
    for (int i = 0; i < m; i++)
        a_m[i].nhap();
    int a_temp[100], i_temp, d_min, i_min;
    for (int i = 0; i < n; i++)
    {
        i_temp = 0;
        for (int j = 0; j < m; j++)
        {
            a_temp[i_temp] = abs(a_n[i].x - a_m[j].x) + abs(a_n[i].y - a_m[j].y);
            i_temp++;
        }
        d_min = a_temp[0], i_min = 0;
        for (int k = 1; k < i_temp; k++)
        {
            if (a_temp[k] < d_min)
            {
                d_min = a_temp[k];
                i_min = k;
            }
        }
        cout << i_min + 1 << endl;
    }
    return 0;
}