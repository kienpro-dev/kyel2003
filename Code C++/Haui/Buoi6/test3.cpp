#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Nhap so dong va cot: ";
    cin >> m >> n;
    int a[10][10];
    int d = 0, k = 1, row = m, col = n;
    while (k <= m * n)
    {
        for (int i = d; i < col; i++)
            a[d][i] = k++;
        for (int i = d + 1; i < row; i++)
            a[i][col - 1] = k++;
        for (int i = col - 2; i >= d && k <= m * n; i--)
            a[row - 1][i] = k++;
        for (int i = row - 2; i > d && k <= m * n; i--)
            a[i][d] = k++;
        d++, row--, col--;
    }
    cout << "Mang xoan oc cap " << m << "x" << n << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}