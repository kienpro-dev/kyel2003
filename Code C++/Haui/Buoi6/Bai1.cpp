#include <iostream>

using namespace std;

void input(int &m, int &n)
{
    cout << "Nhap so hang va cot: ";
    do
    {
        cin >> m >> n;
        if (m < 3 || m > 15 || n < 3 || n > 15)
            cout << "Khong thoa man nhap lai: ";
    } while (m < 3 || m > 15 || n < 3 || n > 15);
}

void matrixSpiralIn(int a[][15], int m, int n)
{
    int d = 0, row = m, col = n, x = 1;
    while (x <= m * n)
    {
        for (int i = d; i < col; i++)
            a[d][i] = x++;
        for (int i = d + 1; i < row; i++)
            a[i][col - 1] = x++;
        for (int i = col - 2; i >= d && x <= m * n; i--)
            a[row - 1][i] = x++;
        for (int i = row - 2; i > d && x <= m * n; i--)
            a[i][d] = x++;
        d++, row--, col--;
    }
}

void matrixOut(int a[][15], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    input(m, n);
    int a[15][15];
    matrixSpiralIn(a, m, n);
    cout << "Ma tran xoan oc cap " << m << "x" << n << " la: " << endl;
    matrixOut(a, m, n);
    return 0;
}